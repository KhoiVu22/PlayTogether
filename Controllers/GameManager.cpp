#include "GameManager.h"
#include <iostream>
#include <cstdlib>  
#include <ctime>   

using namespace std;
GameManager :: GameManager(string playerName){
    player = new Character(playerName);
    isPlaying = true;
    InitializeGame();
}

GameManager :: ~GameManager(){
    delete player;
}

void GameManager:: InitializeGame() {
    // 1. Khởi tạo mầm số ngẫu nhiên
    srand(static_cast<unsigned int>(time(0)));

    // 2. Tặng người chơi cần câu tân thủ
    Rod* starterRod = new Rod ("Cần câu Gỗ", 0.1f, 0.5f);
    player->EquipRod(starterRod);

    // 3. Thêm các loại cá vào hồ (Tên, Nặng, Độ hiếm, Độ khó)
    fishPool.push_back(Fish("Cá chép", 1.0f, 1.0f ,0.1f));
    fishPool.push_back(Fish("Cá vược", 20.0f, 2.0f, 0.4f));
    fishPool.push_back (Fish("Cá heo", 40.0f, 5.0f, 0.6f));
}

void GameManager::HandleFishing(){
    view.ShowMessage("Ban vung can cau xuong dong nuoc lanh...");
    // 1. Random ra một con cá từ hồ
    int randomIndex = rand() % fishPool.size();
    Fish targetFish = fishPool[randomIndex];

    // 2. Tính toán tỉ lệ câu thành công (Mô phỏng)
// Giả sử: Tỉ lệ cơ bản là 50%, trừ đi độ khó của cá, cộng thêm bonus của cần câu
    float baseChance = 0.5f;
    float catchChance = (baseChance - targetFish.GetDifficulty() - player->GetEquippedRod()->GetCatchChanceBonus());
// Random một số từ 0.0 đến 1.0 để xét duyệt
    float roll = static_cast<float>(rand()) / static_cast<float>(RAND_MAX);

    if (roll <= catchChance){
        player->AddFishToInventory(targetFish);
        view.ShowMessage("Ca can cau! Ban da bat duoc [" + targetFish.GetName() + "]!");
    }
    else {
        view.ShowMessage("Oai khom! Con ca da day dut va chay mat.");
    }
}

// Hàm chạy vòng lặp chính của game
void GameManager::Run() {
    view.ShowWelcome();

    while (isPlaying) {
        view.ShowMenu();
        
        int choice;
        std::cin >> choice;

        switch (choice) {
            case 1:
                HandleFishing();
                break;
            case 2:
                view.ShowInventory(*player);
                break;
            case 3:
                isPlaying = false;
                view.ShowMessage("Hen gap lai ban lan sau!");
                break;
            default:
                view.ShowMessage("Lua chon khong hop le. Vui long nhap lai!");
                break;
        }
    }
}
