/* PUNTEROS */

#include <iostream>
#include <stdio.h>

using namespace std;

void funcion(int num)
{
	num *= 2;
	cout<<endl<<"El numero es (variable): "<<num<<endl;
}

/*void funcionPtr(int *p)
{ //p = &numero;
	*p *= 2;
	cout<<endl<<"El numero es (ptr): "<<*p<<endl;
}*/

int funcionPtr(int *p)
{ //p = &numero;
	*p *= 2;
	return *p;
}

int main()
{
	/*PUNTERO ENTERO*/
	
	int variable;
	int *puntero;
	puntero = &variable;//Asignamos direccion de memoria en el puntero
	*puntero = 15;//Se guarda el numero 15 en la direccion que guarda el puntero
	
	cout<<*puntero<<endl;
	cout<<puntero<<endl;
	
	cout<<variable<<endl;
	cout<<&variable<<endl;
	
	//delete [] puntero; //Soltamos direccion de memoria que tenga asignado el puntero
	
	/*PUNTERO CARACTER*/
	
	char *ptr = NULL;
	char letra;
	ptr = &letra;
	
	cout<<endl<<"Ingresa una letra o simbolo: ";
	cin>>*ptr;
	
	cout<<endl<<letra<<endl;
	
	/*EJERCICIO PUNTEROS*/
	
	int numero;
	cout<<endl<<"Ingresa un numero: ";
	cin>>numero;
	
	cout<<endl<<"El numero es: "<<numero<<endl;
	
	funcion(numero);//El argumento envia el numero entero
	
	cout<<endl<<"El numero es (ptr): "<<funcionPtr(&numero)<<endl;//El argumento envia la direccion de la variable del numero entero
	
	/*
		El tipo de dato del apuntador debe coincidir con el de la variable
		
		Siempre que vamos usar un apuntador debe asignarse la direccion de alguna variable
		Ej. ptr = &nombre;
		
		El asterisco en el puntero denota que se usará el dato contenido en la direccion
		a la que se esta apuntando
		Ej. cout<<*ptr;
		
		Cada que se utiliza un puntero debe liberarse la memoria en especial al usar
		arreglos o matrices
		
		Un puntero puede referenciar a cualquier dato o variable.
		 
	*/
	
	return 0;
}
