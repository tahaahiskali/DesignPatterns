#ifndef MOTIFSCROLLBAR_H
#define MOTIFSCROLLBAR_H

#include "IScrollBar.h"

class MotifScrollBar : public IScrollBar
{
public:
    MotifScrollBar();
    virtual void setMax( int max );
};

#endif // MOTIFSCROLLBAR_H
