#include <stdio.h>
#include <iostream>
#include <math.h>
#include <locale.h> 

int main()
{
	setlocale(LC_ALL, "Russian");
	float x, sum;
	int k, n, k1=1;
	printf("Введите число x\n");
	scanf_s("%f", &x);
	printf("Введите число n\n");
	scanf_s("%d", &n);
	sum = 0;
	for (k = 1; k <= n; k++)
	{
		k1 *= k; sum += pow(cos(x), k) / k1;
		printf("k = %d сумма = %f\n", k, sum);
	}
	return 0;
}
