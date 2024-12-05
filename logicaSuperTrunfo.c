#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    int codigo, pontos;
    char nome[30];
    float populacao;
    double area, PIB;

    //Variaveis da segunda carta.

    int codigo2, pontos2;
    char nome2[30];
    float populacao2;
    double area2, PIB2;

    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    printf("\n***Registro de dados da primeira carta***\n");
    printf("Digite o codigo da cidade:\n");
    scanf("%d", &codigo);

    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &pontos);

    printf("Agora digite o nome da cidade:\n");
    scanf("%s", nome);

    printf("Agora digite a população: \n");
    scanf("%f", &populacao);

    printf("Agora digite a área:\n");
    scanf("%lf", &area);

    printf("Agora digite o PIB:\n");
    scanf("%lf", &PIB);

    //CADASTRO DA SEGUNDA CARTA

    printf("\n***Registro de dados da segunda carta***\n");
    printf("Digite o codigo da segunda cidade:\n");
    scanf("%d", &codigo2);

    printf("Digite o segundo número de pontos turísticos:\n");
    scanf("%d", &pontos2);

    printf("Agora digite o segundo nome da cidade:\n");
    scanf("%s", nome2);

    printf("Agora digite a segunda população: \n");
    scanf("%f", &populacao2);

    printf("Agora digite a segunda área:\n");
    scanf("%lf", &area2);

    printf("Agora digite o segundo PIB:\n");
    scanf("%lf", &PIB2);   
    
    printf("\n***As cartas foram cadastradas com sucesso***\n");

    // Novas Propriedades Calculadas:
    //Densidade Populacional: População dividida pela área da cidade.
    //PIB per Capita: PIB total dividido pela população.

    float densidade = (float) populacao / area;
    float PIBperCAPITA = (float) PIB / populacao;
    

    float densidade2 = (float) populacao2 / area2;
    float PIBperCAPITA2 = (float) PIB2 / populacao2;


    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("\n***Dados da primeira carta***\n");
    printf("Cidade: %s\n Codigo: %d\n Pontos: %d\n População: %.3f\n Área: %.3lf\n PIB: %.3lf\n Densidade: %.3f\n PIB per Capita de: %.3f\n", nome, codigo, pontos, populacao, area, PIB, densidade, PIBperCAPITA);
    printf("\n***Dados da segunda carta***\n");
    printf("Cidade: %s\n Codigo: %d\n Pontos: %d\n População: %.3f\n Área: %.3lf\n PIB: %.3lf\n Densidade: %.3f\n PIB per Capita de: %.3f\n", nome2, codigo2, pontos2, populacao2, area2, PIB2, densidade2, PIBperCAPITA2);

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    if (area > area2) {
        printf("Carta 1 possui area maior\n");
    } else if (area < area2) {
        printf("Carta 2 possui area maior\n");
    } else {
        printf("As duas cartas possuem a mesma area\n");
    }

        if (PIBperCAPITA > PIBperCAPITA2) {
        printf("Carta 1 possui PIB per capita maior\n");
    } else if (area < area2) {
        printf("Carta 2 possui pib per capita maior\n");
    } else {
        printf("As duas cartas possuem o mesmo PIB per capita\n");
    }


    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Inicializando variáveis de controle para vitória nos critérios
    int venceu_area = 0;
    int venceu_pib = 0;
    
    // Comparando a área das cidades
    if (area > area2) {
        venceu_area = 1;  // Carta 1 venceu na área
    } else if (area < area2) {
        venceu_area = -1;  // Carta 2 venceu na área
    }

    // Comparando o PIB per capita das cidades
    if (PIBperCAPITA > PIBperCAPITA2) {
        venceu_pib = 1;  // Carta 1 venceu no PIB per capita
    } else if (PIBperCAPITA < PIBperCAPITA2) {
        venceu_pib = -1;  // Carta 2 venceu no PIB per capita
    }

    // Exibição do Vencedor baseado nos dois critérios:
    printf("\nComparando a area e o PIB per capita das cartas...\n");
    
    if (venceu_area == 1 && venceu_pib == 1) {
        printf("\nA carta 1 venceu nos dois critérios!\n");
    } else if (venceu_area == -1 && venceu_pib == -1) {
        printf("\nA carta 2 venceu nos dois critérios!\n");
    } else {
        printf("\nEmpate! Cada carta venceu em um critério diferente.\n");
    }

 

    return 0;
}
