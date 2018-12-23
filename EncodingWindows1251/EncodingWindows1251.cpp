// EncodingWindows1251.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
// cstdlib Необходима для использованиия функции system();
#include <cstdlib>
#include <string>

using namespace std;
int main()
{
	/* 
		Вариант 1. Данный способ работает только для вывода русского текста в консоль,
		но ввод русских букв работать не будет.
		(Расскомментируйте строчку ниже)
	*/
	//setlocale(LC_ALL, "Russian");

	/*
		Вариант 2. Меняем кодовую страницу в самой консоли.
		(Расскомментируйте строчку ниже)
	*/
	//system("chcp 1251");	

	string inputText;

    cout << "Привет мир!\n" << "Введите русский текст: ";

	getline(cin, inputText);

	cout << "Вы ввели: ["<<inputText<<"]"<<endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
