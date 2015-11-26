#ifndef DWELLER_H
#define DWELLER_H

#include "GameObject.h"
#include "Vec2D.h"

class Dweller : public GameObject
{
private:
    Vec2D position;
    int SPECIAL;
    int health;
    int radiation;
    int stimpak;
    int radAway;

public:
    Dweller();
    Dweller(const string&, const int&);
    ~Dweller();
    const int getSPECIAL();
    const int getCurrentHealth();
    const int getCurrentRadDamage();
    const int getAttackDmg();
    void setPosition(const Vec2D&);
    const Vec2D getPosition();
    bool recieveHealthDamage(const int&);
    bool recieveRadDamage(const int&);
    void recieveEquipmentDamage(const int&);
    void addStimpak(const int&);
    void addRadAway(const int&);
    void useStimpak();
    void useRadAway();


    bool isDead();
    //virtual int getCount() = 0;
};

#endif //DWELLER_H
