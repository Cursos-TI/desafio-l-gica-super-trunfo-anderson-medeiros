#include <stdio.h>
#include <unistd.h>
#include <string.h>


int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    char c1_estado[3], c2_estado[3];
    char c1_codigo[4], c2_codigo[4];
    char c1_cidade[20], c2_cidade[20];
    unsigned long int c1_populacao, c2_populacao;
    float c1_area, c2_area;
    float c1_densidadePopulacional ,c2_densidadePopulacional;
    float c1_pib, c2_pib;
    float c1_pibPerCapita, c2_pibPerCapita;
    int c1_pontosTuristicos, c2_pontosTuristicos;

    
    // Cadastro das Cartas:
    
    // Limpar a tela e posiciona o cursor na primeira linha
    printf("\033[2J\033[H");

    // Tabela para exibição dos dados
    puts("        CADASTRO DE CARTAS        ");
    puts("                                  ");
    puts("DADOS                  │          ");
    puts("───────────────────────┼──────────");
    puts("Estado                 │          ");
    puts("Código                 │          ");
    puts("Cidade                 │          ");
    puts("População              │          ");
    puts("Área                   │          ");
    puts("Densidade Populacional │          ");
    puts("PIB                    │          ");
    puts("PIB per capita         │          ");
    puts("Pontos Turísticos      │          ");

    // Cadastro Carta 1
    printf("\033[3;26HCarta 1");
    // estado
    printf("\033[5;26H");
    scanf("%s", c1_estado);
    // código
    printf("\033[6;26H");
    scanf("%s", c1_codigo);
    // cidade
    printf("\033[7;26H");
    scanf(" %[^\n]", c1_cidade);
    // população
    printf("\033[8;26H");
    scanf("%lu", &c1_populacao);
    // área
    printf("\033[9;26H");
    scanf("%f", &c1_area);
    // densidade populacional
    c1_densidadePopulacional = (float) c1_populacao / c1_area;
    printf("\033[10;26H%.5f", c1_densidadePopulacional);
    // PIB
    printf("\033[11;26H");
    scanf("%f", &c1_pib);
    // PIB per capita
    c1_pibPerCapita = (float) c1_pib / c1_populacao;
    printf("\033[12;26H %.2f", c1_pibPerCapita);
    // pontos turísticos
    printf("\033[13;26H");
    scanf("%d", &c1_pontosTuristicos);

    printf("\nCarta cadastrada com sucesso.\n");
    sleep(1);
    printf("\033[15;1H\033[K");


    // Limpa todos os campos da tabela
    for(int i = 5; i < 14; i++) {
        printf("\033[%d;26H\033[K", i);
    }

    // Cadastro Carta 2
    printf("\033[3;26HCarta 2");
    // estado
    printf("\033[5;26H");
    scanf("%s", c2_estado);
    // código
    printf("\033[6;26H");
    scanf("%s", c2_codigo);
    // cidade
    printf("\033[7;26H");
    scanf(" %[^\n]", c2_cidade);
    // população
    printf("\033[8;26H");
    scanf("%lu", &c2_populacao);
    // área
    printf("\033[9;26H");
    scanf("%f", &c2_area);
    // densidade populacional
    c2_densidadePopulacional = (float) c2_populacao / c2_area;
    printf("\033[10;26H%.5f", c2_densidadePopulacional);
    // PIB
    printf("\033[11;26H");
    scanf("%f", &c2_pib);
    // PIB per capita
    c2_pibPerCapita = (float) c2_pib / c2_populacao;
    printf("\033[12;26H %.2f", c2_pibPerCapita);
    // pontos turísticos
    printf("\033[13;26H");
    scanf("%d", &c2_pontosTuristicos);

    printf("\nCarta cadastrada com sucesso.\n");
    sleep(1);
    printf("\033[15;1H\033[K\n");

    // Limpa a tela
    printf("\033[2J\033[H");


    // Comparação de Cartas:
    char cidadeVencedora[20];

     if (c1_populacao > c2_populacao) {
         printf("Cidade 1 tem maior população.\n");
         strcpy(cidadeVencedora, c1_cidade);
     } else {
         printf("Cidade 2 tem maior população.\n");
         strcpy(cidadeVencedora, c2_cidade);
     }

    // Exibição dos Resultados:
     printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
