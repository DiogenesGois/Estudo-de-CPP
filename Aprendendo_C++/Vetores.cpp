//1. Crie um programa capaz de ler os dados de uma matriz quadrada de inteiros. 
//Ao final da leitura o programa dever� imprimir o n�mero da linha que cont�m o menor dentre todos os n�meros lidos.
#include<iostream>


using namespace std;

int main(){ 
   int vetor[5];
   int i = 0;

   vetor[0] = 10;
   vetor[1] = 20;
   vetor[2] = 30;
   vetor[3] = 40;
   vetor[4] = 50;

    for(i = 0; i < sizeof(vetor)/4; i++){  
        cout << vetor[i] << endl;
    }

    return 0;
}