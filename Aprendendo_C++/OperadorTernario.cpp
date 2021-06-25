#include <iostream>

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");
    double preco = 0;
    double macas = 0;


    cout << "Quantas macas deseja?" << endl;
    cin >> macas;

    preco = (macas < 12) ? (macas * 0.3) : (macas * 0.1);



    cout << "Preco: " << preco << endl;

    return 0;
}

