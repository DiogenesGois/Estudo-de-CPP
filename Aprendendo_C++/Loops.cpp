//1)Escrever um programa para exibir os n�meros de 1 at� 50 na tela.
//2)Fazer um programa para encontrar todos os pares entre 1 e 100.
//3)Ler um valor inteiro (aceitar somente valores entre 1 e 10) e escrever a tabuada de 1 a 10 do valor lido.
//4)Leia v�rias idades e calcule a m�dia entre as idades (usar uma vari�vel para idade).
//5)Ler 10 n�meros e imprimir quantos s�o pares e quantos s�o �mpares.

#include<iostream>
#include<locale>

using namespace std;

int main(){
    srand(time(0));

    /*1)
    for(int i = 1; i <= 50; i++){
        cout << i << endl; 
    }*/

    /*2)
    for(int i = 1; i <= 100; i++){
        if(i % 2 == 0)
           cout << i << endl;
    }*/

    /*3)
    int tabuada = 0;

    cout << "Qual a tabuada quepretende visualizar? " << endl;
    cin >> tabuada;

    if(tabuada <= 10 && tabuada > 0){
        for(int i = 1; i <= 10; i++){
            cout << tabuada << " x " << i << " = " << tabuada * i << endl;
        }
    }else{
        cout << "Valor inv�lido" << endl;
    }*/

    /*4)
    int idade =0;
    int media = 0;
    int contador = 0;
    
    do{
        cout << "Insira idade" << endl;
        cin >> idade;

        if(idade > 0){
            media += idade;
            contador++;
        }
    }while(idade != 0);

    cout << "A m�diadas idades e: " << media / contador << endl;*/

    /*5)
    int contador = 0;
    int pares = 0;
    int impares = 0;
    int numero = 0;

    while(contador < 10){
        cout << "Insira um numero" << endl;
        cin >> numero;

        if(numero % 2 == 0){
            pares++;
        }else{
            impares++;
        }
        contador++;
    }

    cout << pares << " numeros pares e " << impares << " numeros impares" << endl;*/


    return 0;
}