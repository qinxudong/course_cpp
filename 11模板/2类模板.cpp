//
// Created by qin on 19-1-9.
//


//#include <iostream>
//using namespace std;
//
//template<typename T=char>
//class C
//{
//public:
//    T a;
//
//    C(T t)
//    {
//        a = t;
//    }
//
//    void print()
//    {
//        cout << a << endl;
//    }
//};
//
//
//int main()
//{
//    C<int> c(12);                   // 实例化栈区对象
//    c.print();
//
//    C<int>* p = new C<int>(13);     // 实例化指针对象
//    p->print();
//
//    return 0;
//}


/*
 * 1.模板的意义就是定义时先不指定类型。函数模板可以定义时先不指定参数类型，等调用函数模板时根据传入的参数类型自动指定参数类型，并选择相应
 *   的具体化代码执行；类模板可以定义时先不指定类内的某些类型，用T指代，等实例化时再通过在类名后加模板参数列表指定该类型。
 * 2.类模板的形式：            template<typename T=default, ...>
 *                           class C{};
 *   实例化栈区对象：          C<typelist> c;
 *   实例化指针对象：          C<typelist>* p = new C<typelist>;
 * 3.类模板类型可以有默认值，而函数模板的参数类型不能有默认值。
 * 4.模板参数列表中的类型除了上面的基本数据类型，还可以是自定义的类，自定义的类模板，任意类都可以。
 */