////
//// Created by qin on 18-12-17.
////
//
//#include <iostream>
//using namespace std;
//
//class Father
//{
//public:
//    virtual void fun() = 0;
//};
//
//class Son : public Father
//{
//public:
//    void fun()
//    {
//        cout << "Son" << endl;
//    }
//};
//
//int main()
//{
////    Father father;
//    Son son;
//
//    return 0;
//}
//
//
///*
// * 1.有纯虚函数的类不能实例化对象，称为抽象类；所有函数都是纯虚函数的类，称为接口类(一般是实现了代码框架的最基本的类，子类重写这些纯虚函
// * 数(接口)就可以实现各种功能了)。
// * 2.父类是抽象类，子类会继承父类的纯虚函数，因此子类也是抽象类不能实例化对象。但是当子类重写了父类的纯虚函数，则子类不再是抽象类，可以
// *   实例化对象了。
// * 3.纯虚函数存在的意义就是提供接口，功能由子类去重写实现。相当于python中在基本类写空函数(def func(): pass)。
// */