#include <iostream>
 
using namespace std;
 
int buscaBinaria(int array[], int tamanho, int valorUser)
{
    int menor = 0;
    int maior = tamanho - 1;
 
    int meio;
 
    while (menor <= maior){
        meio = (menor + maior) / 2;
 
        if(valorUser == array[meio]){
            return meio;
        }
        else if (valorUser > array[meio]){
            menor = meio + 1;
        }
        else{
            maior = meio - 1;
        }
    } 
    return -1;
}
 
int main(){
    int lista[] = {12, 22, 34, 47, 55, 67, 82, 98};
    int valor;
 
    cout << "Digite um numero inteiro: " << endl;
    cin >> valor;
 
    int resultado = buscaBinaria(lista, 8, valor);
 
    if(resultado >= 0)
    {
        cout << "O numero " << lista[resultado] << " foi encontrado na lista" << endl;
    }
    else
    {
        cout << "O numero " << valor << " nao foi encontrado na lista" << endl;
    }
}