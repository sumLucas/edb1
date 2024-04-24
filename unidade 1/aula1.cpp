#include <iostream>
#include <string>

// Definindo a estrutura para armazenar um CPF
struct CPF {
    std::string numero;
};

// Função para realizar a busca sequencial
bool buscarCPF(const CPF banco[], int tamanho, const std::string& cpfBuscado) {
    for (int i = 0; i < tamanho; ++i) {
        if (banco[i].numero == cpfBuscado) {
            return true;
        }
    }
    return false;
}

int main() {
    const int tamanhoBanco = 5; 
    CPF bancoDeCPFs[tamanhoBanco] = {{"017.309.444-93"}, {"234.567.890-12"}, {"345.678.901-23"}, {"456.789.012-34"}, {"567.890.123-45"}};

    std::cout << "Digite o CPF que deseja buscar: ";
    std::string cpfBuscado;
    std::cin >> cpfBuscado;

    if (buscarCPF(bancoDeCPFs, tamanhoBanco, cpfBuscado)) {
        std::cout << "CPF encontrado no banco." << std::endl;
    } else {
        std::cout << "CPF nao encontrado no banco." << std::endl;
    }

    return 0;
}


//  algoritmo de busca
//  faça busca sequencial
//  em c++ faça programa que execute uma busca sequencial de um cpf em um banco de cpfs lido como entrada
//  ordenar algoritmo de buscas sequenciais
