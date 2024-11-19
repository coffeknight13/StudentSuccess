#pragma once

#include <iostream>
#include "report.h"

using namespace std;

void menu()
{
    int key1, key2;
    cout << "Меню: ";
    cout << "\n1. Введення і редагуваання даних";
    cout << "\n2. Формування та виведення звітів\n";

    cin >> key1;

    if (key1 == 1)
    {
        cout << "1. Облік спеціальностей";
        cout << "\n2. Облік груп";
        cout << "\n3. Облік студентів";
        cout << "\n4. Облік сесії (заліків та іспитів)";
        cout << "\n5. Облік кафедр";
        cout << "\n6. Облік викладачів\n";

        cin >> key2;

        if (key2 == 1)
        {

        }
        else if (key2 == 2)
        {

        }
        else if (key2 == 3)
        {

        }
        else if (key2 == 4)
        {

        }
        else if (key2 == 5)
        {

        }
        else if (key2 == 6)
        {

        }
        else cout << "Невірне введення";
    }
    else if (key1 == 2)
    {
        cout << "1. Студенти за групами";
        cout << "\n2. Результати сесії за студентами";
        cout << "\n3. Результати сесії за групами";
        cout << "\n4. Викладачі за кафедрами";
        cout << "\n5. Найуспішніші студенти";
        cout << "\n6. Студенти, які найбільше відстають";
        cout << "\n7. Успішність за групами";
        cout << "\n8. Якість за групами\n";

        cin >> key2;

        if (key2 >= 1 && key2 <= 8) report(key2);
        else cout << "Невірне введення";
    }
    else cout << "Невірне введення";
}