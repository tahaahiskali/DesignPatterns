#ifndef MOTIFWINDOW_H
#define MOTIFWINDOW_H

#include "IWindow.h"

class MotifWindow : public IWindow
{
public:
    MotifWindow();
    virtual void repaint();
};

#endif // MOTIFWINDOW_H