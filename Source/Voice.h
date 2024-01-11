/*
  ==============================================================================

    Voice.h
    Created: 11 Jan 2024 1:17:36pm
    Author:  mrmps

  ==============================================================================
*/

#pragma once

struct Voice
{
    int noteNumber;
    int noteVelocity;

    void reset() 
    {
        noteNumber = 0;
        noteVelocity = 0;
    }
};