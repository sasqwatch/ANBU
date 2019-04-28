#pragma once

#ifndef ANTI_METHODS_H
#define ANTI_METHODS_H

#include "common.h"

void hook_functions(IMG img, VOID *v);

WINDOWS::BOOL			WINAPI			MyOwnIsDebuggerPresent();
void									MySleep(WINDOWS::DWORD dwMilliseconds);
WINDOWS::DWORD			WINAPI			MyGetTickCount();
WINDOWS::ULONGLONG		WINAPI			MyGetTickCount64();

#endif // !ANTI_METHODS_H
