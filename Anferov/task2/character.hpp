//
//  character.hpp
//  C++ project
//
//  Created by Игорь Анфёров on 04.03.2017.
//  Copyright © 2017 Игорь Анфёров. All rights reserved.
//

#ifndef character_hpp
#define character_hpp

#include <map>
#include "weapon.hpp"
#include "armor.hpp"

class character
{
    double strength;
    double endurance;
    double speed;
    std::map<weapon *, double> skills;
    weapon *curr_weapon;
    armor *curr_armor;
};

class peasant: public character
{
};

class archer: public character
{
};

class knight: public character
{
};

#endif /* character_hpp */
