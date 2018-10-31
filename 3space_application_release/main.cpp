#include <iostream>
using namespace std;

int main()
{
//    int *p1 = new int(12);//申请内存空间，并返回内存的首地址，初始化为12.
////    *p1 = 12;//写
//    cout << *p1 << endl;//读
//    delete p1;//释放内存

//    int *p = new int[5];//申请连续空间，即数组
//    p[0] = 13;
//    cout << p[0] << endl;
//    delete[] p;


//    int a;
//    float b;
//    double c;
//    short d;
//    long e;
//    long long f;
//    char g;
//    int* h;
//    char* i;
//    int j[4];
//    cout << sizeof(a) << sizeof(b) << sizeof(c) << sizeof(d) << sizeof(e) << sizeof(f)
//    << sizeof(g) << sizeof(h) << sizeof(i) << sizeof(j) << endl;


//*符号的三中作用：
    int a = 12;
    int *p = &a;//声明指针变量

    *p;//地址操作符，读写。我的理解是依地址取内存，然后读写都可以。
    cout << *p << endl;
    *p = 123;
    cout << a << endl;

    int b = 12;
    12*b;//乘法运算符

    return 0;
}

//1.new/delete对应C中的malloc/free，区别在于对对象进行操作时，new/delete可以触发构造与析构。
//2.*符号的三种作用：声明指针变量，依地址取内存，乘法运算符。
