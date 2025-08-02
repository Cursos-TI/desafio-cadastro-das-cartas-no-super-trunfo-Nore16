#include <stdio.h>

struct carta {
        char estado;
        char codigo [8];
        char nome_cidade [50];
        unsigned long int populacao;
        float area;
        float pib;
        int pontos_turisticos;
    };

int main() {
    printf("Desafio Cartas Super Trunfo!\n");

    struct carta carta1, carta2;
       // Cadastrar carta 1
       
    printf("Digite o estado: \n");
    scanf(" %c", &carta1.estado);

    printf("Digite o codigo: \n");
    scanf(" %s", carta1.codigo);

    getchar();

    printf("Digite o nome_cidade: \n");
    fgets(carta1.nome_cidade, sizeof(carta1.nome_cidade), stdin);

    printf("Digite a população: \n");
    scanf("%lu", &carta1.populacao);

    printf("Digite a area: \n");
    scanf("%f", &carta1.area);

    printf("Digite o pib: \n");
    scanf("%f", &carta1.pib);

    printf("digite pontos turisticos: \n");
    scanf("%d", &carta1.pontos_turisticos);

    printf("\n");

    // Cadastro carta 2

    printf("Carta 2:\n");

    printf("Digite o estado: \n");
    scanf(" %c", &carta2.estado);

    printf("Digite o codigo: \n");
    scanf(" %s", carta2.codigo);

    printf("Digite o nome_cidade: \n");
    getchar();
    fgets(carta2.nome_cidade, sizeof(carta2.nome_cidade), stdin);

    printf("Digite a populacao: \n");
    scanf("%lu", &carta2.populacao);

    printf("Digite a area: \n");
    scanf("%f", &carta2.area);

    printf("Digite o pib: \n");
    scanf("%f", &carta2.pib);

    printf("Digite pontos_turisticos: \n");
    scanf("%d", &carta2.pontos_turisticos);

    printf("\n");

    //exibir os dados

    printf("dados da carta 1: /n");
    printf("Estado: %c\n", carta1.estado);
    printf("codigo: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.nome_cidade);
    printf("população: %lu\n", carta1.populacao);
    printf("Área: %f\n", carta1.area);
    printf("Pib: %f\n", carta1.pib);
    printf("Pontos Turisticos: %d\n", carta1.pontos_turisticos);

    printf("\n");

    printf("dados da carta 2: \n");
    printf("Estado: %c\n", carta2.estado);
    printf("codigo: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.nome_cidade);
    printf("população: %lu\n", carta2.populacao);
    printf("Área: %f\n", carta2.area);
    printf("Pib: %f\n", carta2.pib);
    printf("Pontos Turisticos: %d\n", carta2.pontos_turisticos);


    


    return 0;
}
    
    
