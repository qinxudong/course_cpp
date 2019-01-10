////
//// Created by qin on 18-12-7.
////
//
//#include <iostream>
//using namespace std;
//
//
//class C
//{
//public:
//    int i;
//    float f;
//
//    C()
//    {
//        i = 12;
//        f = 1.3f;
//    }
//};
//
//int operator+(C& c, int i)
//{
//    return c.i + i;
//}
//
//int operator+(int i, C& c)
//{
//    return c.i + i;
//}
//
//C& operator+(C& c, C& cc)
//{
//    c.i += cc.i;
//    return c;
//}
//
//
//
//int main()
//{
//    C c, cc;
//    cout << c + 12 + 13 + cc << endl;
//    cout << c + cc + 13 << endl;
//
//    return 0;
//}
//
//
///*
// * 1.运算符重载函数如果没有返回值那么就无法进行连加连乘等连续运算。
// */