#include <iostream>
#include <string>

using namespace std;

int main()
{
	/*PUNTEROS ARREGLOS*/
	
	int *p;//puntero
	int variable;
	variable = 3;
	
	p = &variable; //p = direccion de memoria de la variable = 0x123AFD
	*p = variable; //*p = dato de la variable = 3
	cout<<*p<<endl;

	/* 0x123AFD => 3 */
	/* p => 0x123AFD => 3 */
	
	//Iniciamos los punteros
	string *nombre = NULL;
	string *apellido = NULL;
	int tam;
	/*
	cout<<"Cuantos nombres se van a ingresar: ";
	cin>>tam;
	while(getchar() != '\n');
	/*
		string nombre[2];
		char apellido[2][10];
	*/
	/*
	nombre = new string[tam];
	apellido = new string[tam];
	
	cout<<endl<<"Ingrese la siguiente informacion: "<<endl;
	for(int i = 0; i < tam; i++)
	{
		cout<<"Ingresa nombre: ";
		getline(cin,nombre[i]);//cin<<nombre[i];
		cout<<"Ingresa apellido: ";
		getline(cin,apellido[i]);
	}
	
	cout<<"Los nombres ingresados son: "<<endl;
	for(int i=0; i<tam; i++)
	{
		cout<<nombre[i]<<" "<<apellido[i]<<endl;
	}
	
	delete [] nombre;
	delete [] apellido;
	
	nombre=NULL;
	apellido=NULL;*/
	
	/*ARREGLO CON PUNTERO*/
	int A[3]={2,5,3};
	int *ptr;
	
	ptr = &A[3];
	
	for(int i=0; i<3; i++)
	{
		cout<<A[i]<<" ";
		cout<<ptr[i]<<" ";
	}
	cout<<&A[3]<<endl;
	/*for(int i=0; i<3; i++)
	{
		cout<<ptr[i]<<" ";
	}*/
	
	return 0;
}

/*

CALCULADORA CON FUNCIONES

Suma, Resta,Mult, Divi... -> Esten en una funcion propia

funcion sencilla, con argumento y con return. -> Prototipo

Un ciclo para repetir las operaciones

Opcional -> Usar un puntero

*/

