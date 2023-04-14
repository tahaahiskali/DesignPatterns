#include "MotifWidgetFactory.h"
#include "MotifScrollBar.h"
#include "MotifWindow.h"

MotifWidgetFactory::MotifWidgetFactory()
{

}

ScrollBar* MotifWidgetFactory::createScrollBar() {
    return new MotifScrollBar();
}

Window* MotifWidgetFactory::createWindow() {
    return new MotifWindow();
}
