#pragma once

#include <iostream>
#include <string> 

using namespace std;

int login()
{
	string login, password;
	cout << "¬вед≥ть лог≥н: ";
	cin >> login;
	cout << "¬вед≥ть пароль: ";
	cin >> password;

	if (login == "1" && password == "1")
	{
		return 1;
	}
	else
	{
		cout << "Ћог≥н або пароль нев≥рн≥";
		return 0;
	}
}