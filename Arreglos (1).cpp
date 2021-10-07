#include <iostream>
#include <stdlib.h>
#include <time.h>       /* time */
#include <stdio.h>
using namespace std;

char Minusculas[100];
int Guardados[100];
int c = 0, i = 0;
char Letra;
int Indice = 0;
int pos, cont = 0;

int main()
{
	int Aleatorio;

	srand(time(NULL));

	cout << "Cuantos caracteres desea generar?: ";
	
	cin >> c;

	for (int i = 0; i < c; i++)
	{
		Aleatorio = rand() % 26;
		Minusculas[i] = 'a' + Aleatorio;

	}
	cout << "\n";


	cout << "Ingrese un caracter que desee buscar: ";
	cin >> Letra;
	cout << "\n";

	for (int i = 0; i < c; i++)
	{
		if (Minusculas[i] == Letra)
		{
			Guardados[i] = i;
			cout << "el caracter si esta en el indice " << Guardados[i] << "\n";
		}
		else
		{
			cout << "No se encontro el caracter en el indice " << i << "\n";
		}
	}



	cout << "\n";


	cout << "\nEstos caracteres fueron generados: \n";
	for (int i = 0; i < c; i++)
	{
		cout << Minusculas[i];
		if (i >= 0 && i + 1 < c)
		{
			cout << ", ";
		}
	}

	
	cout << "\n";
}
