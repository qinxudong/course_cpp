//
// Created by qin on 19-1-10.
//


#include <iostream>
using namespace std;


template<typename T=char>
class Father
{
public:
    T a;

    Father(T t)
    {
        a = t;
    }

    virtual void vfunc()
    {
        cout << "Father Vfunc" << endl;
    }
};


template<typename T=char>
class Son : public Father<T>
{
public:
    Son(T a) : Father<T>(a)
    {}

    void vfunc()
    {
        cout << "Son Vfunc" << endl;
    }
};


int main()
{
    Father<float>* p = new Son<float>(19.9);
    p->vfunc();

    return 0;
}


/*
 * 1.这里与类模板的继承并没有什么区别，只不过加了虚函数和重写，定义了父类指针指向子类空间。唯一需要注意的是，父类指针的模板参数列表，与子
 *   类空间的模板参数列表要对应。
 */