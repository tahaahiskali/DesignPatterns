#include <iostream>

#include "IWidgetFactory.h"
#include "MotifWidgetFactory.h"
#include "PMWidgetFactory.h"

int main() {

    IWidgetFactory *motifFactory = new MotifWidgetFactory();
    IWidgetFactory *pmWidgetFactory = new PMWidgetFactory();

    ScrollBar *motifScrollBar = motifFactory->createScrollBar();
    Window *motifWindow = motifFactory->createWindow();
		
    ScrollBar *pmScrollBar = pmWidgetFactory->createScrollBar();
    Window *pmWindow = pmWidgetFactory->createWindow();
    
    pmScrollBar->setMax(20);
    pmWindow->repaint();

    motifScrollBar->setMax(10);
    motifWindow->repaint();

    return 0;

}
