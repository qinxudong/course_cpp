////
//// Created by qin on 18-12-16.
////
//
//#include <iostream>
//using namespace std;
//
//
//class Father
//{
//public:
//    virtual ~Father()
//    {
//        cout << "Father Deconstructor\n";
//    }
//};
//
//
//class Son : public Father
//{
//public:
//    virtual ~Son()
//    {
//        cout << "Son Deconstructor\n";
//    }
//};
//
//
//int main()
//{
//    Father *ptr = new Son;
//    delete ptr;
//
//
//    return 0;
//}
//
//
///*
// * 1.当定义父类指针指向子类空间时，释放内存时，默认只调用父类的析构函数(delete哪个类的指针，就调用哪个类的析构函数)；但是，将父类析构函
// * 数写成虚函数(子类析构函数默认会变成虚函数，写不写都行)，释放内存时，就会先调用子类的析构函数，再调用父类的析构函数。
// */