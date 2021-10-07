#include <iostream>
using namespace std;
	class Prueba{
		private:
			int Numero;
		public:
			void setNumero(int N){
				if(N<=0){
					cout<<"El numero es negativo o nulo!!";
					return ;
				}
				Numero=N;
			}
			int getNumero(){
				return Numero;
			}
	};
	
	int main(){
		Prueba nom_Objeto;
		nom_Objeto.setNumero(10);
		cout<<"Valor obtenido de la clase "<<nom_Objeto.getNumero();
		return 1;
		
		
	}
