#include<iostream>
using namespace std;

class valor{
public: //si puede ser vista en main a diferencia de private pero debe ser private y luego las siguiendes una set y la otra get
	int i;
};
 
int main(){//Lleva el flujo del programa
valor nom_objeto;
nom_objeto.i=90;
cout<<nom_objeto.i;

return 1;
}

