#include "PMWidgetFactory.h"
#include "PMScrollBar.h"
#include "PMWindow.h"

PMWidgetFactory::PMWidgetFactory()
{
}

ScrollBar* PMWidgetFactory::createScrollBar() {
    return new PMScrollBar();
}

Window* PMWidgetFactory::createWindow() {
    return new PMWindow();
}
