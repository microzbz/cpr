#include <Point.h>
#include <string>
#include <Gun.h>

using namespace std;

Point::Point(/* args */)
{
}

Point::~Point()
{
}

//类定义好的函数，在实现cpp中都要类型保持一致，再实现
void Point::pionterTest(){
    //指针
    int a = 10;
    int *p = &a;
    cout<< a << "*p is "<< *p << endl;
    //const Gun gun("AK47"); const 修饰表示常对象，这个时候对象内容也无法修改，编译的时候会报错
    // const Gun gun("AK47");
    // gun.addBullet(10);
    const Gun *gun();
    

}

