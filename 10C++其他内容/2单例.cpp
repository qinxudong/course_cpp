//
// Created by qin on 19-1-10.
//


//#include <iostream>
//using namespace std;
//
//
//class C
//{
//private:
//    C()
//    {
//        cout << "Construct C" << endl;
//    }
//
//public:
//    static int first;
//
//    static C* create()
//    {
//        if (first == 1)
//        {
//            first = 0;
//            return (new C);
//        }
//        else
//        {
//            return NULL;
//        }
//
//    }
//
//    ~C()
//    {
//        first = 1;
//    }
//
//    void print()
//    {
//        cout << "class C" << endl;
//    }
//};
//
//int C::first = 1;
//
//int main()
//{
////    C c;                  // 直接实例化失败
////    C* p = C::create();
////    C* pp = C::create();
////    cout << p << "\n" << (pp==NULL) << endl;
//
//    C* p = C::create();
//    delete p;
////    p->print();
//    C* pp = C::create();
//    cout << p << "\n" << pp << endl;
//    pp->print();
//    delete pp;
//
//    return 0;
//}



/*
 * 1.单例模式就是一个类只能创建一个对象。
 * 2.在上面的代码中，构造函数为私有成员，而在main函数中直接实例化C需要调用构造函数，因此调用失败；私有成员只能在类内调用，那么就在类内写
 *   一个函数create，返回一个C类指针；为了在main函数中能够调用create函数，将其定义为静态成员；然后在main函数中通过类名作用域调用create
 *   函数，定义一个C类指针接收返回值，就成功在main函数中定义了C类指针。
 */