#pragma once
#include "DLLBase.h"
class Test1 :
    public DLLBase
{
public:
    // Make sure we call the derived classes destructors
    Test1();

    // Pure virtual print function, effect specific to DLL
    void print(void) override;

        // Pure virtual function to calculate something, 
        // according to an unknown set of rules.
        double calc(double val) override;
};

