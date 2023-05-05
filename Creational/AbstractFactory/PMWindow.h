#ifndef PMWINDOW_H
#define PMWINDOW_H

#include "IWindow.h"

class PMWindow : public IWindow 
{
public:
    PMWindow();
    virtual void repaint();
};

#endif // PMWINDOW_H