# Gerenciador de Concursos da Mega-Sena

Este projeto implementa um sistema para gerenciar concursos da Mega-Sena utilizando uma tabela de dispersão. O programa permite inserir, buscar e remover concursos, além de calcular e apresentar estatísticas sobre os resultados dos sorteios.

# Estrutura

concurso.h: Define a estrutura Concurso.

lista_ligada.h: Define a estrutura No e funções básicas de listas ligadas.

tabela_dispersao.h: Define a estrutura TabelaDispersao e funções associadas.

estatisticas.h: Define funções para calcular e apresentar estatísticas.

concurso.c: Implementa funções relacionadas à estrutura Concurso.

lista_ligada.c: Implementa funções para gerenciar listas ligadas.

tabela_dispersao.c: Implementa funções para gerenciar a tabela de dispersão.

estatisticas.c: Implementa funções para calcular estatísticas.

main.c: Contém a função main com o menu principal.

# Funcoes

1. Inserir Concurso
Permite ao usuário inserir um novo concurso na tabela de dispersão. A função inserir_concurso garante que não haja duplicação de números de concurso.

2. Buscar Concurso
Permite ao usuário buscar um concurso específico na tabela de dispersão usando o número do concurso. A função buscar_concurso retorna a data do sorteio e os números sorteados.

3. Remover Concurso
Permite ao usuário remover um concurso da tabela de dispersão pelo número do concurso. A função remover_concurso exclui o concurso da tabela e garante que a remoção seja feita corretamente.

4. Visualizar Todos os Concursos
Permite ao usuário visualizar todos os concursos armazenados na tabela de dispersão, exibindo o número do concurso, a data do sorteio e os números sorteados.

5. Carregar Concursos de um Arquivo
Permite carregar concursos a partir de um arquivo CSV ou TSV contendo resultados históricos. O arquivo deve seguir o formato especificado (CSV ou TSV).

6. Apresentar Estatísticas
Quantidade de Sorteios de um Número: Mostra a quantidade de sorteios de um número específico.

Dez Números Mais Sorteados: Exibe os dez números que foram sorteados com maior frequência.

Dez Números Menos Sorteados: Exibe os dez números que foram sorteados com menor frequência.

Quantidade de Concursos em um Ano: Mostra a quantidade de concursos realizados em um ano específico e seus dados.

