#include <cmath>



/* Component Definitions --------------*/
//面向对象的定义方法：将每种器件都定义为一个类
//定义对应于类的对象
//板设置

//电机

//电机驱动IC
TB67H450 tb67H450;
//磁性编码器IC
MT6816 mt6816;
//编码器校准：这里为什么要单独定义一个对象？



//Led状态灯
Led statusLed;