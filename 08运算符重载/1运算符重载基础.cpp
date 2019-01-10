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
//void operator+(C& c, int i)             // 运算符重载
//{
//    cout << (c.i + i) << endl;
//}
//
//
//int main()
//{
//    C c, cc;
//    c + 1;
//    return 0;
//}
//
//
///*
// * 1.运算符重载就是通过operator关键字定义一个运算符的重载函数，根据参数(运算对象)的不同来选择执行的函数。
// * 2.运算符重载时参数必须包括对象，也就是不能重载基本类型之间的运算。
// */