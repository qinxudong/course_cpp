#include <iostream>
using namespace std;

class CPeople
{
public:
    int a;
    double b;
    void fun()
    {
        cout << "This belongs to class CPeople" << ' ' << a << endl;
    }
};


int main()
{
    // 创建普通对象
    CPeople op;
    op.a = 123;
    op.fun();

    // 创建指针对象
    CPeople* op1 = new CPeople; // new CPeople申请了相应对象大小的内存，并返回首地址赋给了op1，因此op1这个指针指向一块存有CPeople
                                // 类对象的内存。
    op1->a = 12;                // 既然op1是首地址，那么自然可以根据首地址取相应的内存，类似数组中用序号取内存，这里用'->'取相应的内
    op1->fun();                 // 存，也就是取属性和函数。
    cout << sizeof(op1) << ' ' << sizeof(*op1) << endl;
                                // 输出为8 16，8为一个普通指针变量占的内存大小，16为op1指向的对象占的内存大小。


    return 0;
}


/*
 * 1.类的申明与结构体的申明一样：class Name{}; vs struct Name{};，因为结构体本身就是一种特殊的类。
 * 2.对象的创建有两种方式：1）直接创建对象变量；2）创建一个对象指针指向对象所在内存的首地址。两者取属性和函数的方式不同。
 * 3.类在申明时是不占用内存的，因为其跟int、double一样只是一个模板，在创建对象时才会给这个对象分配空间。
 * 4.初见堆区栈区，记住一点，new申请的区域都在堆区，函数中的局部变量都在栈区(包括普通变量和指针变量)，全局变量和静态变量则在另外的全局数
 *   据区。所以这里CPeople op创建的对象在栈区，CPeople* op1创建的对象在堆区，但是op1作为指向这个对象的指针在栈区。
 */