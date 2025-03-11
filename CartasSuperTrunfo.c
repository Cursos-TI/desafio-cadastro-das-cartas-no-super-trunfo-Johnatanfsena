#include <stdio.h>

int main() {
    
    // Primeira Estado 

    char estado[50]= "Minas Gerais";
    char cidade[50]= "Belo Horizonte";
    char codigo[10]= "A01";
    unsigned long int populacao= 2316000;
    float area= 331.4;
    float pib= 750.50;
    int numero = 56;
    // calculos
    float densidade = ((float)populacao / area);
    float pibpercapita = (pib * 1000000000) / populacao;
    float superpoder = (populacao + area + pib + numero + pibpercapita + ( 1 / densidade));

    printf("Carta 1\n");
    printf("Estado: %s\n", estado);
    printf("Código da carta: %s\n",codigo);
    printf("Cidade: %s\n",cidade);
    printf("População: %li\n", populacao);
    printf("Área por km²: %.2f área em km²\n", area); 
    printf("PIB: %.2f bilhões de reais\n",pib);
    printf("Numero de pontos turisticos: %d\n", numero);
    printf("Densidade populacional: %.2f hab/km²\n", densidade);
    printf("PIB per Capita: %.2f reais\n", pibpercapita);
    printf("Super Poder: %.2f\n\n", superpoder);


    // Segundo Estado

    char estado1[40]= "Rio de Janeiro";
    char cidade1[40]= "Niteroi";
    char codigo1[10]= "B01";
    unsigned long int populacao1= 1503000;
    float area1= 150.6;
    float pib1= 950.00;
    int numero1= 32;
    // calculos
    float densidade1 = ((float)populacao1 / area1);
    float pibpercapita1 = (pib1 * 1000000000) / populacao1;
    float superpoder1 = (populacao1 + area1 + pib1 + numero1 + pibpercapita + (1 / densidade1));

    printf("Carta 2\n");
    printf("Estado: %s\n", estado1);
    printf("Código da carta: %s\n",codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %li\n", populacao1);
    printf("Área: %.2f área em km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Numero de pontos turisticos: %d\n", numero1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibpercapita1);
    printf("Super Poder: %.2f\n\n", superpoder1);

    printf("Comparação de cartas: \n\n");
    

    printf("População: Carta %d venceu\n", (populacao > populacao1) ? 1 : 2 );
    printf("Área: Carta %d venceu\n", (area > area1) ? 1: 2);
    printf("PIB: Carta %d venceu\n", (area > area1) ? 1 : 2);
    printf("Pontos turisticos: Carta %d venceu\n", (numero > numero1) ? 1 : 2);
    printf("Densidade Populacional: Carta %d venceu\n", (densidade >= densidade1) ? 1 : 2);
    printf("Pib per Capita: Carta %d venceu\n", (pibpercapita > pibpercapita1) ? 1 : 2);
    printf("Super Poder: %d venceu\n",(superpoder > superpoder1) ? 1 : 2);

   




    return 0;
}
