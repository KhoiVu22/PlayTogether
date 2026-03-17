#pragma once
#include <string>
#include <vector>    // Thư viện mảng động (danh sách có thể co giãn) của C++
#include "Fish.h"    // Phải import Fish vào để nhét vào túi đồ
#include "Rod.h"     // Phải import Rod vào để nhân vật có thể cầm

class Character {
private:
    std::string name;
    Rod* equippedRod;            // Dùng con trỏ (Pointer) vì ban đầu có thể chưa có cần câu (nullptr)
    std::vector<Fish> inventory; // Một danh sách (túi đồ) chứa các con cá đã câu được

public:
    // Constructor: Chỉ cần truyền tên người chơi lúc mới tạo
    Character(std::string playerName);

    // Thông tin cơ bản
    std::string GetName() const;

    // Quản lý Cần câu
    void EquipRod(Rod* newRod);
    Rod* GetEquippedRod() const;

    // Quản lý Túi đồ (Inventory)
    void AddFishToInventory(Fish caughtFish);
    std::vector<Fish> GetInventory() const; 
};