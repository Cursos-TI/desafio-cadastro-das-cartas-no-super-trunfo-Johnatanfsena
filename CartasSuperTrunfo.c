#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    
    printf("Brasil\n");

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
    float pibpercapita = (populacao / pib);

    printf("Carta 1\n");
    printf("Estado: %s\n", estado);
    printf("Código da carta: %s\n",codigo);
    printf("Cidade: %s\n",cidade);
    printf("População: %d\n", populacao);
    printf("Área por km²: %.2f área em km²\n", area); 
    printf("PIB: %.2f bilhões de reais\n",pib);
    printf("Numero de pontos turisticos: %d\n", numero);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade);
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
    float pibpercapita1 = (populacao1 / pib1);


    printf("Carta 2\n");
    printf("Estado: %s\n", estado1);
    printf("Código da carta: %s\n",codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f área em km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Numero de pontos turisticos: %d\n", numero1);
    printf("Desidade populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n\n", pibpercapita1);


    return 0;
}
