//#include <iostream>
//using namespace std;
//
//int main()
//{
////    double d = 123.123;
////    int* p1 = &d;                       // 课程中是警告，这里直接报错了
////    cout << d << " " << *p1 << endl;
//
////    int i = 12;
////    double* p2 = &i;                    // 同样报错
//
//    int list[5] = {1, 2, 3, 4, 5};
//    int* p1 = &list[0];
//
////    int* p2 = &list;                    // 数组类型的地址赋值给int类型的指针会报错
//    int (*p2)[5] = &list;               // 定义数组指针
//    int *p3[5];                         // 定义指针数组(方括号比星号的优先级高)
//
//    return 0;
//}


/*
 * 1.指针类型决定其对内存的操作，即指针指向什么类型，*p就一次操作多大内存。int类型指针操作4字节，double类型指针操作8字节，数组类型指针
 *   操作整个数组的内存，结构体类型指针操作整个结构体的内存。
 * 2.与指针类型相同，给指针赋值的地址也有其类型，与指针类型相同，指针被赋值的地址类型是什么，这个指针就是什么类型。
 * 3.对于一个数组int list[5]来说，数组名list与&list[0]完全相同，是一个int(元素类型)的指针，每次操作4字节；而&list则是一个数组类型(
 *   int(*)[5])的
 *   地址，每次操作20字节。
 * 4.存数组类型的地址的指针变量就称为数组指针。
 */