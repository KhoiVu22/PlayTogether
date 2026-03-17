#include "Rod.h"
using namespace std;
Rod :: Rod (std::string rodName, float bonusChance, float timeReduction){
    string Name = rodName;
    float catchChanceBonus = bonusChance;
    float waitTimeReduction = timeReduction;
}

float Rod ::GetCatchChanceBonus() const {
    return catchChanceBonus;
}

float Rod::GetWaitTimeReduction () const {
    return waitTimeReduction;
}

string Rod::GetName() const {
    return name;
}
