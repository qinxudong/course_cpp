////
//// Created by qin on 18-12-4.
////
//
//#include <iostream>
//using namespace std;
//
//
//class C
//{
//public:
//    void print() const              // 常函数
//    {
//        cout << "PRINT" << endl;
//    }
//
//    void normalfunc()
//    {
//        cout << "NORMALFUNC" << endl;
//    }
//};
//
//int main()
//{
//    C c;
//    c.print();
//
//    const C cc;                     // 常对象只能调用常函数成员
////    cc.normalfunc();
//    cc.print();
//
//    return 0;
//}
//
//
///*
// * 1.常函数的形式：functype func() const {}。特点是：不能修改数据成员。意义是：限定函数的功能，在类似打印这样的函数中保护数据成员不被
// *   改变。
// * 2.构造函数和析构函数不能是常函数。
// * 3.所有的数据成员到常函数里面都变成了常量，无法改变；而其他变量，如常函数内的局部变量则可以正常改变。
// * 4.正如const int i可以定义常量，const C c可以定义常对象。常对象与常量一样，只能读不能写。因此，常对象只能调用常函数成员，其他成员函
// *   数可能会有写操作。
// */