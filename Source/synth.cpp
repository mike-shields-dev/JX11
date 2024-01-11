/*
  ==============================================================================

    Synth.cpp
    Created: 11 Jan 2024 1:17:50pm
    Author:  mrmps

  ==============================================================================
*/

#include "Synth.h"

Synth::Synth()
{
    sampleRate = 44100.0f;
}

void Synth::allocateResources(double sampleRate_, int /* samplesPerBlock */)
{
    sampleRate = static_cast<float>(sampleRate_);
}

void Synth::deallocateResources() 
{
    // To do...
}

void Synth::reset()
{
    // To do...
}

void Synth::render(float** outputBuffers, int sampleCount)
{
    // To do...
}

void Synth::midiMessage(uint8_t data0, uint8_t data1, uint8_t data2)
{
    // To do...
}