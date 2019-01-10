//
// Created by qin on 19-1-9.
//

//#include <iostream>
//using namespace std;
//
//
//template<typename T=char>
//class Father
//{
//public:
//    T a;
//
//    Father(T t)
//    {
//        a = t;
//    }
//
//    void print()
//    {
//        cout << a << endl;
//    }
//};
//
//
////// 继承模板类时直接指定模板参数列表
////class Son : public Father<int>
////{
////public:
////    Son(int i) :  Father(i)
////    {}
////};
//
//// 继承模板类时通过子类的模板参数列表指定
//template<typename T=char>
//class Son : public Father<T>
//{
//public:
//    Son(T a) : Father<T>(a)
//    {}
//};
//
//
//int main()
//{
////    Son s(12);
////    s.print();
//
////    Son<float> s(15.88);
////    s.print();
//
//    return 0;
//}


/*
 * 1.子类继承一个父类模板时需要提供父类模板参数列表，可以 1）直接指定模板参数列表；2）通过子类的模板参数列表指定，这样就可以等实例化子类
 *   时才指定。（这与构造函数的参数传递类似）
 */