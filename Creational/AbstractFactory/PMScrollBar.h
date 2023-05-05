#ifndef PMSCROLLBAR_H
#define PMSCROLLBAR_H

#include "IScrollBar.h"

class PMScrollBar : public IScrollBar
{
public:
    PMScrollBar();
    virtual void setMax( int max );
};

#endif // PMSCROLLBAR_H