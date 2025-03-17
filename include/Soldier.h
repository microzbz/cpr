#pragma once
#include <string>

#include "Gun.h"

class Soldier
{
private:
    std::string name;
    Gun *_ptr_gun;
public:
    Soldier(std::string name);
    void addGun(Gun *ptr_gun);
    void addBulletToGun(int num);
    bool fire();
    ~Soldier();
};
