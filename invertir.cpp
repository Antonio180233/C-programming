#include "pila.h"
#include "cola.h"
#include <stdlib.h>

int pila_invertir(pila_t* pila) {
    cola_t* cola = cola_crear();
    if (!cola) {
        return -1;
    }
    while (!pila_esta_vacia(pila)) {
        cola_encolar(cola, pila_desapilar(pila));
    }

    while (!cola_esta_vacia(cola)) {
        pila_apilar(pila, cola_desencolar(cola));
    }

    cola_destruir(cola, NULL);
    return 0;
}


int main() {
    int data[3] = {1,2,3};
    pila_t* pila = pila_crear();
    for (int i=0; i<3; i++) {
        pila_apilar(pila, (void*) &data[i]);
    }
    pila_imprimir(pila);
    pila_invertir(pila); 
    pila_imprimir(pila); 
    return 0;
} 
