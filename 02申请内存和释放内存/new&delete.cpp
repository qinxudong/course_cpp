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


    int a;
    float b;
    double c;
    short d;
    long e;
    long long f;
    char g;
    int* h;
    char* i;
    int j[4];
    int* k = new int[4];
    double* l = new double[4];
    cout << sizeof(a) << sizeof(b) << sizeof(c) << sizeof(d) << sizeof(e) << sizeof(f)
    << sizeof(g) << sizeof(h) << sizeof(i) << sizeof(j) << sizeof(k) << sizeof(*k)
    << sizeof(l) << sizeof(*l) << endl;
    /*
     * 这里输出结果为4 4 8 2 8 8 1 8 8 16 8 4 8 8 (bit)
     * 总结一下，前面是各个类型的内存大小，其中int 4, double 8, char 1；后面是指针型变量(指针)无论类型都占8，说明地址需要8字节来存(
     * 64位编译器)；当变量为数组时，sizeof()得到的是整个数组所占内存大小，故为4*4=16；变量为指针时sizeof(指针)得到指针变量所占内存8，
     * sizeof(*指针)得到指针指向的内存大小，由于用new申请内存时虽然申请了很多内存，但是返回的只是首个元素的地址，所以这里得到的是一个
     * 元素所占的内存大小。
     */


////*符号的三中作用：
//    int a = 12;
//    int *p = &a;//声明指针变量
//
//    *p;//地址操作符，读写。我的理解是依地址取内存，然后读写都可以。
//    cout << *p << endl;
//    *p = 123;
//    cout << a << endl;
//
//    int b = 12;
//    12*b;//乘法运算符

    return 0;
}


/*
    1.new/delete对应C中的malloc/free，区别在于:
        1）语法不同，C* c = new C / C* c = (C*)malloc(sizeof(C))，delete c / free(c)；
        2) new/delete会调用对象的构造、析构函数，而malloc/free不会。
    2.*符号的三种作用：声明指针变量，依地址取内存，乘法运算符。
*/