#include <iostream>
using namespace std;

void fun(int a=1, char c='c')//指定默认值（缺省值）
{
    cout << a << ' ' << c << endl;
}

void fun1(int a, char c='c', float f=12.12)//部分指定必须从右向左，连续指定
{
    cout << a << ' ' << c << ' ' << f << endl;
}

void fun2(int a=1, char c='c');//先声明再定义的话，必须在声明时设置默认值，定义时不能再设置默认值了。

void fun3(int a)//这三个函数互为重载函数
{
    cout << "1: " << a << endl;
}

void fun3(int a, char c)
{
    cout << "2: " << a << ' ' << c << endl;
}

void fun3(float f)
{
    cout << "3: " << f << endl;
}

void fun4(int a, float f=12.12f)
{
    cout << "fun4(1): " << a << " " << f << endl;
}

void fun4(int a)
{
    cout << "fun4(2): " << a << endl;
}


int main()
{
    fun();//指定默认值
    fun1(2);//部分指定
    fun1(2, 'b');//覆盖默认值
    fun2();
    fun3(12.12f);//多个重载函数，通过实参的类型来选用合适的函数
    fun3(1, 'c');
    fun3(2);
    fun4(4, 14.14f);//在传递2个参数值时并没有问题
//    fun4(4);//传递一个参数值，会导致重载的2个函数冲突，因为程序不知道使用哪个参数

    return 0;
}

void fun2(int a, char c)
{
    cout << a << ' ' << c << endl;
}


//1.函数重载的定义：在同一作用域内，函数名字相同，参数列表不同的多个函数互为重载函数。
//2.一般的浮点数类型默认为double，如果想要float类型浮点数则在后面加上f，如123.123f。
//3.函数重载的一个应用实例就是，可以根据传参的类型自动选择相应的代码执行。
//4.函数重载的定义中要求必须在同一作用域中，这里函数的作用域是从函数定义之后，或者函数声明之后。
//5.函数返回值类型不作为函数重载的条件，也就是返回值类型不同，其他全部相同的函数不互为重载函数，会报重定义的错误。
//6.函数如果有一些参数设置了默认值，在传参时只传递部分参数可能会导致相互冲突。