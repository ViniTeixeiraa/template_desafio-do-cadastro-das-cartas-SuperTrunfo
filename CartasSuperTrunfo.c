#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
 char EstadoC1; char EstadoC2;
 char CodigoCartaC1 [4]; char CodigoCartaC2 [4];
 char CidadeC1 [60]; char CidadeC2 [60];
 float PopulacaoC1; float PopulacaoC2;
 float AreaC1; float AreaC2;
 float PIBc1; float PIBc2;
 int PontosTuristicosC1; int PontosTuristicosC2;;

  // Área para entrada de dados
  printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
  printf("                          Cadastro de Cartas                         \n");
  printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
  printf("\n");

  // - Cadastro Primeira Carta
  printf("Preencha o formulario a seguir da primeira carta.\n");
  printf("\n");

  printf ("Estado: ");
  scanf (" %c", &EstadoC1);

  printf ("Código da Carta (Letra do Estado seguida de um numero de '01' a '04'): ");
  scanf ("%4s", CodigoCartaC1);

  printf ("Nome da Cidade (Ultilizar simbolos em vez da tecla 'Espaço'): ");
  scanf ("%49s", CidadeC1);
     
  printf ("População: ");
  scanf ("%f", &PopulacaoC1);

  printf ("Área (em km²): ");
  scanf ("%f", &AreaC1);

  printf ("Valor do PIB: ");
  scanf ("%f", &PIBc1);

  printf ("Número de Pontos Turísticos: ");
  scanf ("%d", &PontosTuristicosC1);

  // - Cadastro Segunda Carta
  printf("Preencha o formulario a seguir da segunda carta.\n");
  printf("\n");

  printf("Estado: ");
  scanf(" %c", &EstadoC2);

  printf ("Código da Carta (Letra do Estado seguida de um numero de '01' a '04'): ");
  scanf ("%4s", CodigoCartaC2);

  printf ("Nome da Cidade (Ultilizar simbolos em vez da tecla 'Espaço'): ");
  scanf ("%49s", CidadeC2);
     
  printf ("População: ");
  scanf ("%f", &PopulacaoC2);

  printf ("Área (em km²): ");
  scanf ("%f", &AreaC2);

  printf ("Valor do PIB: ");
  scanf ("%f", &PIBc2);

  printf ("Número de Pontos Turísticos: ");
  scanf ("%d", &PontosTuristicosC2);

  // Área para exibição dos dados da cidade
  printf("\n");
  printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
  printf("                            Primeira Carta                           \n");
  printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
  printf ("  Estado: %c \n", EstadoC1);
  printf ("  Código: %3s \n", CodigoCartaC1);
  printf ("  Nome da Cidade: %s \n", CidadeC1);
  printf ("  População: %.2f \n", PopulacaoC1);
  printf ("  Área: %.2f km²\n", AreaC1);
  printf ("  PIB: %.2f bilhões de reais\n", PIBc1);
  printf ("  Pontos Turísticos: %d\n", PontosTuristicosC1);

  printf("\n");
  printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
  printf("                            Segunda Carta                            \n");
  printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
  printf("\n");
  printf ("  Estado: %c \n", EstadoC2);
  printf ("  Código: %3s \n", CodigoCartaC2);
  printf ("  Nome da Cidade: %s \n", CidadeC2);
  printf ("  População: %.2f \n", PopulacaoC2);
  printf ("  Área: %.2f km²\n", AreaC2);
  printf ("  PIB: %.2f bilhões de reais\n", PIBc2);
  printf ("  Pontos Turísticos: %d\n", PontosTuristicosC2);

return 0;
} 
