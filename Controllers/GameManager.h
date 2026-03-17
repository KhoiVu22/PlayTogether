#pragma once

#include <vector>
#include "../Models/Character.h"
#include "../Models/Fish.h"
#include "../Models/Rod.h"
#include "../Views/ConsoleView.h"

class GameManager {
private:
    Character* player;
    ConsoleView view;
    std::vector<Fish> fishPool; // "Hồ cá" chứa các loại cá có thể xuất hiện
    bool isPlaying;

    // Các hàm xử lý logic nội bộ
    void InitializeGame();
    void HandleFishing();

public:
    GameManager(std::string playerName);
    ~GameManager(); // Destructor để dọn dẹp bộ nhớ (rất quan trọng trong C++)

    void Run(); // Hàm khởi động vòng lặp game
};

