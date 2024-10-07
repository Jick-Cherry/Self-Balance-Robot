#ifndef CTRL_STEP_FW_TB67H450_STM32_H
#define CTRL_STEP_FW_TB67H450_STM32_H

//Ctrl文件夹下的驱动文件夹，为什么可以这样使用？，是把Ctrl文件夹加入编译路径了嘛？
#include "Driver/tb67h450_base.h" //

class TB67H450 : public TB67H450Base
{
private:
    void InitGpio() override; //这两个也不太懂是干什么的，关键词？

    void 
public:
    explicit TB67H450() : TB67H450Base() //这是什么？
    {}
};

#endif