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
    int populacao= 230000000;
    float area= 331.4;
    float pib= 185239264.123;
    int numero = 56;
    

    printf("Carta 1\n");
    printf("Estado: %s\n", estado);
    printf("Cidade: %s\n",cidade);
    printf("Código da carta: %s\n",codigo);
    printf("População: %d\n", populacao);
    printf("Área por km: %.2f\n", area);
    printf("PIB: %.2f\n",pib);
    printf("Numero de pontos turisticos: %d\n\n", numero);

    // Segundo Estado

    char estado1[40]= "Rio de Janeiro";
    char cidade1[40]= "Niteroi";
    char codigo1[10]= "B01";
    int populacao1= 1000000;
    float area1= 150.6;
    float pib1= 15000000.16;
    int numero1= 32;

    printf("Carta 2\n");
    printf("Estado: %s\n", estado1);
    printf("Cidade: %s\n", cidade1);
    printf("Código da carta: %s\n",codigo1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Numero de pontos turisticos: %d\n", numero1);
    



    return 0;
}
