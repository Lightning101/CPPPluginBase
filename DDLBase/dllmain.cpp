#include "pch.h"
#include "Test1.h"
#include <iostream>

Test1::Test1()
{
}

void Test1::print(void) {
    std::cout << "Hello Everybody! Test1!" << std::endl;
}

double Test1::calc(double val) {
    return sqrt(abs(val / 5 * 1.61));
}

EXPORT const DLLBase * getObj(void) {
    return new Test1;
}

EXPORT const char * getName(void) {
    const std::string pluginName = "Test1:Maths";
    return pluginName.c_str();
}


extern "C" BOOL APIENTRY DllMain( HMODULE hModule,
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

