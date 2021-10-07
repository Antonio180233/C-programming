#include<iostream>
using namespace std;
int main(){
	int cantip;
	int i;
	float numh;
	float numm;
	float promh;
	float promm;
	float t;
	float tot;
	numh = 0;
	numm = 0;
	cout << "Bienvenidos a tuercamundo" << endl;
	cout << "Introduce la cantidad de tuercas a medir: ";
	cin>>cantip;
	cout<<"Introduce las medidas de las tuercas";
	for (i=1;i<=cantip;i++){
		cout << "medida " << i << " : ";
		cin >> t;
		if(t>=1.2 && t<=1.5){
		numm++;
		}else{numh++;
		}
		
}cout<<"Las tuercas dentro de la medida son"<<promm<<endl;
		cout<<"Las tuercas que no estan en la medida son"<<promh<<endl;
return 0;
}
