//
// Created by qin on 18-12-17.
//

//#include <iostream>
//using namespace std;
//
//int main()
//{
////    int list[8u*1024u*1024u / 4];                   // 申请时不报错
////    cout << list << endl;                           // 访问时报错Segmentation fault
//    int *p = (int*)malloc(20u*1024u*1024u*1024u);   // 测试堆区申请20G内存也没有返回Null
//
//    return 0;
//}


/*
 * 1.程序/软件是存在硬盘(外存)中的，当程序需要运行时，要将硬盘中的程序通过总线存进内存条(物理内存)中，再由CPU读取。
 * 2.程序运行时会在物理内存中申请一部分内存，程序中的代码操作的就是这部分内存，变量申请的内存空间也在其中。
 * 3.程序申请的内存又分为栈区(存局部变量，系统申请，系统释放)、堆区(存局部变量，手动申请，手动释放)、全局区、字符常量区、代码区。
 * 4.栈区内存需要系统自动检测其中变量是否生命周期结束，因此需要消耗一部分CPU性能；堆区内存完全由程序员管理，不消耗CPU。
 * 5.课程中栈区内存的大小是1M(262144个int)，申请超过这个内存就会stack overflow(爆栈)。实际测试中栈区大小是8M，在申请8M内存时不会报
 *   错，但是在访问该内存时会报错Segmentation fault。
 * 6.课程中堆区内存的大小与物理内存相当，申请2个G时报错。实际测试中，申请20个G也没有报错。
 */