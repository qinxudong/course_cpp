////
//// Created by qin on 18-12-15.
////
//#include <iostream>
//using namespace std;
//
//
//class Father
//{
//public:
//    void func()
//    {
//        cout << "Father Function\n";
//    }
//
//    virtual void virtualfunc()
//    {
//        cout << "Father Virtual Function\n";
//    }
//
//    virtual void virtualfunc1()
//    {
//        cout << "Father Virtual Function1\n";
//    }
//};
//
//class Child : public Father
//{
//public:
//    void virtualfunc()
//    {
//        cout << "Child Virtual Function\n";
//    }
//};
//
//
//int main()
//{
//    Father* ptr = new Child;
//    typedef void (*p)();
//    ((p)(*((long*)*(long*)ptr)))();                     // 调用虚表中的第一个虚函数
//    ((p)(*((long*)*(long*)ptr + 1)))();                 // 调用虚表中的第二个虚函数
//
//    long* pp = (long*)(*((long*)*(long*)ptr + 2));      // 取虚表中存的第三个地址
//    cout << pp << endl;                                 // 输出结果为0，并非课上讲的0X00...的地址
//
//    return 0;
//}
//
//
//
//
///*
// * 1.虚表既是 虚函数列表，每个类都会有一张虚表，里面存着类中所有虚函数的地址。
// * 2.虚表是用来实现多态的，具体过程为：当定义一个父类指针指向子类空间时，系统会对比父类与子类的虚表，如果其中相同的函数，说明该函数被重
// *   写了，那么系统就将虚表中该函数的地址改为子类的，当指针调用的函数是虚函数时，会到虚表中查找该函数的地址，因此会调用子类重写的函数。
// *   (这说明每个类定义时会有自己的虚表，而对象被创建时会根据当前类与子类创建一个新的虚表)
// * 3.函数是通过地址来调用的，比如func()，其中函数名func就是存储该函数的地址的一个函数指针常量，比如func==0X10，那么(0X10)()也可以调
// *   用该函数。
// * 4.上面实现了通过虚表中储存的虚函数地址调用虚函数的过程：对象内存的第一段空间储存了虚表的地址(64位编译器为8字节)；将Father*指针强转
// *   为long*指针，再加*取8字节内存，此时取到虚表的地址；再强转为long*，加*取内存，此时取到虚表前8个字节储存的内容，即是第一个虚函数的
// *   地址；定义一个准备调用的函数类型的函数指针，将前面取到的虚函数地址强转为此函数指针类型，此时后面加()就可以调用到该函数了。
// */