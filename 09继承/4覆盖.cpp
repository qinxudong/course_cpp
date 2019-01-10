////
//// Created by qin on 18-12-13.
////
//
//#include <iostream>
//using namespace std;
//
//
//class Father
//{
//private:
//    int ii;
//
//public:
//    int i;
//
//    Father()
//    {
//        i = 12;
//        ii = 14;
//    }
//
//    void func()
//    {
//        cout << "Father\n";
//    }
//
//    friend void friendfunc();
//};
//
//class Child : public Father
//{
//private:
//    int iii;
//
//public:
//    int i;
//
//    Child()
//    {
//        i = 13;
//    }
//
//    void print()
//    {
//        cout << i << endl;              // 类内使用时，子类数据成员覆盖父类
//        cout << Father::i << endl;      // 使用类名作用域调用被覆盖的父类成员
//    }
//
//    void func()
//    {
//        cout << "Child\n";
//    }
//};
//
//class Childchild : public Child
//{
//public:
//
//};
//
//void friendfunc()
//{
//    Father father;
//    cout << father.ii << endl;          // 父类的友元函数正常使用父类的private成员
//    Child child;
//    cout << child.ii << endl;           // 父类的友元函数可以使用子类从父类中继承的private成员
////    cout << child.iii << endl;        // 父类的友元函数无法使用子类中的private成员
//}
//
//
//int main()
//{
//    Child child;
//    child.print();
//    cout << child.i << endl;            // 类外使用时，子类数据成员覆盖父类
//    cout << child.Father::i << endl;    // 使用类名作用域调用被覆盖的父类成员
//
//    child.func();
//    child.Father::func();
//
//    friendfunc();
//
//    return 0;
//}
//
//
///*
// * 1.对于同名的数据成员，在子类内使用时，新的成员覆盖旧的成员，也就是子类的成员覆盖父类的成员，但是可以用类名作用域调用被覆盖的父类成员。
// * 2.在类外使用时也是如此，只是类名作用域的写法为o.Father::i。
// * 3.对于同名的函数成员也符合上面的2点基本规则，另外，如果子类和父类的函数名相同参数不同，并不会互为重载函数，而是简单的覆盖。
// * 4.友元函数时不能继承的。也就是父类的友元函数不再是子类的友元函数，但是本来父类友元函数可以访问的父类的private成员被继承到子类中之后
// *   该友元函数依然可以访问这些private成员。
// * 5.静态成员由于在类定义时就在静态区分配内存，并且无论是继承时还是实例化对象时都不再分配内存，因此从头到尾都只有一份内存，因此静态成员
// *   是父类、子类(的对象)共同使用的。
// */