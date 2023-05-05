#ifndef MOTIFWIDGETFACTORY_H
#define MOTIFWIDGETFACTORY_H

#include "IWidgetFactory.h"

class MotifWidgetFactory : public IWidgetFactory
{
public:
    MotifWidgetFactory();
    virtual IScrollBar* createScrollBar();
    virtual IWindow* createWindow();
};

#endif // MOTIFWIDGETFACTORY_H
