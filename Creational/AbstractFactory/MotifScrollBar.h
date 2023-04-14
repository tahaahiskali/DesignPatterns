#ifndef MOTIFSCROLLBAR_H
#define MOTIFSCROLLBAR_H

#include "ScrollBar.h"

class MotifScrollBar : public ScrollBar
{
public:
    MotifScrollBar();
    virtual void setMax( int max );
};

#endif // MOTIFSCROLLBAR_H
