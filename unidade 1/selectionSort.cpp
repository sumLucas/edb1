#include <iostream>

using namespace std;

int pedirListaNumeros(int listaNumeros[], int& tamanhoLista) {
  cout << "Digite o tamanho da lista de números: " << endl;
  cin >> tamanhoLista;

  for (int i = 0; i < tamanhoLista; i++) {
    cout << "Digite o número " << i + 1 << endl;
    cin >> listaNumeros[i];
  }

  return 0;
}

void selectionSort(int listaNumeros[], int tamanhoLista) {
  for (int i = 0; i < tamanhoLista - 1; i++) {
    int indiceMenor = i;

    for (int j = i + 1; j < tamanhoLista; j++) {
      if (listaNumeros[j] < listaNumeros[indiceMenor]) {
        indiceMenor = j;
      }
    }

    swap(listaNumeros[i], listaNumeros[indiceMenor]);
  }
}

int buscaBinaria(int listaNumeros[], int tamanhoLista, int valorUser) {
  int inicio = 0;
  int fim = tamanhoLista - 1;

  while (inicio <= fim) {
    int meio = inicio + (fim - inicio) / 2;

    if (listaNumeros[meio] == valorUser) {
      return meio;
    } else if (listaNumeros[meio] < valorUser) {
      inicio = meio + 1;
    } else {
      fim = meio - 1;
    }
  }

  return -1;
}

int main() {
  int listaNumeros[100];
  int tamanhoLista = 0;

  int resultadoLista = pedirListaNumeros(listaNumeros, tamanhoLista);

  cout << "Lista original: " <<endl;
  for (int i = 0; i < tamanhoLista; i++) {
    cout << listaNumeros[i] <<endl;
  }

  selectionSort(listaNumeros, tamanhoLista);

  cout << "Lista ordenada (Selection Sort): " <<endl;
  for (int i = 0; i < tamanhoLista; i++) {
    cout << listaNumeros[i] <<endl;
  }

  int valorUserBuscado;
  cout << "Digite o valor que deseja buscar: " <<endl;
  cin >> valorUserBuscado;

  int indice = buscaBinaria(listaNumeros, tamanhoLista, valorUserBuscado);

  if (indice != -1) {
    cout << "O valor " << valorUserBuscado << " foi encontrado na posição " << indice + 1 <<endl;
  } else {
    cout << "O valor " << valorUserBuscado << " não foi encontrado na lista." <<endl;
  }

  return 0;
}

