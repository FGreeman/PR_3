#include "pch.h"
#include "Static.h"
#include <iostream>

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

extern "C" void __stdcall GNFunc()
{ 
    int GroupName = 591220;
    std::cout << GroupName;
}

extern "C" void __stdcall NSFunc(char* PNS)
{
    while (*PNS != '\0') {
        std::cout << *PNS;
        PNS++;
    }
    std::cout << '\n';

}