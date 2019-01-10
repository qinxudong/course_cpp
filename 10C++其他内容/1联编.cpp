//#include <iostream>
//using namespace std;
//
//
//class Father
//{
//public:
//    virtual void vfunc()
//    {
//        cout << "Father vfunc" << endl;
//    }
//};
//
//
//class Son : public Father
//{
//public:
//    virtual void vfunc()
//    {
//        cout << "Son vfunc" << endl;
//    }
//};
//
//
//
//int main()
//{
//    Father* p;
//    int b;
//    cin >> b;
//    switch(b)
//    {
//        case 1: p = new Father; break;
//        case 2: p = new Son; break;
//    }
//
//    p->vfunc();
//
//
//    return 0;
//}


/*
 * 1.函数调用语句与存在代码区的函数实现代码之间的关系就是联编。将函数调用语句与函数实现代码联编使程序执行到函数调用时会自动跳转到函数实
 *   现代码段执行代码，从而实现了函数调用。也就是函数调用通过联编实现。
 * 2.静态联编指在编译阶段就将函数实现与函数调用关联起来；动态联编指在程序执行的时候才将函数实现和函数调用关联。
 * 3.所有普通的函数调用都是静态联编，包括C语言中的所有函数，动态联编是C++的一种特殊情况（见代码）。
 */