#ifndef CTRL_STEP_FW_TB67H450_BASE_H
#define CTRL_STEP_FW_TB67H450_BASE_H

#include "driver_base.h"

//从父类继承出子驱动类
class TB67H450Base : public DriverBase
{
public:
    explicit TB67H450Base() = default;

    //override, 作为复用的提醒并通过编译器验证 override 对应的方法名是否是你父类中已经所有的。
    //更详细的子类继承规范可以参考 https://zhuanlan.zhihu.com/p/258383836
    void Init() override; 
    
    void SetFocCurrentVector() override;

    void Sleep() override;

    void Brake() override;
}