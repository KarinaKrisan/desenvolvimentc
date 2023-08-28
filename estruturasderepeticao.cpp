#include <iostream>

using namespace std;

int main(){

int n;
cout << "Digite um numero inteiro nao negativo\n";
cin >> n;

int soma = 0;
int cont = 1;
//while(cont <= n){ soma+=cont; cont++;}


//do{soma+=cont; cont++;}
//while(cont <= n);

for(int j=1; j<=n; j+=1){soma+=j;}

cout << "Soma dos numeros de 0 até" << n << "=" << soma << endl;

//break

    return 0;
}