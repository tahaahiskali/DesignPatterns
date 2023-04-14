#ifndef MOTIFWIDGETFACTORY_H
#define MOTIFWIDGETFACTORY_H

#include "IWidgetFactory.h"

class MotifWidgetFactory : public IWidgetFactory
{
public:
    MotifWidgetFactory();
    virtual ScrollBar* createScrollBar();
    virtual Window* createWindow();
};

#endif // MOTIFWIDGETFACTORY_H
