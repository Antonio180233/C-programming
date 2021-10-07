//Actividad 1_Parcial3
//15/10/2020
//180233 - Francisco Antonio Hernández Mena
//182129 - Génesis Erisel Arteaga Rangel

#include <iostream>

using namespace std;
void menu();
char opciones(); //Funcion
void captura_dato(char); //Funcion 
	float n1;
	float n2;

int main()
{
	
    char op;
	do{

	menu();
	op=opciones();
	captura_dato(op);}
    while(op != 'S');
}


void menu() {
	cout << "" << endl;
	cout << " Bienvenidos a CALCULADORA"<< endl;
	cout << "A. Suma" << endl;
	cout << "B. Resta" << endl;
	cout << "C. Multiplicacion" << endl;
    cout << "D. Division" << endl;
	cout << "S. Salir" << endl;
}


char opciones() {
	char op;
	cout << "Opcion: ";
	cin >> op;
 if(op !='S'||'A'||'B'||'C'||'D')
        {
            cout<<"Ingresa una opcion Valida"<<endl; 
            system("cls"); 
        }

	return op;
}


void captura_dato(char op) {


	system("cls");
 switch(op)
        {
           
            case 'A':
            	
            	system("cls");
				cout << "SUMA" << endl;
            	cout << "Ingrese dos numeros" << endl;
            	cout << " " << endl;
            	cout << "Inserte primer numero: " << endl;
            	cin >> n1;
             	cout << "Inserte segundo numero: " << endl;
             	cin >> n2;
	         	cout << "La suma es: " << n1+n2 << endl;
		        break;
           

            case 'B':
                system("cls");
             	cout << "RESTA" << endl;
             	cout << " " << endl;
            	cout << "Inserte primer numero: " << endl;
            	cin >> n1;
             	cout << "Inserte segundo numero: " << endl;
             	cin >> n2;
	         	cout << "La resta es: " << n1-n2 << endl;
        	
            break;

            case 'C':
                system("cls");
              	cout << "MULTIPLICACIÓN" << endl;
              	cout << " " << endl;
            	cout << "Inserte primer numero: " << endl;
            	cin >> n1;
             	cout << "Inserte segundo numero: " << endl;
             	cin >> n2;
		        cout << "La multiplicacion es: " << n1*n2 << endl;
	
               
            break;
            
             case 'D':
            	system("cls");
        
                cout << "DIVISIÓN" << endl;
                cout << " " << endl;
            	cout << "Inserte primer numero: " << endl;
                cin >> n1;
             	cout << "Inserte segundo numero: " << endl;
             	cin >> n2;
             	cout << "La division es: " << n1/n2 << endl;
           	while (n2==0) {
			cout << "Divides por 0. Resultado Indefinido" << endl;
			cout << " " << endl;
			cout << "Vuelve a insertar el segundo numero:" << endl;
			cin >> n2;
		}

            break; 

            case 'S':
            system("cls");
                cout<<"Gracias por usar este Programa "<<endl;
                cout<<"Hasta luego!:) "<<endl;
            break;

           
        }
}
