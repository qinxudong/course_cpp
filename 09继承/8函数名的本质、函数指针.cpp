////
//// Created by qin on 18-12-15.
////
//
//#include <iostream>
//using namespace std;
//
//
//void func()
//{
//    cout << "function" << endl;
//}
//
//
//int main()
//{
//    int i;
//    int *pp = &i;
//    cout << pp << endl;
//    cout << &pp << endl;
//
//    void(*p)() = func;
//    p();
//    (*p)();
//    if(*p == p && *p == func && *p == &func && *p == *func)
//        printf("same\n");
//    if(func == &func && func == *func && func == p && p == *p)
//        printf("same\n");
//    cout << p << " " << *p << " " << &p << endl;
//
//    return 0;
//}
//
//
///*
// * 1.函数名的本质比较难定义，一种说法是：函数入口的依据，我理解为 函数名代表了该函数对象。
// * 2.函数名取地址(&func)为该函数的首地址，解引用(*func)也是该函数的首地址，而且不能赋值，所以可以理解为指向自己的函数指针常量。
// * 3.如果定义funcptr指向函数func，那么func == &func == *func == funcptr == *funcptr != &funcptr，因此前5种方式都可以调用函数。
// * 4.使用函数名来调用函数时，默认是先将函数名退化为函数指针，然后取函数指针存的地址，调用相应地址的函数代码。
// */