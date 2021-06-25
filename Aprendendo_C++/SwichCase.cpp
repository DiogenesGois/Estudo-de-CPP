#include <iostream>
#include <locale>

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");
    srand(time(0));
    int aleatorio = 0;

    aleatorio = 1 + rand() % 7;

    switch(aleatorio){
        case 1: 
            cout << "Domingo" << endl;
            break;        
        case 2:
            cout << "Segunda-feira" << endl;
            break;
        case 3:
            cout << "Terça-feira" << endl;
            break;
        case 4:
            cout << "Quarta-feira" << endl;
            break;
        case 5:
            cout << "Quinta-feira" << endl;
            break;
        case 6:
            cout << "Sexta-feira" << endl;
            break;
        default:
            cout << "Sábado" << endl;
            break;
    }





    return 0;
}