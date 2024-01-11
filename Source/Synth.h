/*
  ==============================================================================

    Synth.h
    Created: 11 Jan 2024 1:16:39pm
    Author:  mrmps

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "Voice.h"

class Synth
{
public:
    Synth();

    void allocateResources(double sampleRate, int samplesPerBlock);
    void deallocateResources();
    void reset();
    void render(float** outputBuffers, int sampleCount);
    void midiMessage(uint8_t data0, uint8_t data1, uint8_t data2);

private:
    float sampleRate;
    Voice voice;
};