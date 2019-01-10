//
// Created by qin on 19-1-9.
//

#include <iostream>
using namespace std;


int func(int i, float f)
{
    cout << "Function\n";
}


typedef int (*funcp)(int, float);               // 重定义一个函数指针类型

#define OP (2 + 2)                              // 宏定义
#define COUT(x) cout << (x) * 2 << endl         // 宏定义加参数
#define COUT2(x, y) cout << (x) * (y) << endl   // 宏定义多参数
#define COUT3(x) cout << \
    #x << endl
#define COUT4(x, y) cout << #x ## #y << endl;


int main()
{
    int (*p)(int, float) = func;
    p(1, 1.);
    funcp pp = func;                            // 使用重定义的类型名定义一个函数指针变量
    pp(1, 1.);

    cout << OP * 2 << endl;                     // 宏定义是纯替换，不运算
    COUT(2 + 2);                                // 宏定义的参数也是纯替换，不运算
    COUT2(2 + 2, 2);
    COUT3("abdcd");
    COUT4(abd, efg);                            // 测试##失败

    return 0;
}


/*
 * 1.typedef是对一个类型的重命名，重命名之后的名字与原名使用完全相同。比如函数指针这一类定义格式比较麻烦的，可以通过重命名简化使用。
 * 2.宏可以对一切重命名（typedef只能对类型重命名），其本质是单纯的替换（#define name whatever ... 会将name后面的所有东西替换到代码中name
 *   的位置）。
 * 3.typedef不能重复定义一个相同的名字，会冲突；宏定义可以重复定义相同的名字，后面的覆盖前面的。
 * 4.宏定义表达式时要注意运算先后顺序，可以加小括号避免。
 * 5.宏定义可以有参数，参数没有类型，执行的形式也是单纯的替换。
 * 6.宏定义中，反斜杠\表示拼接下一行；井号#表示将参数转为字符串；##表示拼接2个字符串。
 */