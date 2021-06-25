//############# Sobrecarga de Funções #############//

#include<iostream>

using namespace std;

void soma(){
    int n1 = 10;
    int n2 = 20;
    int res = n1 + n2;

    cout << "Soma de " << n1 << " com " << n2 << " = " << res << endl;
}

void soma(int n1, int n2){
    int res = n1 + n2;
    cout << "Soma de " << n1 << " com " << n2 << " = " << res << endl;
}


int main(){

    soma();

    soma(15, 30);


    return 0;
}