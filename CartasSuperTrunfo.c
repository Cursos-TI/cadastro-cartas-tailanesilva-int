#include <stdio.h>

int main() {
    char estado;
    char codigocarta[4]; 
    char nomecidade[50]; 
    char pontoturistico[50];
    int populacao;
    float area;
    float pib;

    // Leituras
    printf("Seja bem vindo(a) ao jogo Super Trunfo.\n");
    printf("Para iniciar, vamos realizar o cadastro de algumas informacoes para suas cartas:\n");

    printf("CARTA 1\n");

    printf("Digite a letra do estado (A-Z):\n");
    scanf(" %c", &estado); 
    
    printf("Informe o nome de um ponto turistico (sem espaços): \n");
    scanf ("%49s", pontoturistico);

    printf("Digite o codigo da sua carta (3 caracteres):\n");
    scanf(" %3s", codigocarta);

    printf("Digite o nome da cidade (sem espaços):\n");
    scanf(" %49s", nomecidade);

    printf("Digite a area da sua cidade: \n");
    fflush(stdin); // Limpa o buffer do teclado
    scanf ("%f", &area);

    printf("Qual a populacao da sua cidade?\n");
    scanf(" %d", &populacao);

    printf("Digite o PIB da sua cidade:\n");
    scanf(" %f", &pib);


    printf("CARTA 2\n");

    printf("Digite a letra do estado (A-Z):\n");
    scanf(" %c", &estado); 
    
    printf("Informe o nome de um ponto turistico (sem espaços): \n");
    scanf ("%49s", pontoturistico);

    printf("Digite o codigo da sua carta (3 caracteres):\n");
    scanf(" %3s", codigocarta);

    printf("Digite o nome da cidade (sem espaços):\n");
    scanf(" %49s", nomecidade);

    printf("Digite a area da sua cidade: \n");
    scanf ("%f", &area);

    printf("Qual a populacao da sua cidade?\n");
    scanf(" %d", &populacao);

    printf("Digite o PIB da sua cidade:\n");
    scanf(" %f", &pib);

    // imprimir os valores lidos
    printf("Aqui está um resumo das suas informacoes \n");
    printf("CARTA 1");

    printf("A letra do estado da sua carta: %c\n", estado);
    printf("o codigo da carta: %s\n", codigocarta);
    printf("a cidade: %s\n", nomecidade);
    printf("Com uma populacao de : %d habitantes\n", populacao);
    printf("Ponto turistico: %s\n", pontoturistico);
    printf("Uma area de: %.2f km²\n", area);
    printf("E com um PIB de: %.2f bilhões\n", pib);

    printf("CARTA 2");

    printf("A letra do estado da sua carta: %c\n", estado);
    printf("o codigo da carta: %s\n", codigocarta);
    printf("a cidade: %s\n", nomecidade);
    printf("Com uma populacao de : %d habitantes\n", populacao);
    printf("Ponto turistico: %s\n", pontoturistico);
    printf("Uma area de: %.2f km²\n", area);
    printf("E com um PIB de: %.2f bilhões\n", pib);





    return 0;
}
