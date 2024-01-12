#pragma once
# include "Oscillator.h"

struct Voice
{
    int note;
    Oscillator osc;

    void reset()
    {
        note = -1;
        osc.reset();
    }

    float render() 
    {
        return osc.nextSample();
    }
};