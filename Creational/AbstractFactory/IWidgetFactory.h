#ifndef IWIDGETFACTORY_H
#define IWIDGETFACTORY_H

#include "IScrollBar.h"
#include "IWindow.h"

class IWidgetFactory {
    public:

        virtual IScrollBar* createScrollBar() = 0;
        virtual IWindow* createWindow() = 0;
    
};

#endif // IWIDGETFACTORY_H
