#pragma once

#ifndef ANTI_METHODS_H
#define ANTI_METHODS_H

#include "common.h"

/******************************
*	INSTRUMENTATION CODE
*******************************/
void									hook_functions(IMG img, VOID *v);
void									hook_instructions(INS ins, void *v);


/******************************
*	HOOKS
*******************************/
WINDOWS::BOOL			WINAPI			MyIsDebuggerPresent();
void									MySleep(WINDOWS::DWORD dwMilliseconds);
WINDOWS::DWORD			WINAPI			MyGetTickCount();
WINDOWS::ULONGLONG		WINAPI			MyGetTickCount64();
void									MyRDTSC(ADDRINT *gax, ADDRINT *gdx);

#endif // !ANTI_METHODS_H
