#ifndef PMWINDOW_H
#define PMWINDOW_H

#include "Window.h"

class PMWindow : public Window 
{
public:
    PMWindow();
    virtual void repaint();
};

#endif // PMWINDOW_H