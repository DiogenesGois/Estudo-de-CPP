//############# Omissão de argumentos #############//

#include <iostream>

using namespace std;

void imp(string txt = "Diogenes"){
    cout << txt << endl;
}


int main(){

    imp();

    return 0;
} 