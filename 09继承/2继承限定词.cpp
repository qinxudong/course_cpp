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
//private:
//    void private_func()
//    {
//        cout << "Private function." << endl;
//    }
//
//protected:
//    void protected_func()
//    {
//        cout << "Protected function." << endl;
//    }
//
//public:
//    void public_func()
//    {
//        cout << "Public function." << endl;
//    }
//};
//
////class Child : public Father
////class Child : protected Father
//class Child : private Father
//{
//public:
//    int i;
//    void func()
//    {
//        protected_func();
//    }
//};
//
//class Childchild : public Child
//{
//public:
//    void funcc()
//    {
//        public_func();
//        protected_func();
//    }
//};
//
//int main()
//{
//    Father father;
//    father.public_func();
//
//    Child child;
////    child.public_func();
////    child.protected_func();
////    child.private_func();
//    child.func();
//
//    Childchild childchild;
//    childchild.funcc();
//
//
//    return 0;
//}


/*
 * 1.当继承限定词为public时，父类的public成员可以在父类内、子类内、类外使用，父类的protected成员可以在父类内、子类内使用，父类的
 *   private成员只能在父类内使用。
 * 2.当继承限定词为protected时，父类的public成员继承为子类的protected成员，因此只能在父类内，子类内，子子类内使用。其他成员与public
 *   一样。
 * 3.当继承限定词为private时，父类的所有成员继承为子类的private成员，因此只能在父类内，子类内使用。
 * 4.当不写继承限定词时，默认为private。
 */