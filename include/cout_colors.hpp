#pragma once

#include <iostream>
#include <string>

#ifdef _WIN32
#include <Windows.h>
#endif

inline void enableAnsiColors() 
{
#ifdef _WIN32
    // 1. Get the handle to Standard Output
    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    if (hOut == INVALID_HANDLE_VALUE) return;

    // 2. Get the current console mode
    DWORD dwMode = 0;
    if (!GetConsoleMode(hOut, &dwMode)) return;

    // 3. Enable the virtual terminal processing flag
    dwMode |= ENABLE_VIRTUAL_TERMINAL_PROCESSING;
    
    // 4. Set the new mode
    SetConsoleMode(hOut, dwMode);
#endif
}

// Escape codes for colors
const std::string RESET   = "\033[0m";
const std::string RED     = "\033[31m";
const std::string GREEN   = "\033[38;2;220;255;100m";
const std::string YELLOW  = "\033[33m";
const std::string BLUE    = "\033[34m";