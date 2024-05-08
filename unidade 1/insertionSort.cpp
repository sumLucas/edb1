#include <iostream>
using namespace std;

void insertionSort(int array[], int tamanho){
    int i, chave, j;
    for (i = 0; i < tamanho; i++) {
        chave = array[i];
        j = i - 1;

        while (j >= 0 && array[j] > chave) {
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1] = chave;
    }
}

void printarray(int array[], int tamanho){
    int i;
    for (i = 0; i < tamanho; i++)
        cout << array[i] << " ";
    cout << endl;
}

int main(){
    int array[] = { 1, 10, -2, 0, 111 };
    int N = sizeof(array) / sizeof(array[0]);

    insertionSort(array, N);
    printarray(array, N);

    return 0;
}
