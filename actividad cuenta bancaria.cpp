#include<iostream>
#include<stdlib.h>

int D;
using namespace std;

class Cuenta{
	private:
	string Titular;
	int C;
	public://Encapsulamiento de metodos es publico
	Cuenta(string,int); //Constructor parametrisado 
	void ingresar();
	void retirar();
	void pedirsaldo();
		
};

//Constructor
Cuenta::Cuenta(string _Titular,int _C){

	Titular= _Titular;
	C=_C;
}

void Cuenta::ingresar(){
	int C1=0;
	cout<<"Titular: "<<Titular<<endl;
	C=D;
	cout<<"Saldo actual: "<<C<<" Pesos"<<endl;
	cout<<"Ingrese cantidad para depositar a su cuenta:"; 
	cin >> C1;
    C=C+C1;
    D=C;
    cout<<"Su saldo actualizado es: "<<C<<" pesos"<<endl;
    cout<<"\n"<<endl;
   
}

void Cuenta::pedirsaldo(){
	
	cout<<"Titular: "<<Titular<<" Su saldo es:"<<endl;
	cout<<D<<" Pesos"<<endl;
	cout<<"\n"<<endl;
		
}

void Cuenta::retirar(){
	cout<<"******************************************************************************";
    int	C1=0;
    C=D;
    cout<<"Titular: "<<Titular<<endl;
    cout<<"Saldo actual: "<<C<<" Pesos"<<endl;
    cout<<"¿Cuanto dinero desea retirar?: "<<endl;
    cin>>C1;
    if(C1>D){
    		cout<<"Ingrese una cantidad valida"<<endl;
    	     	 cin>>C1;
    
    		}
    	     if(C1<0){
    	     	cout<<"Ingrese una cantidad valida!!"<<endl;
    	     	 cin>>C1;
			 } else{
			 		C=C-C1;
			 }
			
   D=C;
   cout<<"Nuevo saldo: " <<C<<endl;
   cout<<"************************************************************************************";
   cout<<"\n"<<endl;
   
   }
   
int main(){
	int o,a,op;
	string T;
	cout<<"BIENVENIDO A SU BANCO ANTOMEX"<<endl;
	cout<<"Ingrese el nombre del titular de la cuenta: "<<endl;
	cin>>T;
	cout<<"Con cuanto dinero desea abrir su cuenta?: "<<endl;
	cin>>D;
	do{
		
		system("Cls");
		cout<<"Menu de opciones para cuenta bancaria"<<endl;
		cout<<"1- Depositar dinero"<<endl;
		cout<<"2- retirar efectivo"<<endl;
		cout<<"3- consulta de saldo"<<endl;
			Cuenta CC(T,D);
		cout<<"Ingrese la opcion deseada: "<<endl;
	
		cin>>o;
		switch(o) 
{
    case 1: cout<<"Depositar";
          CC.ingresar();
    break; 
    case 2: cout<<"Retirar";
            CC.retirar();
    break;
    
    case 3: cout<<"Saldo";
            CC.pedirsaldo();
    break;
    
  }
	cout<<"Si desea realizar otra operacion , ingrese otro numero, distinto a 0"<<endl;
	cin>>op;
		cout<<endl;
		
} while(op!=0);
system("pause");
}
