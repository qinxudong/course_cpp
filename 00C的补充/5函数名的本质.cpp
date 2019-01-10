//
// Created by qin on 18-12-20.
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
//    printf("%p\n", func);
//    ((void(*)())0x4009e6)();
//
//    return 0;
//}


/*
 * 1.函数名可以大致理解为存有一个函数首地址的函数指针常量。由于函数代码都存在代码区，函数首地址指的是代码区中存函数代码的内存首地址。
 * 2.函数名的值为该函数的首地址，取地址(&func)为该函数的首地址，解引用(*func)也是该函数的首地址，而且不能赋值，所以可以理解为指向自己
 *   的函数指针常量。
 * 3.如果定义funcptr指向函数func，那么func == &func == *func == funcptr == *funcptr != &funcptr，因此前5种方式都可以调用函数。
 * 4.使用函数名来调用函数时，默认是先将函数名退化为函数指针，然后取函数指针存的地址，调用相应地址的函数代码。
 */

