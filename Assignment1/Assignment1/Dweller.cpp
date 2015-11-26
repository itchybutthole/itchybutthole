#include "Dweller.h"

Dweller::Dweller()
{

}

Dweller::Dweller(const string& name, const int& specialValue) : SPECIAL(0000000), health(100), radiation(0), stimpak(0), radAway(0)
{
    this->position.exist.x = 0;
    this->position.exist.y = 0;
    SPECIAL = specialValue;
}

Dweller::~Dweller()
{
}

const int Dweller::getCurrentHealth()
{
    return health;
}

const int Dweller::getCurrentRadDamage()
{
    return radiation;
}

bool Dweller::isDead()
{
    if (getCurrentHealth() < 1)
        return true;
    else return false;
}

void Dweller::useStimpak()
{
    health += 20;
    if (getCurrentHealth() > 100)
        health = 100;
}

void Dweller::useRadAway()
{
    if (getCurrentRadDamage() > 100)
        radiation = 100;

    radiation -= 10;

    if (getCurrentRadDamage() < 0)
        radiation = 0;
}

bool Dweller::recieveRadDamage(const int&)
{
    if (radiation != 0)
    {
        health = 100 - radiation;
    }
    return true;
}
