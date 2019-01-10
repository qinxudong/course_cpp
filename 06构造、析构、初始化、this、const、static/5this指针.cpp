////
//// Created by qin on 18-12-3.
////
//
//#include <iostream>
//using namespace std;
//
//
//class C
//{
//public:
//    int a;
//
//    C(int a)            // 变量名冲突，新的覆盖旧的
//    {
//        a = a;          // 这里都是构造函数内的局部变量a，因此不能给成员变量a赋值
//        this->a = a;    // 通过this指针访问成员变量a，并赋值
//    }
//
////    this->a;            // 成员函数外不能使用
//
//    void print()
//    {
//        cout << a << endl;
//    }
//};
//
//int main()
//{
//    C c(12);
//    c.print();
//    return 0;
//}
//
//
///*
// * 1.在C/C++中，当变量名冲突时，代码会识别更近的申明。也就是新的局部变量会在其作用域内覆盖旧的同名变量。
// * 2.this指针相当于python中的self的作用，用来直接访问对象的成员。
// * 3.this指针只能在类的函数成员中使用，因为本质上this是传入函数成员的一个参数，类中的函数成员会默认传入this这个参数。这与python中的
// *   self一样，只不过self需要写出来。
// */