#include <stdio.h>

int ciferace()
{	int cislo;int x;int y;int soucet = 0;int vysledek = 0;
		printf("Zadejte cislo pro ciferny soucet: ");
	scanf_s("%d", &cislo);
	while (cislo > 0)
	{
		x = cislo % 10;
		soucet = soucet + x;
		cislo = cislo / 10;
	}
	while (soucet > 0) {
		y = soucet % 10;
		vysledek = vysledek + y;
		soucet = soucet / 10;
	}
	printf("\n\nvysledek je %d\n", vysledek);
}

int main() {
	ciferace();
}