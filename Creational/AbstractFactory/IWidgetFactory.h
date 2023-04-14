#ifndef IWIDGETFACTORY_H
#define IWIDGETFACTORY_H

#include "ScrollBar.h"
#include "Window.h"

class IWidgetFactory {
    public:

        virtual ScrollBar* createScrollBar() = 0;
        virtual Window* createWindow() = 0;
    
};

#endif // IWIDGETFACTORY_H
