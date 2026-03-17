#include "Character.h"

// Constructor: Gán tên nhân vật và mặc định chưa có cần câu (trỏ vào hư vô - nullptr)
Character::Character(std::string playerName) {
    name = playerName;
    equippedRod = nullptr; 
}

std::string Character::GetName() const {
    return name;
}

// Hành động: Trang bị một cây cần câu mới
void Character::EquipRod(Rod* newRod) {
    equippedRod = newRod;
}

Rod* Character::GetEquippedRod() const {
    return equippedRod;
}

// Hành động: Nhét con cá vừa câu được vào túi
void Character::AddFishToInventory(Fish caughtFish) {
    inventory.push_back(caughtFish); // push_back là lệnh nhét thêm 1 món vào cuối danh sách vector
}

// Lấy danh sách cá ra để đếm hoặc hiển thị
std::vector<Fish> Character::GetInventory() const {
    return inventory;
}