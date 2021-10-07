#include <iostream>
//Francisco Antonio hernandez Mena, 180233 Programacion I
using namespace std;
int main(){
	int cantip;
	int i;
	float numh;
	float numm;
	float promh;
	float promm;
	float t;

	numh = 0;
	numm = 0;
	cout << "Bienvenidos a tuercamundo" << endl;
	cout << "Introduce la cantidad de tuercas a medir: "<<endl;
	cin>>cantip;
	cout<<"Introduce las medidas de las tuercas"<<endl;
	for (i=1;i<=cantip;i++){
		cout << "medida " << i << " : "<<endl;
		cin >> t;
		if(t>=1.2 && t<=1.5){
		promm=numm++;
		}
		else{promh=numh++;
		}
	
	}
		cout<<"tuercas que se encuentran entre 1.2 y 1.5: "<< numm <<endl;
	    cout<<"tuercas que no se encuentran entre 1.2 y 1.5: "<< numh <<endl;
	return 0;
}
