//
//  emu.h
//  nds4ios
//
//  Created by rock88 on 18/12/2012.
//  Copyright (c) 2012 Homebrew. All rights reserved.
//

#ifndef _EMU_H_
#define _EMU_H_

#include <iostream>
#include "video.h"

extern VideoInfo video;
extern volatile bool execute;

typedef enum {
	BUTTON_RIGHT = 0,
    BUTTON_LEFT = 1,
	BUTTON_DOWN = 2,
	BUTTON_UP = 3,
    BUTTON_SELECT = 4,
    BUTTON_START = 5,
	BUTTON_B = 6,
	BUTTON_A = 7,
	BUTTON_Y = 8,
	BUTTON_X = 9,
	BUTTON_L = 10,
	BUTTON_R = 11,
} BUTTON_ID;

void EMU_init();
void EMU_loadSettings();
bool EMU_doRomLoad(const char* path, const char* logical);
bool EMU_loadRom(const char* path);
void EMU_change3D(int type);
void EMU_changeSound(int type);
void EMU_runCore();
int EMU_runOther();
void EMU_copyMasterBuffer();

void EMU_touchScreenTouch(int x, int y);
void EMU_touchScreenRelease();

void EMU_setWorkingDir(const char* path);
void EMU_closeRom();

void EMU_buttonDown(BUTTON_ID button);
void EMU_buttonUp(BUTTON_ID button);

#endif /* defined(__nds4ios__emu__) */

