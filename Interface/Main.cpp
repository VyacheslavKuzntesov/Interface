//#define Old_Version_Menu
#define New_Version_Menu

#include"stdafx.h"


#ifdef New_Version_Menu
#include"Menu.h"  
#endif // New_Version_Menu


#ifdef Old_Version_Menu
#include"Krestiki_noliki.h"
#include"Statistics.h"  
#endif // Old_Version_Menu


void main()
{
#ifdef Old_Version_Menu
	char vubor_progarmmu = '1';
	char klavisha;
	int chislo;
	int stepen;

	do
	{
		char arr[ROWS][COLS] = { Probel,Probel,Probel,Probel,Probel,Probel,Probel,Probel,Probel };
		setlocale(LC_ALL, "Rus");
		do
		{
			system("cls");
			cout << "Выберете программу: " << endl;
			switch (vubor_progarmmu)
			{
			case '1':
				cout << (char)91 << (char)35 << (char)93 << "1. Функция Factorial" << endl;
				cout << (char)91 << " " << (char)93 << "2. Функция Power" << endl;
				cout << (char)91 << " " << (char)93 << "3. Функцию Fibonacci которая выводит ряд Фибоначчи, до указанного числа" << endl;
				cout << (char)91 << " " << (char)93 << "4. Функцию Fibonacci которая выводит заданное количество значений из ряда Фибоначчи" << endl;
				cout << (char)91 << " " << (char)93 << "5. Крестики Нолики (2 игрока)" << endl;
				cout << (char)91 << " " << (char)93 << "6. Крестики Нолики (против компьютера)" << endl;
				cout << (char)91 << " " << (char)93 << "7. Выход" << endl;
				break;
			case '2':
				cout << (char)91 << " " << (char)93 << "1. Функция Factorial" << endl;
				cout << (char)91 << (char)35 << (char)93 << "2. Функция Power" << endl;
				cout << (char)91 << " " << (char)93 << "3. Функцию Fibonacci которая выводит ряд Фибоначчи, до указанного числа" << endl;
				cout << (char)91 << " " << (char)93 << "4. Функцию Fibonacci которая выводит заданное количество значений из ряда Фибоначчи" << endl;
				cout << (char)91 << " " << (char)93 << "5. Крестики Нолики (2 игрока)" << endl;
				cout << (char)91 << " " << (char)93 << "6. Крестики Нолики (против компьютера)" << endl;
				cout << (char)91 << " " << (char)93 << "7. Выход" << endl;
				break;
			case '3':
				cout << (char)91 << " " << (char)93 << "1. Функция Factorial" << endl;
				cout << (char)91 << " " << (char)93 << "2. Функция Power" << endl;
				cout << (char)91 << (char)35 << (char)93 << "3. Функцию Fibonacci которая выводит ряд Фибоначчи, до указанного числа" << endl;
				cout << (char)91 << " " << (char)93 << "4. Функцию Fibonacci которая выводит заданное количество значений из ряда Фибоначчи" << endl;
				cout << (char)91 << " " << (char)93 << "5. Крестики Нолики (2 игрока)" << endl;
				cout << (char)91 << " " << (char)93 << "6. Крестики Нолики (против компьютера)" << endl;
				cout << (char)91 << " " << (char)93 << "7. Выход" << endl;
				break;
			case '4':
				cout << (char)91 << " " << (char)93 << "1. Функция Factorial" << endl;
				cout << (char)91 << " " << (char)93 << "2. Функция Power" << endl;
				cout << (char)91 << " " << (char)93 << "3. Функцию Fibonacci которая выводит ряд Фибоначчи, до указанного числа" << endl;
				cout << (char)91 << (char)35 << (char)93 << "4. Функцию Fibonacci которая выводит заданное количество значений из ряда Фибоначчи" << endl;
				cout << (char)91 << " " << (char)93 << "5. Крестики Нолики (2 игрока)" << endl;
				cout << (char)91 << " " << (char)93 << "6. Крестики Нолики (против компьютера)" << endl;
				cout << (char)91 << " " << (char)93 << "7. Выход" << endl;
				break;
			case '5':
				cout << (char)91 << " " << (char)93 << "1. Функция Factorial" << endl;
				cout << (char)91 << " " << (char)93 << "2. Функция Power" << endl;
				cout << (char)91 << " " << (char)93 << "3. Функцию Fibonacci которая выводит ряд Фибоначчи, до указанного числа" << endl;
				cout << (char)91 << " " << (char)93 << "4. Функцию Fibonacci которая выводит заданное количество значений из ряда Фибоначчи" << endl;
				cout << (char)91 << (char)35 << (char)93 << "5. Крестики Нолики (2 игрока)" << endl;
				cout << (char)91 << " " << (char)93 << "6. Крестики Нолики (против компьютера)" << endl;
				cout << (char)91 << " " << (char)93 << "7. Выход" << endl;
				break;
			case '6':
				cout << (char)91 << " " << (char)93 << "1. Функция Factorial" << endl;
				cout << (char)91 << " " << (char)93 << "2. Функция Power" << endl;
				cout << (char)91 << " " << (char)93 << "3. Функцию Fibonacci которая выводит ряд Фибоначчи, до указанного числа" << endl;
				cout << (char)91 << " " << (char)93 << "4. Функцию Fibonacci которая выводит заданное количество значений из ряда Фибоначчи" << endl;
				cout << (char)91 << " " << (char)93 << "5. Крестики Нолики (2 игрока)" << endl;
				cout << (char)91 << (char)35 << (char)93 << "6. Крестики Нолики (против компьютера)" << endl;
				cout << (char)91 << " " << (char)93 << "7. Выход" << endl;
				break;
			case '7':
				cout << (char)91 << " " << (char)93 << "1. Функция Factorial" << endl;
				cout << (char)91 << " " << (char)93 << "2. Функция Power" << endl;
				cout << (char)91 << " " << (char)93 << "3. Функцию Fibonacci которая выводит ряд Фибоначчи, до указанного числа" << endl;
				cout << (char)91 << " " << (char)93 << "4. Функцию Fibonacci которая выводит заданное количество значений из ряда Фибоначчи" << endl;
				cout << (char)91 << " " << (char)93 << "5. Крестики Нолики (2 игрока)" << endl;
				cout << (char)91 << " " << (char)93 << "6. Крестики Нолики (против компьютера)" << endl;
				cout << (char)91 << (char)35 << (char)93 << "7. Выход" << endl;
				break;
			default:
				break;
			}
			klavisha = _getch();
			switch (klavisha)
			{
			case ArrowUp:
				if (vubor_progarmmu == '1')
				{
					vubor_progarmmu = '7';
				}
				else vubor_progarmmu = ((vubor_progarmmu - '0') - 1) + '0';
				break;
			case ArrowDown:
				if (vubor_progarmmu == '7')
				{
					vubor_progarmmu = '1';
				}
				else vubor_progarmmu = ((vubor_progarmmu - '0') + 1) + '0';
				break;
			default:
				break;
			}
		} while (klavisha != Enter);
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
	} while (klavisha != Escape);
#endif // Old_Version_Menu


#ifdef New_Version_Menu
	char a = '1';
	do
	{
		a = menu(a);
		programmu(a);
	} while (a != '7');
#endif // New_Version_Menu

}	