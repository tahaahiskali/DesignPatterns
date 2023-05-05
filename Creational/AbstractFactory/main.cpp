#include <iostream>

#include "IWidgetFactory.h"
#include "MotifWidgetFactory.h"
#include "PMWidgetFactory.h"

int main() {

    IWidgetFactory *motifWidgetFactory = new MotifWidgetFactory();
    IScrollBar *motifScrollBar = motifWidgetFactory->createScrollBar();
    IWindow *motifWindow = motifWidgetFactory->createWindow();

    IWidgetFactory *pmWidgetFactory = new PMWidgetFactory();
    IScrollBar *pmScrollBar = pmWidgetFactory->createScrollBar();
    IWindow *pmWindow = pmWidgetFactory->createWindow();
    
    pmScrollBar->setMax(20);
    pmWindow->repaint();

    motifScrollBar->setMax(10);
    motifWindow->repaint();

    return 0;

}
