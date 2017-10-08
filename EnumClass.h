#ifndef PLAYING_WITH_CPP_11_ENUMCLASS_H
#define PLAYING_WITH_CPP_11_ENUMCLASS_H

#include <typeinfo>

enum class MyClass1
{
    Unkown, state1, state2
};

enum class MyClass2
{
    Unkown, state1, state2
};

struct EnumClass
{
    void operator()()
    {
        MyClass1 a = MyClass1::state1;
        MyClass2 b = MyClass2::state1;

        if (typeid(a) != typeid(b))
        {
            std::cout << "Enum classes don't collide in c++ 11.";
        }
    }
};

#endif //PLAYING_WITH_CPP_11_ENUMCLASS_H
