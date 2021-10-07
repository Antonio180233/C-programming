#include "iostream"
#include "conio.h"
using namespace std;
 int main()
  {
  int mat[100] [100];
  int n,i,j,f1,f2,aux;
  int f,c;
  
//Lleno la matriz
     cout << "||| Matriz Permutada |||\n";
     cout<<"\nIntroducir dimension de la Fila:\n";
     cout << ">>";
      cin>>f;
     cout<<"\nIntroducir  dimension de la Columna:\n";
     cout << ">>";
      cin>>c;
     cout<<endl;
     
 cout<<"\n Intercambia Valores entre las filas i y j \n";
  for (i=1;i<=f;i++)
  {
   for (j=1;j<=c;j++)
   {
    do
 {
   cout<<"\t Valor en la posicion ("<<i<<" , "<<j<<") \t";
  cin>>mat[i][j];
 }
 while(mat[i][j]<0);
   }
  }
   // IMPRIME MATRIZ
cout<<"\n La matriz es: \n";
for (i=1;i<=f;i++)
 {
 cout<<"\n \t \t \t";
   for (j=1;j<=c;j++)
   {
        cout<<mat[i][j]<<"\t";
   }
}
cout<<" \nPara Intercambiar las filas\n";
cout<<" \n Ingrese el numero de la 1ra. fila: ";cin>>f1;
cout<<" \n Ingrese el numero de la 2da. fila: ";cin>>f2;


//Intercambiando
  for (j=1;j<=c;j++)
   {     aux=mat[f1][j];
  mat[f1][j]=mat[f2][j];
  mat[f2][j]=aux;
   };


//La nueva matriz
 for (i=1;i<=f;i++)
 {
  cout<<"\n \t \t \t";
   for (j=1;j<=c;j++)
   {
 cout<<mat[i][j];
 cout<<"\t";

   }
 } 

 getch();

 }
