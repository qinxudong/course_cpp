//
// Created by qin on 18-12-4.
//
#include <iostream>
using namespace std;


inline void func(int i)             // 内联函数的定义
{
    i += 5;
    cout << i << endl;
}

inline int funcc(int a)
{
    return a*a;
}

#define SQR(x) ((x)*(x))            // 宏定义

class C
{
public:
    void func()                     // 类内默认内联函数
    {}
    void funcc();
};

inline void C::funcc()              // 类外定义必须指定内联函数
{}


int main()
{
    for (int i; i < 10; i++)
    {
        func(i);
    }

    int a;
    int b;
    a = funcc(2+3);
    b = SQR(2+3);
    cout << a << " " << b << endl;
    return 0;
}



/*
 * 1.常规函数的调用过程：1）比如在main函数中执行到func()这一行，根据函数名找到函数代码的内存；2）跳到函数代码的内存执行函数代码；3}执行
 *   完，跳回原来的func()那一行。
 * 2.内联函数就是为了免去常规函数跳转的过程，直接将代码区存的函数代码复制到当前位置，直接执行。(相当于不写函数了，直接写函数的实现代码)
 * 3.内联函数以空间换时间，速度稍快，但是每调用一次都要完整地复制函数代码，占用内存。
 * 4.如果内联函数声明和定义分开，那么两边都要加上inline关键字。
 * 5.当代码中的内联函数设置得不合理，编译器可能会直接编译为普通函数。递归函数一定不能是内联函数。
 * 6.类内定义的函数默认是内联函数，类内声明类外定义的函数默认不是内联函数，需要指定。
 * 7.内联函数与一般函数不同可以有多个定义(猜测是为了就近复制函数代码)，(同样为了使函数代码较近)内联函数的定义一般直接写在头文件中。
 */