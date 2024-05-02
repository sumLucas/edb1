#include <iostream>

using namespace std;

int buscaBinariaRecursiva(int array[], int menor, int maior, int valorUser) {
    if (maior >= menor) {
        int meio = menor + (maior - menor) / 2;

        if (array[meio] == valorUser)
            return meio;

        if (array[meio] > valorUser)
            return buscaBinariaRecursiva(array, menor, meio - 1, valorUser);

        return buscaBinariaRecursiva(array, meio + 1, maior, valorUser);
    }

    return -1;
}

int main() {
    int array[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int tamanho = sizeof(array) / sizeof(array[0]);
    int valor;

    cout << "Digite um valor Inteiro" << endl;
    cin >> valor;

    
    int indice = buscaBinariaRecursiva(array, 0, tamanho - 1, valor);

    if (indice != -1)
        cout << "Elemento encontrado na posição " << indice << endl;
    else
        cout << "Elemento não encontrado" << endl;
    return 0;
}
