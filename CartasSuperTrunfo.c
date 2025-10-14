#include <stdio.h>

int main () {
  // Variaveis da CARTA 1
  char estado1; //Uma letra de 'A' a 'H' (representando um dos oitos estados). Tipo: char
  char [5] codigoCarta1; //A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[] (string)
  char [50] nomeCidade1 ; //O nome da cidade. Tipo: char[] (string)
  int populacao1; //O número de habitantes da cidade. Tipo: int
  float area1; //A área da cidade em quilômetros quadrados. Tipo: float
  long float pib1; //O Produto Interno  Bruto da cidade. Tipo: float
  int pontosTuristicos1; //A quantidade de pontos turisticos na cidade. Tipo: int
  float densidadePopulacional1; //Densidade populacional (população/área). Tipo: float
  float pibPerCapita1; //PIB per capita (PIB/população). Tipo: float
  unsigned long double superPoder1; //Soma de todos os atributos numéricos(população, área, PIB, número de pontos turísticos, PIB per capita e o inverso da densidade populacional – quanto menor a densidade, maior o "poder") 

    
  // Variaveis da CARTA 2
  char estado2; //Uma letra de 'A' a 'H' (representando um dos oitos estados). Tipo: char []
  char [5] codigoCarta2; //A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[] (string)
  char [50] nomeCidade2 ; //O nome da cidade. Tipo: char[] (string)
  int populacao2; //O número de habitantes da cidade. Tipo: int
  float area2; //A área da cidade em quilômetros quadrados. Tipo: float
  long float pib2; //O Produto Interno  Bruto da cidade. Tipo: float
  int pontosTuristicos2; //A quantidade de pontos turisticos na cidade. Tipo: int
  float densidadePopulacional2; //Densidade populacional (população/área). Tipo: float
  float pibPerCapita2; //PIB per capita (PIB/população).
  unsigned long double superPoder2; //Soma de todos os atributos numéricos(população, área, PIB, número de pontos turísticos, PIB per capita e o inverso da densidade populacional – quanto menor a densidade, maior o "poder")

  //Entrada de dados CARTA 1
  printf ("Digite os dados para CARTA 1:\n");
  printf ("Estado (letra de A-H)\n");
  scanf ("%c", &estado1);
  printf ("Codigo da Carta (letra e número 01-04)\n");
  scanf ("%s", &codigoCarta1);
  printf ("Nome da Cidade\n");
  scanf ("%s", &nomeCidade1);
  printf ("População\n");
  scanf ("%d", &populacao1);
  printf ("Área\n");
  scanf ("%f", &area1);
  printf ("PIB\n");
  scanf ("%lf", &pib1);
  printf ("Número de Pontos Turisticos\n");
  scanf ("%d", &pontosTuristicos1);

  //Entrada de dados CARTA 2
  printf ("\nDigite os dados para CARTA 2:\n");
  printf ("Estado (letra de A-H)\n");
  scanf (" %s", &estado2);
  printf ("Codigo da Carta (letra e número 01-04)\n");
  scanf (" %c", &codigoCarta2);
  printf ("Nome da Cidade\n");
  scanf ("%s", &nomeCidade2);
  printf ("População\n");
  scanf ("%d", &populacao2);
  printf ("Área\n");
  scanf ("%f", &area2);
  printf ("PIB\n");
  scanf ("%lf", &pib2);
  printf ("Número de Pontos Turisticos\n");
  scanf ("%d", &pontosTuristicos2);

  //Cálculo dos atributos derivados da CARTA 1
  densidadePopulacional1 = (float)populacao1 / area1;
  pibPerCapita1 = (double) pib1 / populacao1;
  //Cálculo do super poder Carta 1
  superPoder1 = (float) populacao1 + area1 + ((float)pib1) + pontosTuristicos1 + pibPerCapita1 + 1 / densidadePopulacional1;

  //Cálculo dos atributos derivados da CARTA 2
  densidadePopulacional2 = (float)populacao2 / area2;
  pibPerCapita2 = (double) pib2 / populacao2;
  //Cálculo do super poder Carta 2
  superPoder2 = (float) populacao2 + area2 + ((float)pib2) + pontosTuristicos2 + pibPerCapita2 + 1 / densidadePopulacional2;

  //Saida de dados registrados
  printf ("\nCARTA 1\n");
  printf ("Estado: %c\n", estado1);
  printf ("Codigo: %c\n", codigoCarta1);
  printf ("Nome da Cidade: %s\n", nomeCidade1);
  printf ("População: %d\n", populacao1);
  printf ("Área: %.2f km²\n", area1);
  printf ("PIB: R$ %.2f bilhões\n", pib1);
  printf ("Número de Pontos Turisticos: %d\n", pontosTuristicos1);
  printf ("Densidade Populacional: %.2f habitantes/km²\n", densidadePopulacional1);
  printf ("PIB per Capita: R$ %.2f\n", pibPerCapita1);
  printf ("Super Poder: %lu\n", superPoder1);

  printf ("\nCARTA 2\n");
  printf ("Estado: %c\n", estado2);
  printf ("Codigo: %c\n", codigoCarta2);
  printf ("Nome da Cidade: %s\n", nomeCidade2);
  printf ("População: %d\n", populacao2);
  printf ("Área: %.2f km²\n", area2);
  printf ("PIB: R$ %.2f bilhões\n", pib2);
  printf ("Número de Pontos Turisticos: %d\n", pontosTuristicos2);
  printf ("Densidade Populacional: %.2f habitantes/km²\n", densidadePopulacional2);
  printf ("PIB per Capita: R$ %.2f\n", pibPerCapita2);
  printf ("Super Poder: %lu\n", superPoder2);

  //Comparação dos super poderes
  int comparacaoPopulacao = populacao1 > populacao2;
  int comparacaoArea = area1 > area2;
  int comparacaoPib = pib1 > pib2;
  int comparacaoPontosTuristicos = pontosTuristicos1 > pontosTuristicos2;
  int comparacaoDensidadePopulacional = densidadePopulacional1 < densidadePopulacional2; // Inverso, pois menor densidade é melhor
  int comparacaoPibPerCapita = pibPerCapita1 > pibPerCapita2;
  int comparacaoSuperPoder = superPoder1 > superPoder2;

  //resultados das comparações
  printf ("\n************RESULTADOS DAS COMPARAÇÕES************\n");
  printf ("População: Carta 1 venceu? %d\n", comparacaoPopulacao);
  printf ("Área: Carta 1 venceu? %d\n", comparacaoArea);
  printf ("PIB: Carta 1 venceu? %d\n", comparacaoPib);
  printf ("Número de Pontos Turisticos: Carta 1 venceu? %d\n", comparacaoPontosTuristicos);
  printf ("Densidade Populacional: Carta 1 venceu? %d\n", comparacaoDensidadePopulacional);
  printf ("PIB per Capita: Carta 1 venceu? %d\n", comparacaoPibPerCapita);
  printf ("Super Poder: Carta 1 venceu? %d\n", comparacaoSuperPoder);
  return 0;
}