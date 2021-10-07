#include <iostream>

using namespace std;

/*Estructura nodo*/
struct nodo {//Se crea una estructura con el nombre nodo con dos componentes
	int numero;//Almacena un dato numerico en el nodo que tenemos
	struct nodo* sig;//Almacena la direccion de memoria del nodo continuo
};

typedef nodo* P;//Define un tipo de dato estructura nodo

void mostrar_pila(P p)//Al no haber manipulacion directa de la pila, no es necesario hacer referencia
{
	P aux;//Creo un auxiliar es de tipo nodo *P
	aux = p;//se iguala la ultima direccion que apunta la pila al auxiliar

	while (aux != NULL)//Mientras el puntero auxiliar no apunte a nulo
	{
		cout << endl << aux->numero << endl; //Se imprime el numero que hay en cada nodo
		aux = aux->sig;
	}
}

void push(P& p, int n)
{
	P aux;
	aux = new nodo;//Creamos y apuntamos a un nuevo nodo
	aux->numero = n;//Se asigna el número ingresado de teclado
	aux->sig = p; //el siguiente elemento se apunta al anterior creado
	p = aux;//Asignación del nodo creado a la pila original
}

int pop(P& p)//Habrá manipulacion a la pila, por lo que tiene que mandar la referencia
{
	int num;
	P aux;

	aux = p;//Se le asigna direccion de la pila a un puntero auxiliar
	num = aux->numero; //El numero dentro del nodo se almacena a una variable entera

	p = aux->sig; //Se la direccion del ultimo nodo se cambia al nodo anterior
	//desvinculando el nodo a eliminar
	delete(aux); //Se elimina el ultimo nodo creado

	return num; //Se regresa el numero del nodo eliminado para su impresión
}

void destruir_pila(P& p)
{
	P aux;
	while (p != NULL)
	{
		aux = p;
		p = aux->sig;
		delete(aux);
	}

	cout << endl << "Pila borrada..." << endl;
}

int mostrar_cantidad(P p)
{
	P aux;
	int total = 0;


	aux = p;
	while (aux != NULL)
	{
		total++;

		aux = aux->sig;
	}
	return total;

}

int tope_pila(P p)
{
	int num;

	num = p->numero;
	return num;

}

int ultimo_pila(P p)
{

	P aux;
	int z = 0;
	P pen = p;


	aux = p;
	while (aux != NULL)
	{
		pen = aux;

		aux = aux->sig;
	}
	return pen->numero;

}
int main()
{
	P pila = NULL;//Iniciando la pila en Nulo
	int dato = 0, opc = 0, x;

	do {
		cout << "***MENU PILAS*** " << endl << endl <<
			"1-Apilar (Push)" << endl <<
			"2-Desapilar (Pop)" << endl <<
			"3-Mostrar pila" << endl <<
			"4-Ultimo numero de la pila" << endl <<
			"5-Tope de la pila" << endl <<
			"6-Borrar pila" << endl <<
			"7-Mostrar la cantidad de nodos" << endl <<
			"8 Salir" << endl;
		cout << endl << "Ingrese una opcion:";
		cin >> opc;

		switch (opc)
		{
		case 1:
			cout << endl << "Ingresa numero: ";
			cin >> dato;
			push(pila, dato);
			system("pause");
			break;
			
		case 2:
			x = pop(pila);
			cout << endl << "Se elimina el nodo con el numero" << x;
			system("pause");
			break;
			
		case 3:
			if (pila != NULL)
				mostrar_pila(pila);
			else
			cout << endl << "Pila vacia..." << endl;
			system("pause");
			break;
			
		case 4:
			cout << ultimo_pila(pila) << endl;
			system("pause");
			break;
			
		
		case 5:
            cout << tope_pila(pila) << endl;
			system("pause");
			break;
		
		case 6:
			destruir_pila(pila);
			system("pause");
			break;
			
		case 7:
			cout << mostrar_cantidad(pila) << endl;
			system("pause");
			break;
		
		default:
			cout << endl << "ERROR 001";
			cout << endl << "Ingrese una opcion valida o digite 8 para salir de la pila";
			break;
		}

	} while (opc != 7);

	return 0;
}
