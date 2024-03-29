/*
  ==============================================================================

    Oscillator.h
    Created: 12 Jan 2024 3:47:36pm
    Author:  mrmps

  ==============================================================================
*/

#pragma once
#include <cmath>

const float TWO_PI = 6.2831853071795864f;

class Oscillator
{
public:
    float amplitude;
    float freq;
    float sampleRate;
    float phaseOffset;
    int sampleIndex;

    void reset() 
    {
        sampleIndex = 0;
    }

    float nextSample()
    {
        float output = amplitude * std::sin(TWO_PI * sampleIndex * freq / sampleRate + phaseOffset);

        sampleIndex += 1;
        return output;
    }
};