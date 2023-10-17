#include <stdio.h>

float perimetro(float numero)
{
	float perimetro;
	perimetro= 4 * numero;
	return perimetro;
}

float areaFigura(float numero)
{
	float area;
	area = numero * numero;
	return area;
}

int main()
{
	int num;
	printf("Lado de un cuadrado: ");
	scanf("%d", &num);
	printf("Perimetro: %f\n", perimetro(num));
	printf("Area: %f\n", areaFigura(num));
	
	return 0;
}
