#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado; //Estado: Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char
  char codigo_carta; //Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[] (um array de caracteres, ou string)
  char cidade; //Nome da Cidade: O nome da cidade. Tipo: char[] (string)
  int populacao; //População: O número de habitantes da cidade. Tipo: int
  float area; //Área (em km²): A área da cidade em quilômetros quadrados. Tipo: float
  float pib; //PIB: O Produto Interno Bruto da cidade. Tipo: float
  int p_turistico; //Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade. Tipo: int

  // Área para entrada de dados
  printf("Informe o estado: ");
  scanf("%s",&estado);

  printf("Informe o código da carta: ");
  scanf("%s",&codigo_carta);

  printf("Informe o nome da cidade: ");
  scanf("%s",&cidade);

  printf("Informe o numero de habitantes: ");
  scanf("%d",&populacao);

  printf("Informe a área da cidade em quilômetros quadrados: ");
  scanf("%f",&area);

  printf("Informe o Produto Interno Bruto da cidade: ");
  scanf("%f",&pib);

  printf("Informe a quantidade de pontos turísticos da cidade: ");
  scanf("%s",&p_turistico);

  // Área para exibição dos dados da cidade

  printf("Estado: %s\n",estado);
  printf("Código da carta: %s\n", codigo_carta);
  printf("Cidade: %s\n", cidade);
  printf("Populacão: %d\n",populacao);
  printf("Area: %f\n",area);
  printf("Pib: %f\n",pib);
  printf("A cidade tem : %s pontos turísticos\n",p_turistico);

return 0;
} 
