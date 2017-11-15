#include "WidgetAmmeter.h"


WidgetAmmeter::WidgetAmmeter(uint8_t ucItem)
{
    _Item=ucItem;
    memset(pDataCurrentTopic,0,sizeof(pDataCurrentTopic));
    sprintf(pDataCurrentTopic,"channel/ammeter_%d/data/current",_Item);
}

WidgetAmmeter::~WidgetAmmeter()
{

}

void WidgetAmmeter::begin(void (*UserCallBack)(void))
{
}


void WidgetAmmeter::displayCurrent(float ucVal)
{
    IntoRobot.publish(pDataCurrentTopic,ucVal);
}


void WidgetAmmeter::widgetBaseCallBack(uint8_t *payload, uint32_t len)
{
}

