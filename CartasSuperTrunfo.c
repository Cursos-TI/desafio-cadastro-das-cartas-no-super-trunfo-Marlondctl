#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    int populacao, area, pontos, codcidade;
    float pib;
    char cidade, estado;
    
    printf ("Bem Vindo ao Super Trunfo Cidade!!\n");

printf ("Digite o Codigo do estado:\n");
scanf ("%s", &estado);

printf (" Digite o Codigo da cidade:\n");
scanf ("%d", &codcidade);

    printf (" Digite o nome da cidade:\n");
    scanf ("%s", &cidade);

    printf (" Digite a população da cidade:\n");
     scanf ("%d", &populacao);

    printf (" Digite a área da cidade:\n");
     scanf ("%d", &area);

    printf (" Digite o PIB da cidade\n");
     scanf ("%f", &pib);

    printf (" Digite o numero de pontos turísticos\n");
     scanf ("%d", &pontos);

     printf ("Cidade: %s,  Codigo: %s %d", cidade, estado, codcidade);

    
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
