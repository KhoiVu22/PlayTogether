#pragma once 

#include <string>
class Rod {
    private:
        std :: string name;
        float catchChanceBonus;
        float waitTimeReduction;
    
    public:
    //Constructor
    Rod(std::string rodName, float bonusChance, float timeReduction);
    // Getters
    std::string GetName() const;
    float GetCatchChanceBonus() const;
    float GetWaitTimeReduction() const;
};