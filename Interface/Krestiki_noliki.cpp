#include"Krestiki_noliki.h"
void vuvod_krestiki_noliki(char arr[ROWS][COLS])
{
	setlocale(LC_ALL, ".866");
	cout << " " << "       " << (char)179 << "       " << (char)179 << "       " << endl;
	cout << " " << "   " << arr[0][0] << "   " << (char)179 << "   " << arr[0][1] << "   " << (char)179 << "   " << arr[0][2] << "   " << endl;
	cout << " " << "       " << (char)179 << "       " << (char)179 << "       " << endl;
	cout << " " << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)197 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)197 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << endl;
	cout << " " << "       " << (char)179 << "       " << (char)179 << "       " << endl;
	cout << " " << "   " << arr[1][0] << "   " << (char)179 << "   " << arr[1][1] << "   " << (char)179 << "   " << arr[1][2] << "   " << endl;
	cout << " " << "       " << (char)179 << "       " << (char)179 << "       " << endl;
	cout << " " << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)197 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)197 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << endl;
	cout << " " << "       " << (char)179 << "       " << (char)179 << "       " << endl;
	cout << " " << "   " << arr[2][0] << "   " << (char)179 << "   " << arr[2][1] << "   " << (char)179 << "   " << arr[2][2] << "   " << endl;
	cout << " " << "       " << (char)179 << "       " << (char)179 << "       " << endl;
}

void vuvod_krestiki_noliki_s_nomerami()
{
	setlocale(LC_ALL, ".866");
	cout << " " << "       " << (char)179 << "       " << (char)179 << "       " << endl;
	cout << " " << "   " << "7" << "   " << (char)179 << "   " << "8" << "   " << (char)179 << "   " << "9" << "   " << endl;
	cout << " " << "       " << (char)179 << "       " << (char)179 << "       " << endl;
	cout << " " << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)197 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)197 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << endl;
	cout << " " << "       " << (char)179 << "       " << (char)179 << "       " << endl;
	cout << " " << "   " << "4" << "   " << (char)179 << "   " << "5" << "   " << (char)179 << "   " << "6" << "   " << endl;
	cout << " " << "       " << (char)179 << "       " << (char)179 << "       " << endl;
	cout << " " << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)197 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)197 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << endl;
	cout << " " << "       " << (char)179 << "       " << (char)179 << "       " << endl;
	cout << " " << "   " << "1" << "   " << (char)179 << "   " << "2" << "   " << (char)179 << "   " << "3" << "   " << endl;
	cout << " " << "       " << (char)179 << "       " << (char)179 << "       " << endl;
}

