#ifndef PMSCROLLBAR_H
#define PMSCROLLBAR_H

#include "ScrollBar.h"

class PMScrollBar : public ScrollBar
{
public:
    PMScrollBar();
    virtual void setMax( int max );
};

#endif // PMSCROLLBAR_H