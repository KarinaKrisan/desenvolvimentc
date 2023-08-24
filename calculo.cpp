#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a=5, b=2;
    int soma = a+b;
    cout << "Soma:" << soma << endl; 

    int c=1800, d=20500;
    int subtracao = c-d;
    cout << "Subtracao:" << subtracao << endl;

    int e=20, f=40;
    int multiplicacao = e*f;
    cout << "Multiplicacao:" << multiplicacao << endl;

    int g=10, h=5;
    int divisao = g/h;
    cout << "Divisao:" << divisao << endl;
    
    float p=596, u=562;
    float div = (float)p / (float) u;
    cout << "Divisao:" << div << endl; 

    
    float pot = pow(a,b);
    cout << "Potencia:" << pot << endl; 

    //Incremento e Decremento
    
       
    cout << "a antigo:" << a << endl;
    //a++; //incremento
    //a--; //decremento
    a*=9;
    cout << "a novo:" << a << endl;
    

    return 0; 
}