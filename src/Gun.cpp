#include "Gun.h"
#include "iostream"

using namespace std;

void Gun::addBullet(int bull_num){
    this->_bull_count += bull_num;
}

bool Gun::shoot(){
    if(this->_bull_count <=0){
        cout << "no bullet could not shoot" << endl;
        return false;
    }
    cout << "shoot success" << endl;
    this->_bull_count -=1;
    return true;
}