#include <stdio.h>

int suma(int num1, int num2);

int main()
{
	int num1, num2, sum;
	printf("Introducir dos numeros a sumar: \n");
	scanf("%d\n %d", &num1, &num2);
	sum = suma(num1, num2);
	printf("La suma es: %d", sum);
	return 0;
}

int suma(int num1, int num2)
{
	return (num1+num2);
}


