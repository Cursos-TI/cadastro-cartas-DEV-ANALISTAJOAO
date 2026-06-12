#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  // Variáreis para carta 1:

  char estado1; // Uma letra entre A E H (sendo 8 estados com 4 cidades cada estado)
  char codigo_carta1[4]; // uma letra escolhida e um número de 01 a 04
  char nome_cidade1[20]; // qualquer cidade (nome separado por '_')
  int populacao1; // número de habitantes da cidade
  float area1; // área da cidade em km²
  float pib1; // pib da cidade escolhida
  int pontos_turisticos1; // quantidade de pontos turisticos da cidade

  // Variáreis para carta 2:

  char estado2; // Uma letra entre A E H (sendo 8 estados com 4 cidades cada estado)
  char codigo_carta2[4]; // uma letra escolhida e um número de 01 a 04
  char nome_cidade2[20]; // qualquer cidade (nome separado por '_')
  int populacao2; // número de habitantes da cidade
  float area2; // área da cidade em km²
  float pib2; // pib da cidade escolhida
  int pontos_turisticos2; // quantidade de pontos turisticos da cidade

  // Área para entrada de dados

  /* 
  - espaço antes do % em scanf para evitar problemas de leitura com o buffer do teclado 
  - \n para adicionaruma nova linha para melhorar a organização visual do programa
  */

  // Área de cadastro da carta 1

  printf("Cadastro de carta 1:\n"); // cabeçalho das informações da carta 1

  printf("Digite uma letra entre A e H para representar o estado:\n"); // representa um dos 8 estados
  scanf(" %c", &estado1); // definidor de formato %c tipo char para leitura de um caractere

  printf("Digite o código para a carta (letra escolhida + número entre 01 e 04):\n"); // código para identificação da carta
  scanf(" %3s", codigo_carta1); // definidor de formato %s tipo char para leitura de string

  printf("Digite o nome (sem acentos ou espaços) da cidade:\n"); // separar o nome por _ para evitar problema de leitura com espaço
  scanf(" %19s", nome_cidade1); // definidor de formato %s tipo char para leitura de string

  printf("Digite a população da cidade:\n");
  scanf(" %d", &populacao1); // definidor de formato %d tipo int para leitura de número inteiro

  printf("Digite a área da cidade em km²:\n");
  scanf(" %f", &area1); // definidor de formato %f tipo float para leitura de número com casa decimal

  printf("Digite o PIB da cidade:\n");
  scanf(" %f", &pib1); // definidor de formato %f tipo float para leitura de número com casa decimal

  printf("Digite a quantidade de pontos turísticos da cidade:\n");
  scanf(" %d", &pontos_turisticos1); // definidor de formato %d tipo int para leitura de número inteiro

  // Área de cadastro da carta 2

  printf("\nCadastro de carta 2 (insira dados diferentes dos já usados):\n"); // cabeçalho das informações da carta 2

  printf("Digite uma letra entre A e H para representar o estado:\n"); // representa um dos 8 estados
  scanf(" %c", &estado2); // definidor de formato %c tipo char para leitura de um caractere

  printf("Digite o código para a carta (letra escolhida + número entre 01 e 04):\n"); // código para identificação da carta
  scanf(" %3s", codigo_carta2); // definidor de formato %s tipo char para leitura de string

  printf("Digite o nome (sem acentos ou espaços) da cidade:\n"); // separar o nome por _ para evitar problema de leitura com espaço
  scanf(" %19s", nome_cidade2); // definidor de formato %s tipo char para leitura de string

  printf("Digite a população da cidade:\n");
  scanf(" %d", &populacao2); // definidor de formato %d tipo int para leitura de número inteiro

  printf("Digite a área da cidade em km²:\n");
  scanf(" %f", &area2); // definidor de formato %f tipo float para leitura de número com casa decimal

  printf("Digite o PIB da cidade:\n");
  scanf(" %f", &pib2); // definidor de formato %f tipo float para leitura de número com casa decimal

  printf("Digite a quantidade de pontos turísticos da cidade:\n");
  scanf(" %d", &pontos_turisticos2); // definidor de formato %d tipo int para leitura de número inteiro

  // Área para exibição dos dados da cidade

  printf("\nDados das cartas cadastradas:\n");
  printf("\nCarta 1\n"); // cabeçalho para exibição das informações da carta 1
  printf("Estado: %c\n", estado1); // exibição do estado da carta 1
  printf("Código: %3s\n", codigo_carta1); // exibição do código da carta 1
  printf("Nome da cidade: %s\n", nome_cidade1);
  printf("População: %d\n", populacao1); // exibição da população da carta 1
  printf("Área: %.2f km²\n", area1); // exibição da área da carta 1 com 2 casas decimais
  printf("PIB: %.2f bilhões de reais\n", pib1); // exibição do PIB da carta 1 com 2 casas decimais
  printf("Número de Pontos turísticos: %d\n", pontos_turisticos1); // exibição da quantidade de pontos turísticos da carta 1

  printf("\nCarta 2\n"); // cabeçalho para exibição das informações da carta 2
  printf("Estado: %c\n", estado2); // exibição do estado da carta 2
  printf("Código: %3s\n", codigo_carta2); // exibição do código da carta 2
  printf("Nome da cidade: %s\n", nome_cidade2);
  printf("População: %d\n", populacao2); // exibição da população da carta 2
  printf("Área: %.2f km²\n", area2); // exibição da área da carta 2 com 2 casas decimais
  printf("PIB: %.2f bilhões de reais\n", pib2); // exibição do PIB da carta 2 com 2 casas decimais
  printf("Número de Pontos turísticos: %d\n", pontos_turisticos2); // exibição da quantidade de pontos turísticos da carta 2

return 0;
} 
