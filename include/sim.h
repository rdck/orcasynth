/*******************************************************************************
 * sim.h - audio thread
 ******************************************************************************/

#pragma once

#include "message.h"

#define SIM_HISTORY 0x20

extern Model sim_history[SIM_HISTORY];
extern MessageQueue input_queue;
extern MessageQueue control_queue;

// called from audio thread
Void sim_init();
Void sim_step(F32* audio_out, Index frames);
