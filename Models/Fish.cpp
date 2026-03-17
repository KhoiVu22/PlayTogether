#include "Fish.h"

// Constructor implementation
Fish::Fish(std::string fishName, float fishWeight, int fishRarity, float fishDifficulty) {
    name = fishName;
    weight = fishWeight;
    rarity = fishRarity;
    difficulty = fishDifficulty;
}

// Getters implementation
std::string Fish::GetName() const { 
    return name; 
}

float Fish::GetWeight() const { 
    return weight; 
}

int Fish::GetRarity() const { 
    return rarity; 
}

float Fish::GetDifficulty() const { 
    return difficulty; 
}