void krestiki_noliki(char arr[ROWS][COLS], int hod, int hod_igroka, int computer)
{
	setlocale(LC_ALL, "Rus");
	system("cls");

	char vubor_yacheyki;
	bool vubor_yacheyki_pravilnuy = false;
	bool exite = false;

	if (arr[0][0] == Krestik && arr[1][1] == Krestik && arr[2][2] == Krestik)
	{
		system("cls");
		vuvod_krestiki_noliki(arr);
		setlocale(LC_ALL, "Rus");
		cout << endl << "Выграл игрок 1";
		return;
	}
	else if (arr[0][2] == Krestik && arr[1][1] == Krestik && arr[2][0] == Krestik)
	{
		system("cls");
		vuvod_krestiki_noliki(arr);
		setlocale(LC_ALL, "Rus");
		cout << endl << "Выграл игрок 1";
		return;
	}
	else if (arr[0][0] == Krestik && arr[0][1] == Krestik && arr[0][2] == Krestik)
	{
		system("cls");
		vuvod_krestiki_noliki(arr);
		setlocale(LC_ALL, "Rus");
		cout << endl << "Выграл игрок 1";
		return;
	}
	else if (arr[1][0] == Krestik && arr[1][1] == Krestik && arr[1][2] == Krestik)
	{
		system("cls");
		vuvod_krestiki_noliki(arr);
		setlocale(LC_ALL, "Rus");
		cout << endl << "Выграл игрок 1";
		return;
	}
	else if (arr[2][0] == Krestik && arr[2][1] == Krestik && arr[2][2] == Krestik)
	{
		system("cls");
		vuvod_krestiki_noliki(arr);
		setlocale(LC_ALL, "Rus");
		cout << endl << "Выграл игрок 1";
		return;
	}
	else if (arr[0][0] == Krestik && arr[1][0] == Krestik && arr[2][0] == Krestik)
	{
		system("cls");
		vuvod_krestiki_noliki(arr);
		setlocale(LC_ALL, "Rus");
		cout << endl << "Выграл игрок 1";
		return;
	}
	else if (arr[0][1] == Krestik && arr[1][1] == Krestik && arr[2][1] == Krestik)
	{
		system("cls");
		vuvod_krestiki_noliki(arr);
		setlocale(LC_ALL, "Rus");
		cout << endl << "Выграл игрок 1";
		return;
	}
	else if (arr[0][2] == Krestik && arr[1][2] == Krestik && arr[2][2] == Krestik)
	{
		system("cls");
		vuvod_krestiki_noliki(arr);
		setlocale(LC_ALL, "Rus");
		cout << endl << "Выграл игрок 1";
		return;
	}
	else if (arr[0][0] == Nolik && arr[1][1] == Nolik && arr[2][2] == Nolik)
	{
		system("cls");
		vuvod_krestiki_noliki(arr);
		setlocale(LC_ALL, "Rus");
		cout << endl << "Выграл игрок 2";
		return;
	}
	else if (arr[0][2] == Nolik && arr[1][1] == Nolik && arr[2][0] == Nolik)
	{
		system("cls");
		vuvod_krestiki_noliki(arr);
		setlocale(LC_ALL, "Rus");
		cout << endl << "Выграл игрок 2";
		return;
	}
	else if (arr[0][0] == Nolik && arr[0][1] == Nolik && arr[0][2] == Nolik)
	{
		system("cls");
		vuvod_krestiki_noliki(arr);
		setlocale(LC_ALL, "Rus");
		cout << endl << "Выграл игрок 2";
		return;
	}
	else if (arr[1][0] == Nolik && arr[1][1] == Nolik && arr[1][2] == Nolik)
	{
		system("cls");
		vuvod_krestiki_noliki(arr);
		setlocale(LC_ALL, "Rus");
		cout << endl << "Выграл игрок 2";
		return;
	}
	else if (arr[2][0] == Nolik && arr[2][1] == Nolik && arr[2][2] == Nolik)
	{
		system("cls");
		vuvod_krestiki_noliki(arr);
		setlocale(LC_ALL, "Rus");
		cout << endl << "Выграл игрок 2";
		return;
	}
	else if (arr[0][0] == Nolik && arr[1][0] == Nolik && arr[2][0] == Nolik)
	{
		system("cls");
		vuvod_krestiki_noliki(arr);
		setlocale(LC_ALL, "Rus");
		cout << endl << "Выграл игрок 2";
		return;
	}
	else if (arr[0][1] == Nolik && arr[1][1] == Nolik && arr[2][1] == Nolik)
	{
		system("cls");
		vuvod_krestiki_noliki(arr);
		setlocale(LC_ALL, "Rus");
		cout << endl << "Выграл игрок 2";
		return;
	}
	else if (arr[0][2] == Nolik && arr[1][2] == Nolik && arr[2][2] == Nolik)
	{
		system("cls");
		vuvod_krestiki_noliki(arr);
		setlocale(LC_ALL, "Rus");
		cout << endl << "Выграл игрок 2";
		return;
	}
	else if (hod == 0)
	{
		system("cls");
		vuvod_krestiki_noliki(arr);
		setlocale(LC_ALL, "Rus");
		cout << endl <<"Ничья";
		return;
	}

	do
	{
		system("cls");
		vuvod_krestiki_noliki(arr);
		cout << endl;
		vuvod_krestiki_noliki_s_nomerami();
		setlocale(LC_ALL, "Rus");
		if (hod_igroka == 1)
		{
			cout << "Ходит игрок номер " << hod_igroka << endl;
			cout << "Выберите ячейку поля (от 1 до 9):"; vubor_yacheyki = _getch();
		}
		if (hod_igroka == 2 && computer == 0)
		{
			cout << "Ходит игрок номер " << hod_igroka << endl;
			cout << "Выберите ячейку поля (от 1 до 9):"; vubor_yacheyki = _getch();
		}
		if (hod_igroka == 1)
		{
			switch (vubor_yacheyki)
			{
			case '7':
				if (arr[0][0] == Probel)
				{
					arr[0][0] = Krestik;
					vubor_yacheyki_pravilnuy - true;
					exite = true;
					break;
				}
				else
				{
					cout << endl << "Ячейка уже занята" << endl;
					system("pause");
					break;
				}
			case '8':
				if (arr[0][1] == Probel)
				{
					arr[0][1] = Krestik;
					vubor_yacheyki_pravilnuy - true;
					exite = true;
					break;
				}
				else
				{
					cout << endl << "Ячейка уже занята" << endl;
					system("pause");
					break;
				}
			case '9':
				if (arr[0][2] == Probel)
				{
					arr[0][2] = Krestik;
					vubor_yacheyki_pravilnuy - true;
					exite = true;
					break;
				}
				else
				{
					cout << endl << "Ячейка уже занята" << endl;
					system("pause");
					break;
				}
			case '4':
				if (arr[1][0] == Probel)
				{
					arr[1][0] = Krestik;
					vubor_yacheyki_pravilnuy - true;
					exite = true;
					break;
				}
				else
				{
					cout << endl << "Ячейка уже занята" << endl;
					system("pause");
					break;
				}
			case '5':
				if (arr[1][1] == Probel)
				{
					arr[1][1] = Krestik;
					vubor_yacheyki_pravilnuy - true;
					exite = true;
					break;
				}
				else
				{
					cout << endl << "Ячейка уже занята" << endl;
					system("pause");
					break;
				}
			case '6':
				if (arr[1][2] == Probel)
				{
					arr[1][2] = Krestik;
					vubor_yacheyki_pravilnuy - true;
					exite = true;
					break;
				}
				else
				{
					cout << endl << "Ячейка уже занята" << endl;
					system("pause");
					break;
				}
			case '1':
				if (arr[2][0] == Probel)
				{
					arr[2][0] = Krestik;
					vubor_yacheyki_pravilnuy - true;
					exite = true;
					break;
				}
				else
				{
					cout << endl << "Ячейка уже занята" << endl;
					system("pause");
					break;
				}
			case '2':
				if (arr[2][1] == Probel)
				{
					arr[2][1] = Krestik;
					vubor_yacheyki_pravilnuy - true;
					exite = true;
					break;
				}
				else
				{
					cout << endl << "Ячейка уже занята" << endl;
					system("pause");
					break;
				}
			case '3':
				if (arr[2][2] == Probel)
				{
					arr[2][2] = Krestik;
					vubor_yacheyki_pravilnuy - true;
					exite = true;
					break;
				}
				else
				{
					cout << endl << "Ячейка уже занята" << endl;
					system("pause");
					break;
				}
			default:
				cout << endl <<"Неправильно выбрана ячейка" << endl;
				system("pause");
				break;
			}
		}
		else if (computer == 0)
		{
			switch (vubor_yacheyki)
			{
			case '7':
				if (arr[0][0] == Probel)
				{
					arr[0][0] = Nolik;
					vubor_yacheyki_pravilnuy - true;
					exite = true;
					break;
				}
				else
				{
					cout << endl << "Ячейка уже занята" << endl;
					system("pause");
					break;
				}
			case '8':
				if (arr[0][1] == Probel)
				{
					arr[0][1] = Nolik;
					vubor_yacheyki_pravilnuy - true;
					exite = true;
					break;
				}
				else
				{
					cout << endl << "Ячейка уже занята" << endl;
					system("pause");
					break;
				}
			case '9':
				if (arr[0][2] == Probel)
				{
					arr[0][2] = Nolik;
					vubor_yacheyki_pravilnuy - true;
					exite = true;
					break;
				}
				else
				{
					cout << endl << "Ячейка уже занята" << endl;
					system("pause");
					break;
				}
			case '4':
				if (arr[1][0] == Probel)
				{
					arr[1][0] = Nolik;
					vubor_yacheyki_pravilnuy - true;
					exite = true;
					break;
				}
				else
				{
					cout << endl << "Ячейка уже занята" << endl;
					system("pause");
					break;
				}
			case '5':
				if (arr[1][1] == Probel)
				{
					arr[1][1] = Nolik;
					vubor_yacheyki_pravilnuy - true;
					exite = true;
					break;
				}
				else
				{
					cout << endl << "Ячейка уже занята" << endl;
					system("pause");
					break;
				}
			case '6':
				if (arr[1][2] == Probel)
				{
					arr[1][2] = Nolik;
					vubor_yacheyki_pravilnuy - true;
					exite = true;
					break;
				}
				else
				{
					cout << endl << "Ячейка уже занята" << endl;
					system("pause");
					break;
				}
			case '1':
				if (arr[2][0] == Probel)
				{
					arr[2][0] = Nolik;
					vubor_yacheyki_pravilnuy - true;
					exite = true;
					break;
				}
				else
				{
					cout << endl << "Ячейка уже занята" << endl;
					system("pause");
					break;
				}
			case '2':
				if (arr[2][1] == Probel)
				{
					arr[2][1] = Nolik;
					vubor_yacheyki_pravilnuy - true;
					exite = true;
					break;
				}
				else
				{
					cout << endl << "Ячейка уже занята" << endl;
					system("pause");
					break;
				}
			case '3':
				if (arr[2][2] == Probel)
				{
					arr[2][2] = Nolik;
					vubor_yacheyki_pravilnuy - true;
					exite = true;
					break;
				}
				else
				{
					cout << endl << "Ячейка уже занята" << endl;
					system("pause");
					break;
				}
			default:
				cout << endl << "Неправильно выбрана ячейка" << endl;
				system("pause");
				break;
			}
		}
		else
		{
			ii_dlya_krestikov_nolikov(arr, 2);
			exite = true;
		}
	} while (exite == false);
	vuvod_krestiki_noliki(arr);
	if (hod_igroka == 1)
	{
		krestiki_noliki(arr, hod - 1, 2, computer);
	}
	else if (hod_igroka == 2)
	{
		krestiki_noliki(arr, hod - 1, 1, computer);
	}
}

char ii_dlya_krestikov_nolikov(char arr[ROWS][COLS], int nomer_igroka)
{
	int x;
	int y;
	bool vuhod;
	if (nomer_igroka == 1)
	{
		do
		{
			vuhod = false;
			srand(time(0));
			x = rand() % 3;
			y = rand() % 3;
			if (arr[y][x] == Probel)
			{
				return arr[y][x] = Krestik;
				vuhod = true;
			}
		} while (vuhod == false);
	}
	else
	{
		do
		{
			vuhod = false;
			srand(time(0));
			x = rand() % 3;
			y = rand() % 3;
			if (arr[y][x] == Probel)
			{
				return arr[y][x] = Nolik;
				vuhod = true;
			}
		} while (vuhod == false);
	}
}