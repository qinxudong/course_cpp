//#include <iostream>
//using namespace std;
//
//// 函数模板
//template<typename T>
//void func(T a)
//{
//    cout << a << endl;
//}
//
//template<>
//void func<int>(int a)
//{
//    cout << "int " << a << endl;
//}
//
//struct st1
//{
//    int a;
//    float b;
//};
//
//template<>
//void func<st1>(st1 st)
//{
//    cout << "struct " << st.a << " " << st.b << endl;
//}
//
//
//int main()
//{
//    func("abc");
//    func(12);
//    st1 st = {12, 12.12};
//    func(st);
//
//    return 0;
//}


/*
 * 0.函数模板可以实现函数重载的部分功能，也就是接收不同类型的参数。从实现的方式看，也就是定义了一个通用的类作为参数的类型，这样就可以接
 *   收任意类型的参数了。而函数重载的另一部分功能，也就是根据不同类型的参数选择执行不同的代码，可以通过函数模板的具体化实现。
 * 1.函数模板的形式：       template<typename/class T, typename/class TT, ...>
 *                        void func(T a, TT b, ...){}
 * 2.函数模板定义的模板T、TT等只能在下一个函数中使用，也就是下面不能连续写2个函数。
 * 3.函数模板具体化实现的功能是：指定某种类型，当参数是这种类型时，执行具体化的代码。
 * 4.函数模板具体化的形式：  template<>
 *                        void func<T1>(T1 a){}
 * 5.函数被调用时，参数类型在函数模板中具体化了，那么就会调用具体化的代码，而不调用该函数模板的代码；但是如果该函数有普通的实现且参数符合
 *   那么会调用普通函数。也就是调用优先级：普通函数 > 函数模板具体化 > 函数模板。
 */