#include "MotifWidgetFactory.h"
#include "MotifScrollBar.h"
#include "MotifWindow.h"

MotifWidgetFactory::MotifWidgetFactory()
{

}

IScrollBar* MotifWidgetFactory::createScrollBar() {
    return new MotifScrollBar();
}

IWindow* MotifWidgetFactory::createWindow() {
    return new MotifWindow();
}
