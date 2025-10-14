#include <stdio.h>

int main () {
  // Variaveis da CARTA 1
  char estado1; //Uma letra de 'A' a 'H' (representando um dos oitos estados). Tipo: char
  char codigoCarta1 [5]; //A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[] (string)
  char nomeCidade1 [50]; //O nome da cidade. Tipo: char[] (string)
  int populacao1; //O número de habitantes da cidade. Tipo: int
  float area1; //A área da cidade em quilômetros quadrados. Tipo: float
  float pib1; //O Produto Interno  Bruto da cidade. Tipo: float
  int pontosTuristicos1; //A quantidade de pontos turisticos na cidade. Tipo: int
  float densidadePopulacional1; //Densidade populacional (população/área). Tipo: float
  float pibPerCapita1; //PIB per capita (PIB/população). Tipo: float
  long double superPoder1; //Soma de todos os atributos numéricos(população, área, PIB, número de pontos turísticos, PIB per capita e o inverso da densidade populacional – quanto menor a densidade, maior o "poder") 

    
  // Variaveis da CARTA 2
  char estado2 [5]; //Uma letra de 'A' a 'H' (representando um dos oitos estados). Tipo: char []
  char codigoCarta2 [5]; //A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[] (string)
  char nomeCidade2 [50]; //O nome da cidade. Tipo: char[] (string)
  int populacao2; //O número de habitantes da cidade. Tipo: int
  float area2; //A área da cidade em quilômetros quadrados. Tipo: float
  float pib2; //O Produto Interno  Bruto da cidade. Tipo: float
  int pontosTuristicos2; //A quantidade de pontos turisticos na cidade. Tipo: int
  float densidadePopulacional2; //Densidade populacional (população/área). Tipo: float
  float pibPerCapita2; //PIB per capita (PIB/população).
  long double superPoder2; //Soma de todos os atributos numéricos(população, área, PIB, número de pontos turísticos, PIB per capita e o inverso da densidade populacional – quanto menor a densidade, maior o "poder")

  
  //Entrada de dados CARTA 1
  printf ("Digite os dados para CARTA 1:\n");

  printf ("Estado (letra de A-H)\n");
  scanf ("%c", &estado1);

  printf ("Codigo da Carta (letra e número 01-04)\n");
  scanf ("%c", &codigoCarta1);

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
  scanf ("%s", &estado2);

  printf ("Codigo da Carta (letra e número 01-04)\n");
  scanf ("%s", &codigoCarta2);

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
  pibPerCapita1 = (double)(pib1 * 1000000000.0) / populacao1;// Conversão bilhões para reais

  //Cálculo do super poder Carta 1
  superPoder1 = (float)populacao1 + area1 + ((float)pib1 * 1000000000.0) + pontosTuristicos1 + pibPerCapita1 + 1 / densidadePopulacional1;

  //Cálculo dos atributos derivados da CARTA 2
  densidadePopulacional2 = (float)populacao2 / area2;
  pibPerCapita2 = (double)(pib2 * 1000000000.0) / populacao2;// Conversão bilhões para reais

  //Cálculo do super poder Carta 2
  superPoder2 = (float)populacao2 + area2 + ((float)pib2 * 1000000000.0) + pontosTuristicos1 + pibPerCapita2 + 1 / densidadePopulacional2;

  //Saida de dados registrados
  printf ("\nCARTA 1\n");
  printf ("Estado: %c\n", estado1);
  printf ("Codigo: %s\n", codigoCarta1);
  printf ("Cidade: %s\n", nomeCidade1);
  printf ("População: %d\n", populacao1);
  printf ("Área: %.3f Km²\n", area1);
  printf ("PIB: %.2lf bilhões de reais\n", pib1);
  printf ("Número de Pontos Turisticos: %d\n", pontosTuristicos1);
  printf ("Densidade Populacional: %.2f hab/Km²\n", densidadePopulacional1);
  printf ("PIB per Capita: %.2lf bi reais\n", pibPerCapita1);
  printf ("Super poder: %lf\n", superPoder1)

  printf ("\nCARTA 2\n");
  printf ("Estado: %s\n", estado2);
  printf ("Codigo: %s\n", codigoCarta2);
  printf ("Cidade: %s\n", nomeCidade2);
  printf ("População: %d\n", populacao2);
  printf ("Área: %.3f Km²\n", area2);
  printf ("PIB: %.2lf bilhões de reais\n", pib2);
  printf ("Número de Pontos Turisticos: %d\n", pontosTuristicos2);
  printf ("Densidade Populacional: %.2f hab/Km²\n", densidadePopulacional2);
  printf ("PIB per Capita: %.2lf bi reais\n", pibPerCapita2);
  printf ("Super poder: %lf\n", superPoder2);

  //Comparação das cartas
    int comparacaoPopulacao1 = populacao1 > populacao2;
    int comparacaoArea1 = área1 > área2;
    int comparacaoPib1 = pib1 > pib2;
    int comparacaoTuristicos1 = pontosTuristicos1 > pontosTuristicos2;
    int comparacaoDensidade1 = densidadePopulacional1 > densidadePopulacional2;
    int comparacaoPibperCapita1 = pibPerCapita1 > pibPerCapita2;
    int comparacaoSuperPoder1 = superPoder1 > superPoder2;
    

  printf ("******RESULTADOS******\n");
  printf ("População: Carta 1 venceu %d\n", comparacaoPopulacao1);
  printf ("Área: Carta 1 venceu %d\n", comparacaoArea1);
  printf ("Pib: Carta 1 venceu %d\n", comparacaoPib1);
  printf ("Pontos Turisticos: Carta 1 venceu %d\n", comparacaoTuristicos1);
  printf ("Densidade: Carta 1 venceu %d\n", comparacaoDensidade1);
  printf ("Pib Per Capita: Carta 1 venceu %d\n", comparacaoPibperCapita1);
  printf ("Super Poder: Carta 1 venceu %d\n", comparacaoSuperPoder1);
 
return 0;
}
