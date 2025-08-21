#include <stdio.h>

int main(){
   printf("cartas super trunfo \n");

   char estado[10];
   char codigo[10];
   char cidade[25];
   int populacao;
   int pontosturisticos;
   float area;
   float pib;


   printf("digite seu estado: \n");
   scanf("%s", &estado);

   printf("digite seu codigo: \n");
   scanf("%s", &codigo);

   printf("nome da cidade: \n");
   scanf("%S", &cidade);

   printf("total de habitantes: \n");
   scanf("%d", &populacao);

   printf("quantidades de pontos turisticos: \n");
   scanf("%d", &pontosturisticos);

   printf("area: \n");
   scanf("%f", &area);

   printf("pib: \n");
   scanf("%f", &pib);


   printf("carta 1! \n");
   printf("Estado:%s \n", estado);
   printf("Codigo da carta: %S%S \n", estado);
   printf("Cidade: %s \n, cidade");
   printf("Habitantes: %d \n", populacao);
   printf("Area: %f \n", area);
   printf("Pib: %f \n", pib);
   Printf("Pontos turisticos: %d \n", pontosturisticos);



   return 0;
   



}