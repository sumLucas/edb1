#include <iostream>

using namespace std;

int busca(int array[], int tamanho, int buscarValor){
    for (int i = 0; i < tamanho; i++){
        if (buscarValor == array[i]){
            return i;
        }
    }
    return -1;
}

int main(){
    int a[] = {12, 11, 15, 21, 81, 16};
    int valor;
    cout << "Digite um valor inteiro: " << endl;
    cin >> valor;

    int resultado = busca(a, 6, valor);

    if (resultado >= 0 ){
        cout << "O numero: " << a[resultado] << " ta na lista" << endl;
    }else{
        cout << "O numéro: " << valor << " nao ta na lista" << endl;
    }



    return 0;
}