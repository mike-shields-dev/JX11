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
    voice.reset();
}

void Synth::render(float** outputBuffers, int sampleCount)
{
    // To do...
}

void Synth::midiMessage(uint8_t data0, uint8_t data1, uint8_t data2)
{
    // To do...
}

void Synth::noteOn(int noteNumber, int velocity)
{
    voice.noteNumber = noteNumber;
    voice.noteVelocity = velocity;
}

void Synth::noteOff(int noteNumber)
{
    if (voice.noteNumber == noteNumber) {
        voice.noteNumber = 0;
        voice.noteVelocity = 0;
    }
}