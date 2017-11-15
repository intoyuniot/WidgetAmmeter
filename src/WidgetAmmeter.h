#ifndef WIDGET_AMMERTER_H_
#define WIDGET_AMMERTER_H_

#include "application.h"

class WidgetAmmeter : public WidgetBaseClass
{
    public:
        WidgetAmmeter(uint8_t ucItem = 0);
        ~WidgetAmmeter();
        void begin(void (*UserCallBack)(void) = NULL);
        void displayCurrent(float ucVal);

    private:
        char pDataCurrentTopic[64];
        uint8_t _Item = 0;

        void (*_EventCb)(void);
        void widgetBaseCallBack(uint8_t *payload, uint32_t len);
};

#endif
