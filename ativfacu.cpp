#include <iostream>
#include <math.h>
using namespace std;

float velocidade (float distancia, int tempo);
float esfera (float raio);
float cilindro (float raio, float altura);
float caixa (float comprimento, float largura, float altura);
void manipulacao_numeros (int num, int num1);
float conversao_f (float celsius);
float conversao_c (float fahrenheit);
float milhas (float quilometros);
float quilometros (float milhas);
float pes (float metros);
float metros (float pes);




int main()
{
 //manipulacao_numeros(5, 4);
 //cout << conversao_f (30.1);
 //cout << conversao_c (86.18);
 //cout << milhas (156);
 //cout << quilometros (96.9339);
 //cout << pes (134);
 //cout << metros (40.8432);
}

float velocidade (float distancia, int tempo)
{
 return (distancia * 1000) / (tempo * 60);
}

float esfera (float raio)
{
 return (4.0/3.0) * 3.1415 * pow(raio, 3);
}

float cilindro (float raio, float altura)
{
 return 3.1415 * pow(raio, 2) * altura;
}

float caixa (float comprimento, float largura, float altura)
{
 return comprimento * largura * altura;
}

void manipulacao_numeros (int num, int num1)
{
 cout<< "\nAntecessor " << num - 1;
 cout<< "\nSucecessor " << num + 1;
 cout<< "\nDobrado " << num * 2;
 cout<< "\nMultiplicado por 3.25 = " << num * 3.25;
 cout<< "\nMultiplicado por -1.36 = " << num * -1.36;
 cout<< "\nSoma " << num + num1;
 cout<< "\nSubtração " << num - num1;
 cout<< "\nDivisão " << num / num1;
 cout<< "\nMultiplicação " << num * num1 << "\n";
}

float conversao_f ( float celsius)
{
 return (9 * celsius + 160) /5;
}

float conversao_c (float fahrenheit)
{
 return (fahrenheit - 32) * (5.0/9.0);
}

float milhas (float quilometros)
{
 return (quilometros * 0.621371);
}

float quilometros ( float milhas)
{
 return (milhas * 1.60934);
}

float pes (float metros)
{
 return (metros * 0.3048);
}

float metros (float pes)
{
 return (pes * 3.28084);
}