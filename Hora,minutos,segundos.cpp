#include<iostream>
#include<stdlib.h>
using namespace std;
class Tiempo{
	private:
		int Horas,Minutos,Segundos;
	public:
		Tiempo(int,int,int);//Constructor 1
		Tiempo(int);//Constructor 2
	void MostrarTiempo();
		
		
};
//Constructor 1
Tiempo::Tiempo(int _Horas,int _Minutos,int _Segundos){
	Horas= _Horas;
	Minutos= _Minutos;
	Segundos=_Segundos;
}
//Constructor 2
Tiempo::Tiempo(int timeSegundos){
	Horas=timeSegundos/3600;
	timeSegundos %=3600;
	Minutos=timeSegundos/60;
	Segundos=timeSegundos%60;
}

void Tiempo::MostrarTiempo(){
	cout<<"La hora es: "<<Horas<<":"<<Minutos<<":"<<Segundos<<endl;
}
int main(){
	Tiempo HoraActual(16,23,30);
	HoraActual.MostrarTiempo();
	Tiempo PonerHora(59010);
	PonerHora.MostrarTiempo();
	system ("Pause");
	
}
