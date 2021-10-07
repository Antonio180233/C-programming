#include <iostream>
#include <cmath>

class QEq {
    float a, b, c, d, D;
public:
    void set_values (float, float, float);//Constructor
    float areaplus () {return ((-b/(2*a))+(D/(2*a)));}
    float areaminus () {return ((-b/(2*a))-(D/(2*a)));}
    friend void find_d (QEq &);
};

void QEq::set_values(float A, float B, float C)
{
  
    a=A;
    b=B;
    c=C;

}


void find_d (QEq & obj)//Funcion con referencias de obj
{
    obj.d=(obj.b*obj.b)-(4*obj.a*obj.c);
    obj.D=sqrt(obj.d);
}

int main ()
{
    QEq sett;
    sett.set_values(5, 3, -4);
    find_d(sett);
    std::cout << sett.areaplus() << std::endl;
    std::cout << sett.areaminus() << std::endl;
    return 0;
}
