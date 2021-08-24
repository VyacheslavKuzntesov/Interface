#include "Statistics.h"
#include "stdafx.h"
int fibonacci(int i)
{
	if (i == 0) 
	{
		return 0;
	}
	else if (i == 1)
	{
		return 1;
	}
	else 
	{
		return fibonacci(i - 1) + fibonacci(i - 2);
	}
}

void FibonacciPrintKol(int i, int j)
{
	if (i == j)
	{
		cout << fibonacci(j) << " ";
		return;
	}
	else if (j == 0)
	{
		cout << "0 ";
		FibonacciPrintKol(i, j + 1);
	}
	else if (j == 1)
	{
		cout << "1 ";
		FibonacciPrintKol(i, j + 1);
	}
	else
	{
		cout << fibonacci(j)<<" ";
		FibonacciPrintKol(i,j+1);
	}
}

void FibonacciPrintDoChisla(int chislo, int i)
{
	if (fibonacci(i) > chislo)
	{
		return;
	}
	else if (i == 0)
	{
		cout << "0 ";
		FibonacciPrintDoChisla(chislo, i + 1);
	}
	else if (i == 1)
	{
		cout << "1 ";
		FibonacciPrintDoChisla(chislo, i + 1);
	}
	else
	{
		cout << fibonacci(i) << " ";
		FibonacciPrintDoChisla(chislo, i + 1);
	}
}

int Factorial(int n)
{
	if (n == 1) return 1;
	return Factorial(n - 1) * n;
}

int Power(int chislo, int stepen)
{
	if (stepen == 1) return chislo;
	if (stepen < 0)
	{
		stepen *= -1;
		return chislo * Power(chislo, stepen - 1) * -1;
	}
	else
	{
		return chislo * Power(chislo, stepen - 1);
	}		
}