#ifndef PMWIDGETFACTORY_H
#define PMWIDGETFACTORY_H

#include "IWidgetFactory.h"

class PMWidgetFactory : public IWidgetFactory
{
public:
    PMWidgetFactory();
    virtual IScrollBar* createScrollBar();
    virtual IWindow* createWindow();
};

#endif // PMWIDGETFACTORY_H
