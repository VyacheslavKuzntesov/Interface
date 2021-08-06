#include "Statistics.h"
int fibonacci(int i)
{
	if (i == 0 || i == 1)return i;
	else return(fibonacci(i - 1) + fibonacci(i - 2));
}

int Factorial(int n)
{
	if (n == 1) return 1;
	return Factorial(n - 1) * n;
}

int Power(int chislo, int stepen)
{
	if (stepen == 1) return chislo;
	return chislo * Power(chislo, stepen - 1);
}