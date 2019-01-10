//
// Created by qin on 19-1-10.
//


/*
 * 1.旧式类型转换：(type)value，type(value)；新式类型转换：static_cast，const_cast，dynamic_cast，reinterpret_cast。
 * 2.旧式类型转换建议使用(type)value，因为其C/C++通用，type(value)仅适用于C++。
 * 3.旧式类型转换不会检测对象能不能转换类型，新式类型转换则会在对象不能转换相应类型时报错。所以旧式更像 强转，新式更像 分类转换。
 * 4.static_cast为普通自动转换，const_cast专门将常量类型转为非常量类型，dynamic_cast专门用于多态父子类的相互转换，reinterpret_cast
 *   用于危险的类型转换（应该就是不看类型强转）。
 */