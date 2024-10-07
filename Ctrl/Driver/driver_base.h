#ifndef CTRL_STEP_FW_DRIVER_BASE_H
#define CTRL_STEP_FW_DRIVER_BASE_H

//常见按位计的数据类型库
//https://en.cppreference.com/w/c/types/integer
#include <cstdint>

class DriverBase
{
public:
    virtual void Init() = 0;

    ;

    virtual void Sleep() = 0;

    virtual void Brake() = 0;
}

//这里的虚函数定义有什么作用？尤其是在子类的继承过程中？

#endif