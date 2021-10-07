   #include <iostream>
#include<locale.h>
#include <stdlib.h>
#include <time.h>       /* time */
#include <stdio.h>
using namespace std;
class programa{
        private:
	 int i,j,x,y,f,c,mayor,res,**matriz,h,k,**transpuesta;
     	public:
		 programa();
		~programa();
		int entrada();
		void proceso();
		void salida();			
};
programa::programa(){
	 x=y=i=j=f=c=mayor=res=0;
     cout<<"Matriz 4x3 "<<endl;
     f=4;
     cout<<"Las filas son:"<<f<<endl;
     
     c=3;
    cout<<"Las columnas son: "<<c <<endl;
	 matriz=new int *[f];
	transpuesta=new int *[f];
	for( int i=0; i<f; i++ ){
  matriz[i] = new int[c];
  transpuesta[i] = new int[c];
}
}
programa::~programa(){
	cout<<"liberando memoria...\n";
	for( int i=0; i<f; i++ ){
  delete[] matriz[i];
delete[] matriz;
 
delete[] transpuesta[i];
delete[] transpuesta;
}
}
int programa::entrada(){
 for( i=0; i<f; i++)
    {
        for( j=0; j<c; j++)
        {
            
             matriz[i][j]=rand()%50;
        }
    }
	cout<<" matriz original: "<<endl;
    for( i=0; i<f; i++)
    {
        for( j=0; j<c; j++)
        {
            cout<<"[ "<<matriz[i][j]<<" ]";
        }
        cout<<endl;
    }          
}
void programa::proceso(){
for( i=0; i<f; i++)
     {
        for( j=0; j<c; j++)
        {
        	transpuesta[i][j]=matriz[i][j];
 
         }
    }
}
 
void programa::salida(){
cout<<" matriz transpuesta: "<<endl;
int multiplicar;
cout<<"Ingrese un numero a multiplicar la matriz transpuesta:  ";
     cin >>multiplicar;
    for( i=0; i<c; i++)
    { 
        for( j=0; j<f; j++)
        {
   
            cout<<"[ "<<multiplicar*transpuesta[j][i]<<"]";
        }
        cout<<endl;
    }
}
int main(){
	programa t;
	t.entrada();
	t.proceso();
	t.salida();
 
	system("pause");
	return 0;
} 
