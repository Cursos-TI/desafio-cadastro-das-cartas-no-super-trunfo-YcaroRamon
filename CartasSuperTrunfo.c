#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    //inicio do desafio.
    printf("Bem-vindo ao desafio Super Trunfo - Países!, a baixo algumas regras a serem seguidas:\n");
    printf("\nRegras\n");
    //regra 1
    printf("1- Cada país será dividido em oito estados, identificados pelas letras de A a H;\n");
    //regra 2
    printf("2- Cada estado terá quatro cidades, numeradas de 1 a 4;\n");
    //regra 3
    printf("3- A combinação da letra do estado e o número da cidade define o código da carta (por exemplo, A01, A02, B01, B02).\n");
    
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    //Variaveis
    char codigoCidade[5];// variavel responsável para capturar o codigo da cidade;
    char nomeCidade[20];// variavel responsável por capturar o nome da cidade;
    int populacao;//variavel responsável por capturar a população;
    float area;//variavel responsável por capturar a área;
    float pib;//variavel responsável por capturar o PIB;
    int pontosTuristicos;//variavel responsável por capturar os pontos turisticos;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    //Colhendo informações dos usuários
    printf("\nInforme o código da cidade: Ex.: A01\n");
    fgets(codigoCidade,5,stdin);//foi utilizado o fgets para facilitar a captura dos dados como strings;
    
    printf("\nInforme o nome:\n");
    fgets(nomeCidade,20,stdin);

    printf("\nInforme a população: Ex.: 100000\n");
    scanf("%d", &populacao);
 
    printf("\nInforme a área: Ex.: 10000.00\n");
    scanf("%f", &area);

    printf("\nInforme o PIB:Ex.: 1000000.00\n");
    printf("R$");//Apenas para informar que o pib é me reais;
    scanf("%f", &pib);

    printf("\nInforme o numeo de pontos turísticos: Ex.: 100\n");
    scanf("%d", &pontosTuristicos);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada attributo da cidade, um por linha.
    //Apresentação de dados obitidos;
    printf("\nSua carta tem os seguintes valores:\n");
    printf("Codigo: %s", codigoCidade);
    printf("Nome: %s", nomeCidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2fKm²\n", area);//.2 no %f indica que o float só vai apresentar duas casas após a decimais;
    printf("PIB: R$%.2f\n", pib);
    printf("Pontos Turisticos: %d\n", pontosTuristicos);
    
    return 0;
}
