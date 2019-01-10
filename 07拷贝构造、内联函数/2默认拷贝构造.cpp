//
// Created by qin on 18-12-4.
//

#include <iostream>
#include <cstring>
using namespace std;

class C
{
public:
    int b;
    char c[4];

    C()
    {
        b = 12;
        strcpy(c, "abc");
        cout << "CONSTRUCTOR" << endl;
    }

    C(const C& a)                       // 手动编写拷贝构造函数
    {
        this->b = a.b;
        strcpy(this->c, a.c);
        cout << "COPY CONSTRUCTOR" << endl;
    }
};


int main()
{
    C c;
    cout << c.b << " " << c.c << endl;
    C cc = c;
    cout << cc.b << " " << cc.c << endl;

    return 0;
}


/*
 * 1.默认的拷贝构造函数中写的是自动复制所有非static成员，因此在拷贝某个对象时会被自动调用，如果手写了拷贝构造函数则会覆盖掉原来的，失去
 *   自动复制的功能。
 */