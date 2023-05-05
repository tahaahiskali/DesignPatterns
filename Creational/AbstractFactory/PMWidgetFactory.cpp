#include "PMWidgetFactory.h"
#include "PMScrollBar.h"
#include "PMWindow.h"

PMWidgetFactory::PMWidgetFactory()
{
}

IScrollBar* PMWidgetFactory::createScrollBar() {
    return new PMScrollBar();
}

IWindow* PMWidgetFactory::createWindow() {
    return new PMWindow();
}
