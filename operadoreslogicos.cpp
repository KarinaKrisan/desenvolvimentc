#include <iostream>

using namespace std;

int main(){

    float nota1, nota2;
     cout << "Informe a nota 1:";
     cin >> nota1;
     cout << "Informe a nota 2:";
     cin>> nota2;
     float media= (nota1 + nota2)/2;
     cout <<"Media:" << media << endl;
     
     //aluno aprovado
     
     //if (media >= 5){cout << "Aluno Aprovado\n";}

     //aluno reprovado
     
     //else {cout << "Aluno Reprovado\n";}

     //Notas por letra
     //0-2.5 D, 2.5-5 C, 5-7.5 B, 7.5-10 A

     if (media <2.5){cout << "Nota Final: D\n";}
     else if(media <5){ cout << "Nota Final: C\n";}
     else if (media <7.5){ cout << "Nota Final: B\n";}
     else{cout << "Nota Final: A\n";}

     //Operadores Lógicos: E: &&, OU:: ||,  Não: !

     float freq;
     cout << "Qual é a frequencia do aluno?\n";
     cin >> freq;

     //if(media >=5 && freq >=75){cout <<"Aluno Aprovado\n";}
     //else{cout << "Aluno Reprovado\n";}

     //if(media < 5 || freq < 75){ cout << "Aluno Reprovado\n";}
     //else{cout << "Aluno Aprovado\n";}

     //Operador Ternário

     (media >= 5 || freq < 75) ? cout << "Aprovado" : cout << "Reprovado"; 



    return 0;
}