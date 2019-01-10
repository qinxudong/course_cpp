//
// Created by qin on 19-1-10.
//


//#include <iostream>
//using namespace std;
//
//
//class C
//{
//public:
//    int a;
//    C()
//    {
//        a = 12;
//    }
//
//public:
//    class CC
//    {
//    public:
//        int b;
//        CC()
//        {
//            b = 13;
//        }
//
//        void funcc()
//        {
//            C c;
//            cout << c.a << endl;
//        }
//    };
//
//public:
//    CC cc;
//};
//
//
//int main()
//{
//    C c;
//    c.cc.funcc();
//
//    return 0;
//}




/*
 * 1.在类（外部类）内定义的类（内部类）不能直接使用外部类的成员，可以实例化一个外部类对象再调用相应的成员。
 * 2.外部类也不能直接使用内部类的成员，也要先实例化一个内部类对象，再调用相应的成员。
 */