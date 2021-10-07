// Práctica 7.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//


#include <iostream>

using namespace std;

#define tam_max 4

class Cola {

    int inicio, final, cuenta;
    int elems[tam_max];
public:
    Cola() {
        inicio = 0;
        final = 0;
        cuenta = 0;
    }

    bool insertar(int e);
    int eliminar();
    bool empty();
    bool full();



};


bool Cola::insertar(int e) {

    if (full()) {

        return false;
    }

    else {

        elems[final] = e;


        if (final == tam_max - 1) {

            final = 0;

        }
        else {
            final++;

        }
        cuenta++;
        return true;
    }

}

int Cola::eliminar() {

    if (empty()) {
        exit(1);
    }
    else {
        int temp = elems[inicio];



        if (inicio == tam_max - 1) {
            inicio = 0;

        }
        else {
            inicio++;

        }
        cuenta--;


        return temp;
    }

}

bool Cola::empty() {
    if (cuenta == 0) {
        return true;
    }
    else {
        return false;
    }

}

bool Cola::full() {

    if (cuenta == tam_max) {
        return true;
    }
    else {
        return false;
    }

}










int main()
{

    Cola c;
    int op;


    c.insertar(1);
    c.insertar(2);
    c.insertar(3);
    c.insertar(8);
    c.insertar(9);

    c.eliminar();
    c.eliminar();

    do {

        system("cls");

        cout << "\tMENU" << endl;
        cout << "1. Insertar" << endl;
        cout << "2. Eliminar" << endl;
        cout << "3. Mostrar y salir" << endl;
        cout << "Opcion: "; cin >> op;

        switch (op) {
        case 1:
            system("cls");
            int num;
            cout << "Numero a insertar en la cola: ";
            cin >> num;

            c.insertar(num);

            break;
        case 2:
            c.eliminar();


            break;
        case 3:
            system("cls");
            for (int i = 0; i < tam_max; i++) {

                cout << c.eliminar() << endl;
            }

            cout << endl;
            system("pause");

            break;
        default:
            break;
        }
    } while (op != 3);

}


/*IMPRIMIR DENTRO DE LA PILA

for(int i=inicio; i!=final; i++){

    if(i == tam_max){

        i = 0;

    }

    cout << elems[i] << endl;
}


*/


/*c.insertar(7);
c.insertar(8);
c.insertar(6);

c.eliminar();
c.eliminar();

c.insertar(4);
c.insertar(5);
c.insertar(2);
c.insertar(3);
c.insertar(10);

c.eliminar();
c.eliminar();
c.eliminar();

c.insertar(14);
c.insertar(9);

c.eliminar();
c.eliminar();

c.insertar(12);

c.eliminar();

c.insertar(8);
c.insertar(15);*/