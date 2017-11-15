/*
************************************************************************
* 作者:  IntoRobot Team    
* 版本:  V1.0.0
* 日期:  03-30-15
************************************************************************
功能描述：
显示电流大小值

所需器件:

*/

/*该头文件引用由IntoRobot自动添加.*/
#include <WidgetAmmeter.h>

WidgetAmmeter ammeter;

float i = 1.1;

void setup() 
{
    // put your setup code here, to run once.
    ammeter.begin();
}

void loop() 
{
    // put your main code here, to run repeatedly.
    if(i >= 0)
    {
        ammeter.displayCurrent(i);
    }
    delay(2000);
}
