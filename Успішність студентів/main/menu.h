#pragma once

#include <iostream>
#include "report.h"

using namespace std;

void menu()
{
    int key1, key2;
    cout << "����: ";
    cout << "\n1. �������� � ������������ �����";
    cout << "\n2. ���������� �� ��������� ����\n";

    cin >> key1;

    if (key1 == 1)
    {
        cout << "1. ���� ��������������";
        cout << "\n2. ���� ����";
        cout << "\n3. ���� ��������";
        cout << "\n4. ���� ��� (����� �� ������)";
        cout << "\n5. ���� ������";
        cout << "\n6. ���� ����������\n";

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
        else cout << "������ ��������";
    }
    else if (key1 == 2)
    {
        cout << "1. �������� �� �������";
        cout << "\n2. ���������� ��� �� ����������";
        cout << "\n3. ���������� ��� �� �������";
        cout << "\n4. ��������� �� ���������";
        cout << "\n5. ���������� ��������";
        cout << "\n6. ��������, �� �������� ��������";
        cout << "\n7. �������� �� �������";
        cout << "\n8. ����� �� �������\n";

        cin >> key2;

        if (key2 >= 1 && key2 <= 8) report(key2);
        else cout << "������ ��������";
    }
    else cout << "������ ��������";
}