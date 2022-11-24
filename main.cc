#include ".\include\Multiplicaciones"
#include <iostream>
using namespace std;

int main(){
    int i;
    while(i!=0){
        double a;
        double b;
        double c;
        double d;
        //Solicitar datos de a,b,c,d
        cout << "Valor a: ";
        cin >>  a;
        cout << "Valor b: ";
        cin >>  b;
        cout << "Valor c: ";
        cin >>  c;
        cout << "Valor d: ";
        cin >>  d;

        double e = mulSums(a,b,c,d);
        double f = mulRes(a,b,c,d);
        double g = mulMuls(a,b,c,d);
        double h = mulDivs(a,b,c,d);

        cout<<"La multiplicacion de (a+b) * (c+d) es: "<<e<<"\n";
        cout<<"La multiplicacion de (a-b) * (c-d) es: "<<f<<"\n";
        cout<<"La multiplicacion de (a*b) * (c*d) es: "<<g<<"\n";
        cout<<"La multiplicacion de (a/b) * (c/d) es: "<<h<<"\n";

        cout << "Quierees salir 0 para Si y 1 para no: ";
        cin >>  i;
    }
}