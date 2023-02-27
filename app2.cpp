#include <stdio.h>
#include <iostream>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	
	int a, b, c, x, f;
	printf("Введите число a\n");
	scanf_s("%d", &a);
	printf("Введите число b\n");
	scanf_s("%d", &b);
	printf("Введите число c\n");
	scanf_s("%d", &c);
	printf("Введите число x\n");
	scanf_s("%d", &x);

if (a < 0 && c != 0)
		f = (a * x ^ 2) + (b * x) + c;
	else
		if (a > 0 && c == 0, x != c)
			f = -a / x - c;
		else
			f = x / c;
	printf("результат f= %d", f);
	return 0;
}

