//
// Created by qin on 18-12-20.
//

//#include <iostream>
//using namespace std;
//
//int func(float f, double d)
//{
//    cout << "Function\n";
//}
//
//int main()
//{
//    int (*p)(float, double) = func;
//    p(1., 1.);
//    return 0;
//}


/*
 * 1.函数指针即是指向函数的指针，其特点是存的是某个函数的首地址。
 * 2.因为指针的类型即是其指向的对象的类型，所以函数的类型决定了函数指针的类型。而函数的类型既是函数声明去除函数名的部分，比如函数声明是
 *   int func(float f, double d);，那么函数的类型就是int (float, double)，那么函数指针的定义就是int (*p)(float, double)。(这里
 *   小括号(的优先级是大于*号的)
 */