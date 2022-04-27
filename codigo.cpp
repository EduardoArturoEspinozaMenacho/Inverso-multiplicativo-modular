#include <iostream>
using namespace std;
int inverso_multiplicativo(int a,int b){
    int r=1;
  int q;
  int x0=1,y0=0;
  int x1=0,y1=1;
  int auxx,auxy;
  int auxa=a,auxb=b;
  while(r!=0){
    auxx=x1;auxy=y1;
    q=auxa/auxb;
    r=auxa%auxb;
    x1=x0-(q*x1);y1=y0-(q*y1);
    x0=auxx;y0=auxy;
    auxa=auxb;
    auxb=r;
  }
  if(auxa!=1){
    cout<<"No existe el inverso multiplicativo de los valores ingresados, ya que el mcd de los mismos es ";
   return auxa;
  }
  else{
    cout<<"El inverso multiplicativo de "<<a<<" es ";
return x0;}
}

int main() {
int a,n; 
cout<<"Ingrese el primer valor: "<<"\n";
cin>>a;cout<<endl;
cout<<"Ingrese el segundo valor: "<<"\n";  
cin>>n;cout<<endl;
while(n<=0){
cout<<"Valor no aceptado, ingreselo nuevamente: "<<"\n";
 cin>>n;cout<<endl;
}
cout<<inverso_multiplicativo(a,n);  
}
