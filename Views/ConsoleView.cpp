#include "ConsoleView.h"

void ConsoleView::ShowWelcome() const {
    std::cout << "========================================\n";
    std::cout << "   CHAO MUNG DEN VOI FISHING TOGETHER   \n";
    std::cout << "            (Phien ban Console)         \n";
    std::cout << "========================================\n";
}

void ConsoleView::ShowMenu() const {
    std::cout << "\n--- MENU CHINH ---\n";
    std::cout << "1. Quang can cau\n";
    std::cout << "2. Xem tui do\n";
    std::cout << "3. Thoat game\n";
    std::cout << "Nhap lua chon cua ban: ";
}

// Hàm đa năng để in ra bất kỳ thông báo nào từ hệ thống
void ConsoleView::ShowMessage(const std::string& message) const {
    std::cout << ">> " << message << "\n";
}

// Hàm duyệt qua túi đồ của nhân vật và in ra màn hình
void ConsoleView::ShowInventory(const Character& player) const {
    std::cout << "\n--- TUI DO CUA [" << player.GetName() << "] ---\n";
    
    // Lấy túi đồ từ Model
    std::vector<Fish> inv = player.GetInventory();

    if (inv.empty()) {
        std::cout << "Tui do dang trong rong. Hay xach can len va di cau di!\n";
    } else {
        // Vòng lặp in ra từng con cá
        for (size_t i = 0; i < inv.size(); ++i) {
            std::cout << i + 1 << ". " << inv[i].GetName() 
                      << " | Nang: " << inv[i].GetWeight() << "kg"
                      << " | Do hiem: " << inv[i].GetRarity() << " SAO\n";
        }
    }
    std::cout << "----------------------------------------\n";
}