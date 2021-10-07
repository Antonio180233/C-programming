#include<stdio.h>;
#include<conio.h>;
#include<iostream>;
using namespace std;

class figuras {
  public:
  float base;
  float altura;

  public:
  float captura();
  virtual unsigned float perimetro()=0;
  virtual unsigned float area()=0;
};

class rectangulo: public figura{
  public:
  void imprime();
  unsigned float perimetro(){return 2*(base+altura);}
  unsigned float area(){return base*altura;}
};

class triangulo: public figura{
  public:
  void muestra();
  unsigned float perimetro(){2*altura+base}
  unsigned float area(){return (base*altura)/2;}
};

void figura::captura(){
    cout<<"CALCULO DEL AREA Y PERIMETRO DE UN TRIANGULO ISOCELES Y UN RECTANGULO:" <<endl;
    cout<<"escribe la altura: ";
    cin>>altura;
    cout>>"escribe la base: ";
    cin>>base;
};
