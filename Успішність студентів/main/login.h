#pragma once

#include <iostream>
#include <string> 

using namespace std;

int login()
{
	string login, password;
	cout << "������ ����: ";
	cin >> login;
	cout << "������ ������: ";
	cin >> password;

	if (login == "1" && password == "1")
	{
		return 1;
	}
	else
	{
		cout << "���� ��� ������ �����";
		return 0;
	}
}