// DllStaticImporter.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <windows.h>

#define DLL_IMPORT __declspec(dllimport)

extern "C" int DLL_IMPORT Printer(const WCHAR*, int);

#pragma comment( lib, "D:/repos/StringChanger-master/Debug/Injection.lib" )

int main()
{
    std::cout << Printer(L"It works!", 34);
}
