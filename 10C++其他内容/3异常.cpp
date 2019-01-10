//
// Created by qin on 19-1-10.
//

//#include <iostream>
//using namespace std;
//
//
//void func(int a)
//{
//    if(a == 0)
//    {
////        abort();
//        throw a;
//    }
//
//    cout << "func" << endl;
//}
//
//
//int main()
//{
//    abort();        // 直接产生异常
//
//    try
//    {
//        func(0);
//    }
//    catch(int b)
//    {
//        cout << "Error: a is 0" << endl;
//    }
//    catch(char c)
//    {
//        cout << c << endl;
//    }
//
//    return 0;
//}


/*
 * 1.abort函数直接终止程序，报错SIGABRT。
 * 2.用try{func();}，在func中if异常出现则throw一个变量a，并用catch(){处理代码}处理异常。
 */