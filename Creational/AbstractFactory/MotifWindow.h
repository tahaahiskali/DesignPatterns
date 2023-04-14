#ifndef MOTIFWINDOW_H
#define MOTIFWINDOW_H

#include "Window.h"

class MotifWindow : public Window
{
public:
    MotifWindow();
    virtual void repaint();
};

#endif // MOTIFWINDOW_H