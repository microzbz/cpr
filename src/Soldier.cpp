#include "Soldier.h"

Soldier::Soldier(std::string name){
    this->name = name;
    this->_ptr_gun = nullptr;
}

void Soldier::addGun(Gun *_ptr_gun){
    this->_ptr_gun = _ptr_gun;
}

void Soldier::addBulletToGun(int num){
    this->_ptr_gun->addBullet(num);
}

bool Soldier::fire(){
    return (this->_ptr_gun->shoot());
}

Soldier::~Soldier(){
    if(this->_ptr_gun == nullptr){
        return;
    }

    delete this->_ptr_gun;
    this->_ptr_gun = nullptr;
}