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
  scanf ("%f", &pib1);

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
  scanf ("%f", &pib2);
  
  printf ("Número de Pontos Turisticos\n");
  scanf ("%d", &pontosTuristicos2);

  //Cálculo dos atributos derivados da CARTA 1
  densidadePopulacional1 = populacao1 / area1;
  pibPerCapita1 =  pib1 / populacao1;

  //Cálculo dos atributos derivados da CARTA 2
  densidadePopulacional2 = populacao2 / area2;
  pibPerCapita2 = pib2 / populacao2;

 //Saida de dados registrados
 printf ("\nCARTA 1\n");
 printf ("Estado: %c\n", estado1);
 printf ("Codigo: %s\n", codigoCarta1);
 printf ("Cidade: %s\n", nomeCidade1);
 printf ("População: %d\n", populacao1);
 printf ("Área: %.3f Km²\n", area1);
 printf ("PIB: %.2f bilhões de reais\n", pib1);
 printf ("Número de Pontos Turisticos: %d\n", pontosTuristicos1);
 printf ("Densidade Populacional: %.2f hab/Km²\n", densidadePopulacional1);
 printf ("PIB per Capita: %.2f mil reais\n", pibPerCapita1);

 printf ("\nCARTA 2\n");
 printf ("Estado: %s\n", estado2);
 printf ("Codigo: %s\n", codigoCarta2);
 printf ("Cidade: %s\n", nomeCidade2);
 printf ("População: %d\n", populacao2);
 printf ("Área: %.3f Km²\n", area2);
 printf ("PIB: %.2f bilhões de reais\n", pib2);
 printf ("Número de Pontos Turisticos: %d\n", pontosTuristicos2);
 printf ("Densidade Populacional: %.2f hab/Km²\n", densidadePopulacional2);
 printf ("PIB per Capita: %.2f mil reais\n", pibPerCapita2);
 
 return 0;
}
