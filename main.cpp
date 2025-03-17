#include "Gun.h"
#include "Soldier.h"
#include "Point.h"
#include "iostream"

using namespace std;

void test(){
    //构建类的方式
    // Soldier sanduo("xusanduo");
    // sanduo.addGun(new Gun("AK47"));
    // sanduo.addBulletToGun(20);
    // sanduo.fire();
    Point p;
    p.pionterTest();
}

int main(){
    int a=0;
    std::cout << "Pointor  print " << std::endl;
    test(); 
    return 0;
}