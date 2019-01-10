////
//// Created by qin on 18-12-15.
////
//
//#include <iostream>
//using namespace std;
//
//
//class Father
//{
//public:
//    virtual void print()                // 将父类的函数定义为虚函数
//    {
//        cout << "Father\n";
//    }
//};
//
//
//class Son : public Father
//{
//public:
//    int i;
//    void print()                        // 重写虚函数默认也是虚函数
//    {
//        cout << "Son\n";
//    }
//};
//
//
//class Son1 : public Father
//{
//public:
//    int i;
//    void print()
//    {
//        cout << "Son1\n";
//    }
//};
//
//
//class Sonson : public Son
//{
//public:
//    void print()
//    {
//        cout << "Sonson\n";
//    }
//};
//
//
//int main()
//{
//    Father* fatherptr = new Son1;         // 父类的指针指向子类的空间
//    fatherptr->print();                   // 父类的指针只会调用父类的成员
//    Son* sonptr = new Sonson;
//    sonptr->print();
//
//
//    return 0;
//}


/*
 * 1.一般来说，指针的类型必须和申请内存空间的类型相同，即class1* ptr = new class1;，但是有一种特殊情况：父类的指针指向子类的空间，
 *   即Father* ptr = new Son;。
 * 2.当父类的指针指向子类的空间时，指针默认调用父类的函数，但是，如果子类重写的父类的某函数，此时将父类的该函数定义为虚函数，指针就可以
 *   调用对应的子类的函数了。
 * 3.如果父类定义的虚函数被多个子类重写了，那么定义的指针指向哪个子类的空间就会调用哪个子类的函数。
 * 4.这里多态的思想就是：父类的一个指针，可以有多种执行状态(通过改变定义父类指针时指向的空间的子类类型，可以决定父类指针调用的是哪个子
 *   类的函数)。(为啥要用父类的指针去调用子类的成员？想调用不同子类的函数就定义不同的子类对象不就好了？听起来没什么用。)
 * 5.多态的思想是针对指针而言的。
 * 6.父类定义了一个虚函数，子类重写这个函数默认是一个虚函数。
 * 7.C++中重写与覆盖的区别：覆盖是父类有某个成员，子类写了一个相同名字的成员，此时子类对象会默认调用子类的成员，称为子类成员 覆盖 父类
 *   成员；重写是针对虚函数而言的，父类定义了一个虚函数，子类写了一个相同名字，相同参数，相同返回值的函数，此时如果定义父类指针指向子类
 *   对象，默认调用子类的函数，称为子类重写了该函数。
 */