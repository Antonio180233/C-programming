#include <iostream>
using namespace std;
class Rectangulo
{
private:
    double largo;
    double ancho;
public:
    Rectangulo(double, double);
    Rectangulo();
    void asignarDatos(double, double);
    void asignarAncho(double);
    void asignarLargo(double);
    double area();
    double perimetro();
    void mostrarDatos();
    double obtenerAncho();
    double obtenerLargo();

};
Rectangulo::Rectangulo(double a, double b)
{
    ancho=a;
    largo=b;
}
Rectangulo::Rectangulo()
{
    ancho=0;
    largo=0;
}
void Rectangulo::asignarDatos(double a, double b)
{
    ancho=a;
    largo=b;
}
void Rectangulo::asignarAncho(double a)
{
    ancho=a;
}
void Rectangulo::asignarLargo(double b)
{
    largo=b;
}
double Rectangulo::obtenerAncho()
{
    return ancho;
}
double Rectangulo::obtenerLargo()
{
    return largo;
}
double Rectangulo::area()
{
    return ancho*largo;
}
double Rectangulo::perimetro()
{
    return 2*(ancho+largo);
}
void Rectangulo::mostrarDatos()
{
    cout<<"Datos del Rectangulo\n\n";
    cout<<"Area = "<<area()<<endl;
    cout<<"Perimetro = "<<perimetro()<<endl;
}
int main()
{
    Rectangulo r1(0,0),r2;
    double a1,l1;
    cout<<"Rectangulo con datos inicializados\n\n";
    r1.mostrarDatos();
    cout<<"\n\n datos del rectangulo introducidos por teclado\n\n";
    cout<<"\n\nIntroduce valor ancho de un rectangulo : ? ";
    cin>>a1;
    cout<<"\nintroduce valor largo de un rectangulo : ? ";
    cin>>l1;
    r2.asignarAncho(a1);
    r2.asignarLargo(l1);
    r2.mostrarDatos();
    return 0;
}
