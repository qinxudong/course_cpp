#include <iostream>
using namespace std;

void fun(int& a)//a引用传递过来的实参，不会使用新的内存
{
    a = 5;
//    cout << a << endl;
}

void fun1(int a)//a有自己的内存，只不过将传递过来的实参的值赋给了a
{
    a = 6;
//    cout << a << endl;
}

void fun2(int* a)//通过传指针，达到传引用同样的效果
{
    *a = 6;
}

void Exchange(int& a, int& b)
{
    int nTemp = a;
    a = b;
    b = nTemp;
}

int& fun3()
{
    int a = 12;
    return a;//这里a是一个局部变量，局部变量的生命周期结束于函数结束，所以在这个函数外局部变量内存会被释放。
}

int& fun4()
{
    static int a = 12;
    return a;//这里a是静态局部变量，生命周期到程序结束。
}




int main()
{
    //引用，即给变量起别名
    int a = 12;
    int& c = a;//声明变量a的一个引用c，c是变量a的一个别名。
    cout << c << endl;
    c = 13;
    cout << a << endl;

    //引用终身只能引用一块内存
    int d = 15;
//    int& c = d;//重定义错误
    c = d;//只是单纯的赋值操作，c还是引用a的那块内存。
    cout << a << endl;
    cout << &a << ' ' << &c << ' ' << &d << endl;

    //常量：12，12.23，'q'
    const int& e = 12;//常量的引用
    cout << e << endl;//只能读，不能修改

    //数组的引用
    int arr[12];
    int (&f)[12] = arr;//先写引用符号，再写引用类型，由于符号的优先级问题，引用符号要加括号。
    f[2] = 12;
    cout << arr[2] << endl;

    //拓展，指向数组的指针
    int g[5] = {0, 1, 2, 3, 4};
//    double* h = g;//类型必须一致
    int* h = g;
    cout << h[1] << endl;
    cout << *(h + 1) << endl;
    cout << *(g + 1) << endl;

    //指针的引用
    int i = 2;
    int *point = &i;
    int* &j = point;
    *j = 3;
    cout << *point << ' ' << i << endl;

    //引用做参数
    int k = 4;
    fun1(k);//普通形参
    cout << k << endl;
    fun(k);//引用类型的形参
    cout << k << endl;
    fun2(&k);//指针类型的形参
    cout << k << endl;

    //利用引用交换两个变量的值
    int m = 7;
    int n = 17;
    cout << "m: " << m << endl;
    cout << "n: " << n << endl;
    Exchange(m, n);
    cout << "m: " << m << endl;
    cout << "n: " << n << endl;

//    //引用做返回值
//    int& l = fun3();//由于fun3里面定义和返回的是局部变量的引用，因此在fun3外面这段内存会被释放。
//    cout << l << endl;
    int& l = fun4();//返回静态局部变量的引用则可以。
    cout << l << endl;

    //增强的for循环
    for(int i = 0; i < 5; i++)//c++中i的作用域在花括号之内，因此下面一个循环还可以用i做参数，不影响。
                              //（不同的编译器可能不同）
    {
        cout << i << endl;
    }
    for(int i = 0; i < 5; i++)
    {
        cout << i << endl;
    }

    return 0;
}


/*
    1.引用即为变量名与内存的关系，int a = 12，那么a成为了保存12的内存空间的引用，int& c = a之后，a和c都成为了这块内存的
      引用，又由于对a，c的操作实际上都是对内存的操作，因此对a，c的操作互相影响。之前理解的变量即内存，在这里依然适用，因为对
      变量的操作就是对内存的操作，a和c是变量的名字，也是这块内存的名字，另一种说法就是，是这块内存的引用。
    2.在理解符号*和&时，不能一概而论。对变量操作时，如*a，&a，理解为取内存，取地址。在声明变量时，如int* a，int& a = c，
      理解为引用的声明符号。这样比较好理解。
    3.引用在声明时必须初始化，这一点与指针不同。
    4.引用终身只能引用一块内存。
    5.函数在返回引用或指针时，引用的或指向的变量不能是局部变量，否则函数外是不能访问的。
    6.&符号的3种用法：
      1)声明变量时，表示引用，如int& a = b
      2)放在变量前，表示取地址，如&a
      3)数值或变量之间的位与运算，如12&13
    7.作用域：可以被引用的代码区域，生命周期：内存不被释放的时间段。作用域分为局部与全局，生命周期分为静态与动态。局部表示
      花括号内，全局表示单个文件内（大概）。静态表示代码运行结束，动态表示函数运行结束（大概）。
 */