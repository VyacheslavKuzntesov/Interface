#include"Menu.h"
#include"stdafx.h"
#include"Statistics.h"
#include"Krestiki_noliki.h"

void menuvuvod(char a)
{
	system("cls");
	setlocale(LC_ALL, "Rus");
	cout << "Выберете программу: " << endl;
	cout << (char)91 << (char)(a == '1' ? (char)35 : Probel) << (char)93 << "1. Функция Factorial" << endl;
	cout << (char)91 << (char)(a == '2' ? (char)35 : Probel) << (char)93 << "2. Функция Power" << endl;
	cout << (char)91 << (char)(a == '3' ? (char)35 : Probel) << (char)93 << "3. Функцию Fibonacci которая выводит ряд Фибоначчи, до указанного числа" << endl;
	cout << (char)91 << (char)(a == '4' ? (char)35 : Probel) << (char)93 << "4. Функцию Fibonacci которая выводит заданное количество значений из ряда Фибоначчи" << endl;
	cout << (char)91 << (char)(a == '5' ? (char)35 : Probel) << (char)93 << "5. Крестики Нолики (2 игрока)" << endl;
	cout << (char)91 << (char)(a == '6' ? (char)35 : Probel) << (char)93 << "6. Крестики Нолики (против компьютера)" << endl;
	cout << (char)91 << (char)(a == '7' ? (char)35 : Probel) << (char)93 << "7. Выход" << endl;
}

char menu(char a)
{
	char key;
	cout << a << endl;
	do
	{
		system("cls");
		menuvuvod(a);
		key = _getch();
		switch (key)
		{
		case ArrowUp:
			if (a == '1')
			{
				a = '7';
			}
			else
			{
				a = ((a - '0') - 1) + '0';
			}
			break;
		case ArrowDown:
			if (a == '7')
			{
				a = '1';
			}
			else
			{
				a = ((a - '0') + 1) + '0';
			}
			break;
		default:
			break;
		}
	} while (key != Enter);
	return a;
}

void programmu(char vubor_progarmmu)
{
	char arr[ROWS][COLS] = { Probel,Probel,Probel,Probel,Probel,Probel,Probel,Probel,Probel };
	int chislo;
	int stepen;
	switch (vubor_progarmmu)
	{
	case '1':
		system("cls");
		cout << "Функция Factorial" << endl;
		cout << "Введите число для расчёта факториала: "; cin >> chislo;
		cout << "Факториал числа " << chislo << " = " << Factorial(chislo);
		cout << endl;
		system("pause");
		break;
	case '2':
		system("cls");
		cout << "Функция Power" << endl;
		cout << "Введите число: "; cin >> chislo;
		cout << "Введите степень: "; cin >> stepen;
		cout << "Число " << chislo << " в степени " << stepen << " = " << Power(chislo, stepen);
		cout << endl;
		system("pause");
		break;
	case '3':
		system("cls");
		cout << "Функцию Fibonacci которая выводит ряд Фибоначчи, до указанного числа" << endl;
		cout << "Введите число: "; cin >> chislo;
		cout << "Ряд фибоначчи: ";
		FibonacciPrintDoChisla(chislo, 0);
		cout << endl;
		system("pause");
		break;
	case '4':
		system("cls");
		cout << "Функцию Fibonacci которая выводит заданное количество значений из ряда Фибоначчи" << endl;
		cout << "Введите число: "; cin >> chislo;
		cout << "Ряд фибоначчи: ";
		FibonacciPrintKol(chislo, 0);
		cout << endl;
		system("pause");
		break;
	case '5':
		krestiki_noliki(arr, 9, 1, 0);
		cout << endl;
		system("pause");
		break;
	case '6':
		krestiki_noliki(arr, 9, 1, 1);
		cout << endl;
		system("pause");
		break;
	case '7':
		return;
		break;
	default:
		break;
	}
}