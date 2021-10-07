#include <iostream>
#include <stdio.h>

using namespace std;

/* C O L A S  -   Q U E U E      -   F I L A S */

struct nodo
{
	int numero;
	nodo * siguiente;
};

typedef struct nodo * Q;//Tipo de dato Q = struct nodo *
Q primero, ultimo = NULL;//punteros

void push(Q &fila)
{
	int dato = 0;
	fila = new nodo;//Se estructura el nodo (dato y direccion)
	
	cout<<"Ingresa el dato:";
	cin>>dato;

	fila -> numero = dato;
	fila->siguiente = NULL;

	if(primero == NULL)
		ultimo=primero=fila;
	else
	{
		ultimo->siguiente = fila;
		ultimo = fila;
	}
}

void mostrar(Q fila)
{
	fila=primero;
	
	if(fila == NULL)
	{
		cout<<"La fila esta vacia...";
		return;
	}
	else
	{
		cout<<endl<<"El Queue es: ";
		while(fila != NULL)
		{
			cout<<" "<<fila->numero;
			fila = fila->siguiente;
		}
		cout<<endl<<endl;
	}
}

void pop(Q &fila)
{
	fila = primero;
	
	if(fila==NULL)
	{
		cout<<endl<<"El queue esta vacio..."<<endl
			;
		return;
	}
	else
	{
		primero = fila->siguiente;
		fila->siguiente=NULL;
		fila=primero;
	}
}

void PyU(Q fila)
{
	if(fila==NULL)
	{
		cout<<endl<<"El Queue esta vacio..."<<endl;
		return;
	}
	else
	{
		fila=primero;
		cout<<endl<<"El primero nodo es: "<<fila->numero<<endl;
		cout<<endl<<"La direccion es: "<<fila<<endl;
		cout<<endl<<"El nodo siguiente es: "<<fila->siguiente<<endl;
		cout<<endl<<"El numero del nodo siguiente es: "<<fila->siguiente->numero;
		fila=ultimo;
		cout<<endl<<"El ultimo nodo es: "<<fila->numero<<endl;
	}
}

void modificar(Q fila)
{
	int p, u;
	cout<<endl<<"Ingresa el primer dato: ";
	cin>>p;
	cout<<endl<<"Ingresa el ultimo dato: ";
	cin>>u;

	primero->numero=p;
	ultimo->numero=u;
}

int main()
{
	int opciones=0;
	Q fila = NULL;//la fila no tiene nodos.

	do{
		cout<<endl<<"**** Q U E U E ****"<<endl;
		cout<<"1 Push"<<endl<<"2 Pop"<<endl<<"3 Mostrar"<<endl<<
			"4 Mostrar primero y ultimo"<<endl<<
			"5 Modificar ultimo y primero"<<endl<<"0 Salir"<<endl;
		cout<<"Ingresa opcion: ";
		cin>>opciones;

		switch(opciones)
		{
		case 1://Push
			push(fila);
			break;
		case 2:
			pop(fila);
			break;
		case 3:
			mostrar(fila);
			break;
		case 4:
			PyU(fila);
			break;
		case 5:
			modificar(fila);
			break;
		default:
			cout<<"Opcion invalida..."<<endl<<endl;
			break;
		}
	}while(opciones != 0);

	return 0;
}