#include <iostream>
#include <Windows.h>

#include "menu.h"
#include "login.h"

using namespace std;

int main()
{
    SetConsoleOutputCP(1251);

    if (login() == 1)
    {
        menu();
    }
    else
    {
        return 0;
    }


    return 0;
}