#include <iostream>
#include <stdlib.h>
#include <stdlib.h>
#include <time.h>       /* time */
#include <stdio.h>
#include <iomanip>

using namespace std;

char Minusculas[100];
int Guardados[100];
int cantidad = 0, i = 0, t=0;
char Letra;
int Indice = 0;
int pos, cont = 0;

int main()
{
	int random;

	srand(time(NULL));

	cout << "Ingrese cantidad de elemnentos aleatorios a crear ";

	cin >> cantidad;

	for (int i = 0; i < cantidad; i++)
	{
		random= rand() % 26;
		Minusculas[i] = 'a' + random;
		//cout << "Letra generada: \n"<< Minusculas[i] << "\n";
	}
	cout << "\n";


	cout << "Ingrese un caracter que desee buscar: ";
	cin >> Letra;
	cout << "\n";

	for (int i = 0; i < cantidad; i++)
	{
		if (Minusculas[i] == Letra)
		{
			Guardados[i] = i;
			cout << "Se encontro el caracter en el indice: " << Guardados[i] << "\n";
		}
		else
		{
			cout << "No se encontro el caracter en el indice: " << i << "\n";
		}
	}



	cout << "\n";


	cout << "\nEstos caracteres fueron generados: \n";
	for (int i = 0; i < cantidad; i++)
	{
		cout << Minusculas[i];
		if (i >= 0 && i + 1 < cantidad)
		{
			cout << ", ";
		}
	}

	cout << "\n";

	for (t = 0; t < cantidad; t++) {
		for (t = i + 1; i < cantidad; i++) {
			if (Minusculas[t] == Minusculas[i]) {
				cout << "Hay dos elementos iguales en:\n" << i << "\n" << Minusculas[i] << "\n";
			}
		}
		cout << "\n";
	}
}
