//
// Created by qin on 18-11-30.
//

#include <iostream>
using namespace std;

// 声明类
class CPeople
{
private:
    int a = 123;

public:             // 访问修饰符
    void fun()
    {
        cout << "fun" << " " << a << endl;
    }

private:
    void fun3()
    {
        fun();
    }

protected:
    void fun4()
    {
        cout << "protected function" << a << endl;
    }
};

// 自定义函数
void fun1()
{
    CPeople op1;
    op1.fun();
}

// 再声明一个类
class CBird
{
public:
    CPeople op2;
    void fun2()
    {
        op2.fun();
    }
};

// 声明一个结构体
struct SPeople
{
//private:
    int a;
};

// 声明一个子类
class CP1 : public CPeople
{
    void fun5()
    {
        fun4();
        fun();
//        fun3();
    }
};

int main()
{
    CPeople op;
    op.fun();

    fun1();
    CBird op1;
    op1.fun2();

    SPeople st2;
    st2.a = 13;

//    op.fun4();
    CP1 op2;
    op2.fun();
//    op2.fun4();       // 虽然CP1继承了protected函数fun4，但是fun4还是protected，无法在类外使用。

    return 0;
}


/*
 * 1.访问修饰符public的作用是，让其包括的变量、函数对类外可见，这里的类外包括类外的其他类，类外自定义的函数，主函数。
 * 2.private的作用是，类内可见，如果不加访问修饰符，默认的类型就是private。
 * 3.访问修饰符可以多次使用，因此在实际工程中可以用来给代码分块。
 * 4.C++中的结构体默认所有的变量和函数都是public，当然也可以通过访问修饰符修饰结构体中的变量和函数。因为结构体是一种特别的类，那么类支
 *   持的操作结构体一般都支持。
 * 5.总结一下3种访问修饰符，public类内外可见；private类内可见；protected专门用来给子类用，所以类内和子类可见。
 */