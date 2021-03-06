//
// Created by qin on 18-12-4.
//

#include <iostream>
#include <cstring>
using namespace std;

class C
{
public:
    int *a;

    C()
    {
        a = new int[2];
        a[0] = 12;
        a[1] = 13;
    }

    ~C()
    {
        delete[] a;
    }

    C(const C& ob)              // 手写拷贝构造函数，指针深拷贝
    {
        this->a = new int[2];
//        this->a[0] = ob.a[0];
//        this->a[1] = ob.a[1];
        memcpy(this->a, ob.a, 8);
    }
};

C& func(C& a)                   // 传递引用，返回引用
{
    return a;
}

C* funcc(C* a)                  // 传递地址，返回地址
{
    return a;
}

int main()
{
    {
        C c;
        cout << c.a[0] << " " << c.a[1] << endl;
        C cc = c;
        cout << cc.a[0] << " " << cc.a[1] << endl;

        C& ccc = func(c);
        C* cccc = funcc(&c);
    }


    return 0;
}


/*
 * 0.深浅拷贝是对指针变量而言的，浅拷贝只复制指针的值(地址)，深拷贝需要申请相同的内存然后复制所有元素。
 * 0.类的拷贝构造函数默认浅拷贝，可能导致2个对象中的指针成员指向同一块内存，可能会重复释放内存，导致崩溃。解决的方法是手写深拷贝或者避免
 *   复制对象从而调用拷贝构造函数(作为函数形参或return时)。具体用法见代码。
 * 0.由于对象作为函数形参时会定义局部对象，复制实参对象从而调用拷贝构造函数，传引用和传地址可以避免定义新的局部对象避免调用拷贝构造函数；
 *   函数return对象时会创建临时对象，此时会复制函数内的局部对象从而调用拷贝构造函数，返回引用或地址同样可以避免上面的情况。
 * 1.对于类中的指针变量，在调用拷贝构造函数复制对象时，新对象复制得到的是一个存有相同地址的指针变量。那么新老对象的指针变量会指向同一块内
 *   存，当析构函数中释放这块内存时，会释放两次，造成系统崩溃。
 * 2.这一点数组就和指针变量有很大区别，数组的复制需要申请新的内存，然后复制所有的元素。
 * 3.上面的代码中实现了对指针变量的深拷贝，与数组类似，需要申请新的内存，然后复制所有的元素。
 * 4.函数传参和return：1）函数中传递普通参数会定义局部变量并调用拷贝构造函数，将实参的值复制给形参，在函数结束时调用析构函数释放局部变
 *   量；2）函数中return普通对象会创建临时对象并调用拷贝构造函数，将return的对象的值复制给临时对象，并在一行代码结束后调用析构函数释放
 *   临时对象；3）真正在IDE中运行代码时结果不一定是这样，是因为频繁的拷贝和析构会消耗内存降低代码效率，因此编译器会优化代码，尽量避免创
 *   建临时对象。
 */