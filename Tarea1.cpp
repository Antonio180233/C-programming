#include<iostream>
#include<conio.h>
using namespace std;

struct Promedio{
	float calificacion1;
	float calificacion2;
	float calificacion3;
};

struct Alumno{
	char nombre[20];
	char sexo[2];
	int edad;
	struct Promedio prom;
}alumnos[5];

int main(){
	int n_alumnos,posM=0;
	float promedio_alumno[5],mayor=0;
	//DIGITALIZAR A 5 ALUMNOS
	cout<<"Digite el numero de alumnos(1 al 5):";
	cin>>n_alumnos;
	
	for(int i=0;i<n_alumnos;i++){
		fflush(stdin);
	
		cout<<"*** Ingresar los siguientes datos del alumno: *** "<< endl;
		cout<<"Nombre: "; cin.getline(alumnos[i].nombre,20,'\n');
		cout<<"Sexo: "; cin.getline(alumnos[i].sexo,10,'\n');
		cout<<"Edad: "; cin>>alumnos[i].edad;
	
		cout<<"|| Notas del Alumno ||"<<endl;
		cout<<"calificacion 1: "; cin>>alumnos[i].prom.calificacion1;
		cout<<"calificacion 2: "; cin>>alumnos[i].prom.calificacion2;
		cout<<"calificacion 3: "; cin>>alumnos[i].prom.calificacion3;
		if((alumnos[i].prom.calificacion1>10) || (alumnos[i].prom.calificacion2>10) || (alumnos[i].prom.calificacion3>10 )){
			cout<<"Calificaciones invalidas "<<endl;
			cout<<"Intente de nuevo con las calificaciones validas de 0 a 10"<<endl;
			cout<<"calificacion 1: "; cin>>alumnos[i].prom.calificacion1;
		    cout<<"calificacion 2: "; cin>>alumnos[i].prom.calificacion2;
		    cout<<"calificacion 3: "; cin>>alumnos[i].prom.calificacion3;
		} else if((alumnos[i].prom.calificacion1<0) || (alumnos[i].prom.calificacion2<0) || (alumnos[i].prom.calificacion3<0 )){
			cout<<"Calificaciones invalidas "<<endl;
			cout<<"Intente de nuevo con las calificaciones validas de 0 a 10"<<endl;
			cout<<"calificacion 1: "; cin>>alumnos[i].prom.calificacion1;
		    cout<<"calificacion 2: "; cin>>alumnos[i].prom.calificacion2;
		    cout<<"calificacion 3: "; cin>>alumnos[i].prom.calificacion3;
		} 
		
	
		//Sacando el promedio del alumno
		promedio_alumno[i] = (alumnos[i].prom.calificacion1+alumnos[i].prom.calificacion2+alumnos[i].prom.calificacion3)/3;
		
		cout<<"Promedio: "<<promedio_alumno[i];
		
		if(promedio_alumno[i] > mayor){
			mayor = promedio_alumno[i];
			posM = i;
		}
		cout<<"\n";
	}
	
	cout<<"\n ||| Datos del alumno con mejor Promedio |||"<<endl;
	cout<<"Nombre: "<<alumnos[posM].nombre<<endl;
	cout<<"Sexo: "<<alumnos[posM].sexo<<endl;
	cout<<"Edad: "<<alumnos[posM].edad<<endl;
	cout<<"Promedio: "<<promedio_alumno[posM];
		
	getch();
	return 0;
}
