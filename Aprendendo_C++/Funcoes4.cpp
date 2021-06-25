//############# Funções recursivas #############//

#include <iostream>

using namespace std;

//void contador(int num);
/*void contador(int num, int cont = 0);


int main(){

    contador(20);

    return 0;
}

void contador(int num, int cont){
    cout << cont << endl;
    if(num > cont){
        contador(num, ++cont);
    }
}

/*void contador(int num){
    for(int i = 0; i <= num; i++){
        cout << i << endl;
    }
}*/

//############# Exercício Fibonacci #############//

int fibonacci(int mes);

int main(){
    int mes = 0;
    
    cout << "Insira o numero de meses" << endl;
    cin >> mes;

    cout << fibonacci(mes);
    

    return 0;
}


int fibonacci(int mes){
    if(mes == 0 || mes == 1){
        return mes;
    }else{
        return fibonacci(mes - 1) + fibonacci(mes-2);
    }
        
    
}


