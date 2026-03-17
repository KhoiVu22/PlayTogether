#pragma once
#include <string>

class Fish {
private:
    std::string name;
    float weight;       // Weight in kg
    int rarity;         // 1 = Common, 2 = Rare, 3 = Legendary, etc.
    float difficulty;   // Time limit in seconds for the player to react

public:
    // Constructor
    Fish(std::string fishName, float fishWeight, int fishRarity, float fishDifficulty);

    // Getters
    std::string GetName() const;
    float GetWeight() const;
    int GetRarity() const;
    float GetDifficulty() const;
};

