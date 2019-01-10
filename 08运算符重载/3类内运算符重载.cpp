//
// Created by qin on 18-12-8.
//

#include <iostream>
using namespace std;


class C
{
public:
    int i;

    C()
    {
        i = 12;
    }

    int operator+(int a)        //写在类内时只写第二个参数
    {
        return (i + a);
    }

    int operator++(int ii)
    {
        (this->i) = (this->i) + 2;
    }
};

int main()
{
    C c;
    cout << c + 13 << endl;
//    cout << 13 + c;           //类内运算符重载第一个参数必须是对象
    c++;
    cout << c.i << endl;


    return 0;
}


/*
 * 1.类内运算符重载只用写第二个参数，可以理解为函数默认第一个参数为this指针。这一点限定了类内运算符重载第一个参数只能是本类对象。
 * 2.
 */