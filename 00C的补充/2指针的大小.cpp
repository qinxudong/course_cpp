//
// Created by qin on 18-12-17.
//


//#include <iostream>
//using namespace std;
//
//int main()
//{
//    int *p;
//    short *p1;
//    double *p2;
//    int (*p3)[5];
//    cout << sizeof(p) << sizeof(int*) << sizeof(p1) << sizeof(short*) << sizeof(p2) << sizeof(double*) << sizeof(p3) <<
//    sizeof(int(*)[5]) << endl;
//
//    return 0;
//}


/*
 * 1.32位的系统支持小于等于32位的软件，64位的系统支持小于等于64位的软件。
 * 2.32位程序中的指针占4字节，64位程序中的指针占8字节。
 * 3.程序的位数由编译器决定，因此32位系统只支持32位编译器，指针一定占4字节。
 * 4.sizeof()的参数可以是变量名或者变量类型。
 */