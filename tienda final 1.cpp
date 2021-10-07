#include<iostream>
#include<windows.h>
//Actividad 2_Parcial3
//10/23/2020
//180233_FranciscoAntonioHernándezMena
//182129_GénesisEriselArteagaRangel
using namespace std;


double capital_user, carrito=0;


int no_va_a_pagar()
{
    system("cls");
    char a='x';
    if(capital_user<carrito) return 1;
    while(a!='y'&&a!='Y'&&a!='n'&&a!='N'){
            system("cls");
    cout<<"La cantidad de dinero con la que quiere pagar el cliente no es suficiente para pagar su cuenta\n";
    cout<<"Desea el cliente comprar? (Y/N)";
    cin>>a;
    }
    switch(a)
    {
        case 'y':return 0;break;
        case 'Y':return 0;break;
        default: return 1;break;
    }

}

void recibo()
{
    system("cls");
    if(capital_user>=carrito&&carrito!=0){
    cout<<"El Dinero pagado es: "<<capital_user<<"\n";
    cout<<"El cambio es de: "<<capital_user-carrito;
    system("pause>null");}
}

int pagado()
{
    system("cls");
    if(carrito==0)return 0;
 cout<<"El total a pagar es de: "<<carrito;
 cout<<"Introduzca el dinero del cliente: ";
 cin>>capital_user;
 if(capital_user<carrito)return 0;
 return 1;
}

void contadora(int producto, int cuantas)
{
    switch(producto)
    {
        case 1:carrito=carrito+(15*cuantas);break;
        case 2:carrito=carrito+(14*cuantas); break;
        case 3:carrito=carrito+(13*cuantas); break;
        case 4:carrito=carrito+(15*cuantas); break;
        case 5:carrito=carrito+(23*cuantas); break;
        case 6:carrito=carrito+(27*cuantas); break;
        case 7:carrito=carrito+(5*cuantas); break;
        case 8:carrito=carrito+(25*cuantas); break;
        case 9:carrito=carrito+(10*cuantas); break;
        case 10:carrito=carrito+(15*cuantas); break;
        case 11:carrito=carrito+(40*cuantas); break;
        case 12:carrito=carrito+(80*cuantas); break;
        case 13:carrito=carrito+(50*cuantas); break;
        case 14:carrito=carrito+(163*cuantas); break;

    }
}

int productos()
{
    int x=0;
    int y;
    while(x<1||x>15)
    {
system("cls");
    cout<<"Menu de Productos:\n";
    cout<<"GASEOSAS: \n\n ";
    cout<<"1. Pepsi: $15 ";
    cout<<"2. Manzana: $14 ";
    cout<<"3. Uva: $13 ";
    cout<<"4. Limonada: $15 ";
    cout<<"5. Naranjada: $23 ";
    cout<<"6. Cocacola: $27 ";
    cout<<"VERDURAS: \n\n ";
    cout<<"7. Cebolla: $5 ";
    cout<<"8. Tomate: $25";
    cout<<"9. Cilantro: $10 ";
    cout<<"FRUTAS: \n\n ";
    cout<<"10. Manzana: $15 ";
    cout<<"11. Pera: $40 ";
    cout<<"CARNES: \n\n ";
    cout<<"12. Res: $80 ";
    cout<<"13. Pollo: $50 ";
    cout<<"14. T-Bone: $163";
    cout<<"Para terminar la compra escriba 15";
    cout<<"Seleccine: ";

    cin>>x;

    if(x>0&&x<15){cout<<" Cantidad: ";
    cin>>y;}
    }
    contadora(x,y);
    return x;


}


char menu_principal()
{
    char a='q';
    while(a!='1'&&a!='2')
    {
    system("cls");


    cout<<"Menu Principal:\n\n\n";
    cout<<"Seleccione una de las siguientes opciones: \n";
    cout<<"1. Nueva cuanta\n";
    cout<<"2. Salir\n";
    cout<<"Digite una opcion: ";
    cin>> a;

    }
    return a;

}

/**FUNCION PRINCIPAL**/

int main()
{
    while(menu_principal()!='2')
    {
        carrito=0;
        capital_user=0;
        while(productos()!=15)
        {

        }
        while(!pagado()&&!no_va_a_pagar())
        {

        }
        recibo();

    }
    return 0;
}
