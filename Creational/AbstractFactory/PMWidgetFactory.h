#ifndef PMWIDGETFACTORY_H
#define PMWIDGETFACTORY_H

#include "IWidgetFactory.h"

class PMWidgetFactory : public IWidgetFactory
{
public:
    PMWidgetFactory();
    virtual ScrollBar* createScrollBar();
    virtual Window* createWindow();
};

#endif // PMWIDGETFACTORY_H
