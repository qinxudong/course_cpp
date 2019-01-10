//
// Created by qin on 18-11-30.
//
#include <iostream>
using namespace std;

class C0
{
private:
//protected:
    int age;
    void fun()
    {
        age = 12;
        cout << age << endl;
    }

    friend void fun2();         // 申明友元函数的格式
    friend int main();
    friend class C1;            // 申明友元类
};

class C1
{
public:
    C0 c0;
    void fun1()
    {
        c0.fun();
    }
};

void fun2()
{
    C0 c0;
    c0.fun();
}

int main()
{
    fun2();

    C0 c0;
    c0.fun();

    C1 c1;
    c1.fun1();

    return 0;
}

/*
 * 1.友元可以扩大类外函数的权限，在一个类中申明友元函数可以让友元函数获得访问该类中任意函数/变量的权限，包括private/protected/public。
 * 2.友元当然可以是其他类型，比如友元类，功能也类似。
 * 3.类之间的访问一个是可以通过申明友元类访问包括private的任何成员，二是通过继承可以访问protected成员。
 * 4.友元的申明不受访问修饰符的影响，也就是前面加private之类的也无所谓。
 * 5.友元的存在是对类的封装性的破坏，也就是破坏了访问修饰符对类的访问权限的控制。一般来说，类中会提供合适的public接口，因此应该尽量避免
 *   使用友元
 */
