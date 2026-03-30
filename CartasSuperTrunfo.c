#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  
  // ============= CARTA 1 =============
  char estado1;
  char codigo1[4];
  char cidade1[50];
  int populacao1;
  float area1;
  float pib1;
  int pontosTuristicos1;

  // Área para entrada de dados

  // ============= CARTA 1 =============
  printf("=== Cadastro da Carta 1 ===\n");

  printf("Estado (A-H): ");
  scanf(" %c", &estado1);

  printf("Codigo da carta (ex: A01): ");
  scanf("%s", codigo1);

  printf("Nome da cidade: ");
  scanf(" %[^\n]", cidade1);

  printf("Populacao: ");
  scanf("%d", &populacao1);

  printf("Area (km): ");
  scanf("%f", &area1);

  printf("PIB: ");
  scanf("%f", &pib1);

  printf("Numero de pontos turisticos: ");
  scanf("%d", &pontosTuristicos1);

  // Área para exibição dos dados da cidade

return 0;
} 
