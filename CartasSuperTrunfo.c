#include <stdio.h>

int main() {
    
    // Primeira Estado 

    char estado[50]= "Minas Gerais";
    char cidade[50]= "Belo Horizonte";
    char codigo[10]= "A01";
    int populacao= 2316000;
    float area= 331.4;
    float pib= 750.50;
    int numero = 56;
    // calculos
    float densidade = ( populacao / area);
    float pibpercapita = (pib * 1000000000) / populacao;

    printf("Carta 1\n");
    printf("Estado: %s\n", estado);
    printf("Código da carta: %s\n",codigo);
    printf("Cidade: %s\n",cidade);
    printf("População: %d\n", populacao);
    printf("Área por km²: %.2f área em km²\n", area); 
    printf("PIB: %.2f bilhões de reais\n",pib);
    printf("Numero de pontos turisticos: %d\n", numero);
    printf("Densidade populacional: %.2f hab/km²\n", densidade);
    printf("PIB per Capita: %.2f reais\n\n", pibpercapita);

    // Segundo Estado

    char estado1[40]= "Rio de Janeiro";
    char cidade1[40]= "Niteroi";
    char codigo1[10]= "B01";
    int populacao1= 1503000;
    float area1= 150.6;
    float pib1= 950.00;
    int numero1= 32;
    // calculos
    float densidade1 = (populacao1 / area1);
    float pibpercapita1 = (pib1 * 1000000000) / populacao1;


    printf("Carta 2\n");
    printf("Estado: %s\n", estado1);
    printf("Código da carta: %s\n",codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f área em km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Numero de pontos turisticos: %d\n", numero1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n\n", pibpercapita1);


    return 0;
}
