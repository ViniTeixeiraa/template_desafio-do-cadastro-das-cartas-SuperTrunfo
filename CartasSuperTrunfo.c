#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char EstadoC1, EstadoC2;
  char CodigoDaCartaC1[4], CodigoDaCartaC2[4];
  char CidadeC1[60], CidadeC2[60];
  int PopulacaoC1, PopulacaoC2;
  float AreaKmC1, AreaKmC2;
  float PibC1, PibC2;
  int PontosTuristicosC1, PontosTuristicosC2;

  // Área para entrada de dados
  printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
  printf("                          Cadastro de Cartas                         \n");
  printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
  printf("\n");

  // - Cadastro Primeira Carta
  printf("Preencha o formulario a seguir da primeira carta.\n");
  printf("\n");

  printf("Estado: ");
  scanf("%c", &EstadoC1);

  printf("Código da carta (Ex: Inicial do estado + 01,02,03 ou 04): ");
  scanf("%4s", CodigoDaCartaC1);

  printf("Cidade: ");
  scanf("%59s", CidadeC1);

  printf("População: ");
  scanf("%f", &PopulacaoC1);

  printf("Area em Km²: ");
  scanf("%f", &AreaKmC1);

  printf("PIB: ");
  scanf("%f", &PibC1);

  printf("Quantidade de pontos turisticos: ");
  scanf("%d", &PontosTuristicosC1);
  printf("\n");

  // - Cadastro Segunda Carta
  printf("Preencha o formulario a seguir da segunda carta.\n");
  printf("\n");

  printf("Estado: ");
  scanf("%c", &EstadoC2);

  printf("Código da carta (Ex: Inicial do estado + 01,02,03 ou 04): ");
  scanf("%4s", CodigoDaCartaC2);

  printf("Cidade: ");
  scanf("%59s", CidadeC2);

  printf("População: ");
  scanf("%f", &PopulacaoC2);

  printf("Area em Km²: ");
  scanf("%f", &AreaKmC2);

  printf("PIB: ");
  scanf("%f", &PibC2);

  printf("Quantidade de pontos turisticos: ");
  scanf("%d", &PontosTuristicosC2);

  // Área para exibição dos dados da cidade
  printf("\n");
  printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
  printf("                            Primeira Carta                           \n");
  printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
  printf("\n");
  printf("Estado: %c\n", EstadoC1);
  printf("Código da carta: %s\n", CodigoDaCartaC1);
  printf("Cidade: %s\n", CidadeC1);
  printf("População: %.0f\n", PopulacaoC1);
  printf("Area em Km²: %.2f\n", AreaKmC1);
  printf("PIB: %.2f\n", PibC1);
  printf("Quantidade de pontos turisticos: %d\n", PontosTuristicosC1);

  printf("\n");
  printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
  printf("                            Segunda Carta                            \n");
  printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
  printf("\n");
  printf("Estado: %c\n", EstadoC2);
  printf("Código da carta: %s\n", CodigoDaCartaC2);
  printf("Cidade: %s\n", CidadeC2);
  printf("População: %.0f\n", PopulacaoC2);
  printf("Area em Km²: %.2f\n", AreaKmC2);
  printf("PIB: %.2f\n", PibC2);
  printf("Quantidade de pontos turisticos: %d\n", PontosTuristicosC2);

return 0;
} 
