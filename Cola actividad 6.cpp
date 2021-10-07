#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;


struct nodo
{
	int numero;
	nodo * siguiente;
	nodo * anterior;
};

typedef struct nodo * Q; //Tipo de dato Q = struct nodo *
Q primero, ultimo = NULL; //punteros

void push(Q &fila)
{
	int dato = 0;
	fila = new nodo; //Se estructura el nodo (dato y direccion)
	
	cout<<"Ingresa el dato: ";
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
		cout<<endl<<"El queue esta vacio..."<<endl;
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

//////////////////////////////////

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

void modificarT(Q fila)
{
	int x;
	cout<<endl<<"Ingresa el nuevo numero ";
	cin>>x;
	
	ultimo->numero=x;
}

void modificarPE(Q fila)
{
	int y;
	cout<<endl<<"Ingresa el nuevo numero ";
	cin>>y;
	
	primero->numero=y;
}
void invertircola(Q fila){
	
	if(fila==NULL){
       cout<<"\n Cola Vacia. ";
   }
else{ 
int pri;
   
  pri=primero->numero;
 primero->numero=ultimo->numero;
 ultimo->numero=pri;
 cout<<"Se a invertido el Queue";
}

	
}


void total(Q fila)
{	
	int x=0;
	fila=primero;
	
	if(fila == NULL)
	{
		cout<<"La fila esta vacia...";
		return;
	}
	else
	{
		while(fila != NULL)
		{
			x++;
			fila = fila->siguiente;
		}
		cout<<endl<<endl;
	}
	
	cout<<" El Numero Total De Elementos: "<<x;
}





int main()
{
	int opciones=0;
	Q fila = NULL; //la fila no tiene nodos.

	do{
		cout<<endl<<"**** Q U E U E ****"<<endl;
		cout<<"1 Push"<<endl<<"2 Pop"<<endl<<"3 Mostrar"<<endl<<
			"4 Mostrar primero y ultimo"<<endl<<
			"5 Modificar ultimo y primero"<<endl<<"6. Modificar Tope "<<endl<<
			"7. Modificar Primer Elemento "<<endl<<"8. Invertir Queue "<<endl<<
			"9. Mostrar Total De Elementos"<<endl<<"0 Salir"<<endl;
			 
		cout<<"Ingresa opcion: \n";
		cout<<">>";
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
		case 6:
			modificarT(fila);
			break;		
		case 7:
			modificarPE(fila);
			break;
		case 8:
            invertircola(fila);
			break;
		case 9:
			total(fila);
			break;
		default:
			cout<<"Opcion invalida..."<<endl<<endl;
			break;
		}
	}while(opciones != 0);

	return 0;
}
