#pragma once
#include <string>

class Gun
{
    public:
        Gun(std::string type){
            this->_bull_count=0;
            this->_type = type;
        }

        void addBullet(int _bull_num);
        bool shoot();

    private:
        int _bull_count;
        std::string _type; 
};
