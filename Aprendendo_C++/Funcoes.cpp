//############# Fun��es #############//

#include <iostream>

using namespace std;

//Fun��o sem par�metros e sem retorno
void texto(){
    cout << "Ola, mundo" << endl;
}

//Fun��o com par�metros e sem retorno
void soma(int x, int y){
    cout << x + y;
}

//Fun��o com par�metros e retorno
int soma2(int x, int y){
    return x + y;
}

//Fun��o com vetor
void tra(string tra[4]){
    for(int i = 0; i < 4; i++){
        cout << tra[i] << endl;
    }
}

int main(){
    int res = 0;
    string transp[4] = {"carro", "moto", "barco", "aviao"};

    for(int i = 0; i < 10; i++){
        texto();
    }

    soma(10, 5);
    
    res = soma2(3, 7);
    cout << endl << res << endl;

    tra(transp);
  

    return 0;
}