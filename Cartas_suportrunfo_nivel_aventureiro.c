#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  // CARTA 1:

  char Estado; //Estado: Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char
  char codigo[10]; //Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[] (um array de caracteres, ou string)
  char cidade[50]; //Nome da Cidade: O nome da cidade. Tipo: char[] (string)
  int populacao; //População: O número de habitantes da cidade. Tipo: int
  float area; //Área (em km²): A área da cidade em quilômetros quadrados. Tipo: float
  float pib; //PIB: O Produto Interno Bruto da cidade. Tipo: float
  int p_turistico; //Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade. Tipo: int
  float densidade_populacional,pib_per_capta;

  // Área para entrada de dados

  printf("Informe o estado: ");
  scanf(" %c",&Estado);

  printf("Informe o código da carta: ");
  scanf("%s",codigo);

  printf("Informe o nome da cidade: ");
  scanf("%s",cidade);

  printf("Informe o numero de habitantes: ");
  scanf("%d",&populacao);

  printf("Informe a área da cidade em quilômetros quadrados: ");
  scanf("%f",&area);

  printf("Informe o Produto Interno Bruto da cidade: ");
  scanf("%f",&pib);

  printf("Informe a quantidade de pontos turísticos da cidade: ");
  scanf("%d",&p_turistico);

  //Calcular densidade e pib per capta

  densidade_populacional =(float) populacao/area;
  pib_per_capta = pib/populacao;


   // Área para exibição dos dados da cidade

  printf("CARTA 1\n");
  printf("O nome do Estado: %c\n", Estado);
  printf("Codigo da carta: %s\n", codigo);
  printf("Cidade: %s\n",cidade);
  printf("Populacão: %d\n",populacao);
  printf("Area: %2.f km²\n",area);
  printf("Pib: %2.f bilhôes de reais\n",pib);
  printf("A cidade tem : %d pontos turísticos\n",p_turistico);
  printf("Densidade Populaciona: %2.f hab/km²\n",densidade_populacional);
  printf("PIB per Capita: %2.f reais\n",pib_per_capta);

  // CARTA2

  char Estado_2; //Estado: Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char
  char codigo_2[10]; //Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[] (um array de caracteres, ou string)
  char cidade_2[50]; //Nome da Cidade: O nome da cidade. Tipo: char[] (string)
  int populacao_2; //População: O número de habitantes da cidade. Tipo: int
  float area_2; //Área (em km²): A área da cidade em quilômetros quadrados. Tipo: float
  float pib_2; //PIB: O Produto Interno Bruto da cidade. Tipo: float
  int p_turistico_2; //Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade. Tipo: int
  float densidade_populacional2,pib_per_capta2;
  
  // Área para entrada de dados

  printf("Informe o estado: ");
  scanf(" %c", &Estado_2);

  printf("Informe o código da carta: ");
  scanf("%s",codigo_2);

  printf("Informe o nome da cidade: ");
  scanf("%s",cidade_2);

  printf("Informe o numero de habitantes: ");
  scanf("%d",&populacao_2);

  printf("Informe a área da cidade em quilômetros quadrados: ");
  scanf("%f",&area_2);

  printf("Informe o Produto Interno Bruto da cidade: ");
  scanf("%f",&pib_2);

  printf("Informe a quantidade de pontos turísticos da cidade: ");
  scanf("%d",&p_turistico_2);

  //Calcular densidade e pib per capta

  densidade_populacional2 = (float)populacao_2/area_2;
  pib_per_capta2 = (float)pib_2/populacao_2;

   // Área para exibição dos dados da cidade
  printf("CARTA 2\n");
  printf("O nome do Estado: %c\n", Estado_2);
  printf("Codigo da carta: %s\n", codigo_2);
  printf("Cidade: %s\n", cidade_2);
  printf("Populacão: %d\n",populacao_2);
  printf("Area: %2.f km²\n",area_2);
  printf("Pib: %2.f bilhôes de reais\n",pib_2);
  printf("A cidade tem : %d pontos turísticos\n",p_turistico_2);
  printf("Densidade Populacional: %2.f hab/km²\n",densidade_populacional2);
  printf("PIB per Capita: %2.f reais\n",pib_per_capta2);

return 0;
} 