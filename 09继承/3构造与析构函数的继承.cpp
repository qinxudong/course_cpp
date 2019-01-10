////
//// Created by qin on 18-12-12.
////
//
//#include <iostream>
//using namespace std;
//
//
//class Father
//{
//public:
//    Father(int i)
//    {
//        cout << "Father" << endl;
//        cout << i << endl;
//    }
//
//    ~Father()
//    {
//        cout << "Father Deconstruct" << endl;
//    }
//};
//
//class Child : public Father
//{
//public:
//    Child(int i, int ii) : Father(3)            // 初始化父类构造函数的参数
//    {
//        cout << "Child" << endl;
//        cout << ii << endl;
//    }
//
//    ~Child()
//    {
//        cout << "Child Deconstruct" << endl;
//    }
//};
//
//class Childchild : public Child
//{
//public:
//    Childchild(int i, int ii) : Child(i, ii)    // 使用子类构造函数的形参向父类构造函数传参
//    {
//        cout << "Childchild" << endl;
//    }
//
//    ~Childchild()
//    {
//        cout << "Childchild Deconstruct" << endl;
//    }
//};
//
//int main()
//{
////    Child child;
//    {
//        Childchild childchild(1, 2);
//    }
//
//    return 0;
//}


/*
 * 1.在创建子类对象时，会按上下顺序依次调用父类的构造函数，再调用子类的构造函数。
 * 2.当父类的构造函数带参数时，子类在继承时需要在构造函数的初始化列表中初始化父类的参数。
 * 3.想要在对象创建时才传递父类构造函数的参数，那么就用子类构造函数的形参对父类进行传参，一层层向上传递，那么就可以在创建对象时一次性
 *   对所有(父类、子类)构造函数进行传参。
 * 4.析构函数的调用与构造函数相反，是由子类开始调用，然后依次调用父类的析构函数。
 */