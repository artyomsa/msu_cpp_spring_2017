class weapon;
class armor;
class person
{
public:
    int power;
    int speed;
    int endurance;
    int ability;
    weapon *current_weapon;
    armor *current_armor;
};

class villager : public person
{

};

class archer : public person
{

};

class knight : public person
{

};

