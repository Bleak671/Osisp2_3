// Жертва dll-инъекции
#include <iostream>
#include <windows.h>
#include <cstring>

#define STRING_SIZE 1024

int main()
{
    char* str = (char*)calloc(STRING_SIZE, sizeof(char));
    strcpy_s(str, STRING_SIZE, "Hello, World!\n");

    while (true)
    {
        std::wcout << str;
        Sleep(1000);
    }

    int i;
    std::wcin >> i;
}
