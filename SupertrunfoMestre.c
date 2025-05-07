#include <stdio.h>
#include <stdlib.h>

int main() {
    // Cartas dos jogadores
    char carta1[20], carta2[20];
    int atributo1, atributo2, pais1, pais2, menu;
    float densidade1, densidade2;
    float pib1, pib2;

    // Dados do Brasil
    float populacaoBR = 211.6;
    float areaBR = 8515.767;
    float pibBR = 2.08;

    // Dados dos EUA
    float populacaoEUA = 345.4;
    float areaEUA = 9833.520;
    float pibEUA = 26.95;

    // Dados do Japão
    float populacaoJP = 123.9;
    float areaJP = 377.975;
    float pibJP = 4.41;

    // Dados da China
    float populacaoCH = 1408.0;
    float areaCH = 9596.961;
    float pibCH = 17.52;

    // Dados do Vietnã
    float populacaoVT = 100.0;
    float areaVT = 331.345;
    float pibVT = 0.45;

    // Dados de Cuba
    float populacaoCU = 11.0;
    float areaCU = 110.860;
    float pibCU = 0.11;

    // Cálculo de densidades demográficas
    float densidadeBR = populacaoBR * 1000000 / (areaBR * 1000);
    float densidadeEUA = populacaoEUA * 1000000 / (areaEUA * 1000);
    float densidadeJP = populacaoJP * 1000000 / (areaJP * 1000);
    float densidadeCH = populacaoCH * 1000000 / (areaCH * 1000);
    float densidadeVT = populacaoVT * 1000000 / (areaVT * 1000);
    float densidadeCU = populacaoCU * 1000000 / (areaCU * 1000);

    // Menu Principal
    printf("\n1. Iniciar Jogo \n");
    printf("2. Regras\n");
    printf("3. Sair\n");

    printf("Escolha uma opção: ");
    scanf("%d", &menu);

    switch (menu) {
        case 1:
            // Iniciar Jogo
            printf("Bem-vindo ao jogo Super Trunfo!\n");
            printf("Escolha dois países para competir:\n");
            printf("1 - Brasil\n");
            printf("2 - Estados Unidos\n");
            printf("3 - Japão\n");
            printf("4 - China\n");
            printf("5 - Vietnã\n");
            printf("6 - Cuba\n");

            // Seleção dos países
            printf("Escolha o primeiro país (1-6): ");
            scanf("%d", &pais1);

            printf("Escolha o segundo país (1-6): ");
            scanf("%d", &pais2);

            // Selecionando o primeiro país
            if (pais1 == 1) {
                densidade1 = densidadeBR;
                pib1 = pibBR;
                printf("Você escolheu o Brasil!\n");
            } else if (pais1 == 2) {
                densidade1 = densidadeEUA;
                pib1 = pibEUA;
                printf("Você escolheu os Estados Unidos!\n");
            } else if (pais1 == 3) {
                densidade1 = densidadeJP;
                pib1 = pibJP;
                printf("Você escolheu o Japão!\n");
            } else if (pais1 == 4) {
                densidade1 = densidadeCH;
                pib1 = pibCH;
                printf("Você escolheu a China!\n");
            } else if (pais1 == 5) {
                densidade1 = densidadeVT;
                pib1 = pibVT;
                printf("Você escolheu o Vietnã!\n");
            } else if (pais1 == 6) {
                densidade1 = densidadeCU;
                pib1 = pibCU;
                printf("Você escolheu Cuba!\n");
            }

            // Selecionando o segundo país
            if (pais2 == 1) {
                densidade2 = densidadeBR;
                pib2 = pibBR;
                printf("Você escolheu o Brasil!\n");
            } else if (pais2 == 2) {
                densidade2 = densidadeEUA;
                pib2 = pibEUA;
                printf("Você escolheu os Estados Unidos!\n");
            } else if (pais2 == 3) {
                densidade2 = densidadeJP;
                pib2 = pibJP;
                printf("Você escolheu o Japão!\n");
            } else if (pais2 == 4) {
                densidade2 = densidadeCH;
                pib2 = pibCH;
                printf("Você escolheu a China!\n");
            } else if (pais2 == 5) {
                densidade2 = densidadeVT;
                pib2 = pibVT;
                printf("Você escolheu o Vietnã!\n");
            } else if (pais2 == 6) {
                densidade2 = densidadeCU;
                pib2 = pibCU;
                printf("Você escolheu Cuba!\n");
            }

            // Seleção dos dois atributos para comparação
            printf("\nEscolha dois atributos para competir:\n");
            printf("1 - PIB\n");
            printf("2 - Densidade Demográfica\n");
            printf("3 - Melhor Economia (PIB mais alto)\n");
            printf("4 - Maior Área Territorial\n");
            printf("5 - Maior População\n");
            printf("Escolha o primeiro atributo (1-5): ");
            scanf("%d", &atributo1);

            printf("Escolha o segundo atributo (1-5): ");
            scanf("%d", &atributo2);

            // Variáveis para contar vitórias
            int vitorias1 = 0, vitorias2 = 0;

            // Comparando os atributos
            printf("\nResultado da comparação:\n");

            // Comparando o primeiro atributo
            if (atributo1 == 1) {
                if (pib1 > pib2) {
                    printf("O primeiro atributo (PIB) venceu para o país 1!\n");
                    vitorias1++;
                } else if (pib1 < pib2) {
                    printf("O primeiro atributo (PIB) venceu para o país 2!\n");
                    vitorias2++;
                } else {
                    printf("Empate no PIB!\n");
                }
            } else if (atributo1 == 2) {
                if (densidade1 < densidade2) {  // Menor densidade vence
                    printf("O primeiro atributo (Densidade Demográfica) venceu para o país 1!\n");
                    vitorias1++;
                } else if (densidade1 > densidade2) {
                    printf("O primeiro atributo (Densidade Demográfica) venceu para o país 2!\n");
                    vitorias2++;
                } else {
                    printf("Empate na Densidade Demográfica!\n");
                }
            } else if (atributo1 == 3) {
                if (pib1 > pib2) {
                    printf("O primeiro atributo (Melhor Economia) venceu para o país 1!\n");
                    vitorias1++;
                } else if (pib1 < pib2) {
                    printf("O primeiro atributo (Melhor Economia) venceu para o país 2!\n");
                    vitorias2++;
                } else {
                    printf("Empate na Economia!\n");
                }
            } else if (atributo1 == 4) {
                if (areaBR > areaEUA) {
                    printf("O primeiro atributo (Maior Área) venceu para o país 1!\n");
                    vitorias1++;
                } else {
                    printf("O primeiro atributo (Maior Área) venceu para o país 2!\n");
                    vitorias2++;
                }
            } else if (atributo1 == 5) {
                if (populacaoBR > populacaoEUA) {
                    printf("O primeiro atributo (Maior População) venceu para o país 1!\n");
                    vitorias1++;
                } else {
                    printf("O primeiro atributo (Maior População) venceu para o país 2!\n");
                    vitorias2++;
                }
            }

            // Comparando o segundo atributo (similar ao primeiro)
            if (atributo2 == 1) {
                if (pib1 > pib2) {
                    printf("O segundo atributo (PIB) venceu para o país 1!\n");
                    vitorias1++;
                } else if (pib1 < pib2) {
                    printf("O segundo atributo (PIB) venceu para o país 2!\n");
                    vitorias2++;
                } else {
                    printf("Empate no PIB!\n");
                }
            } else if (atributo2 == 2) {
                if (densidade1 < densidade2) {
                    printf("O segundo atributo (Densidade Demográfica) venceu para o país 1!\n");
                    vitorias1++;
                } else if (densidade1 > densidade2) {
                    printf("O segundo atributo (Densidade Demográfica) venceu para o país 2!\n");
                    vitorias2++;
                } else {
                    printf("Empate na Densidade Demográfica!\n");
                }
            } else if (atributo2 == 3) {
                if (pib1 > pib2) {
                    printf("O segundo atributo (Melhor Economia) venceu para o país 1!\n");
                    vitorias1++;
                } else if (pib1 < pib2) {
                    printf("O segundo atributo (Melhor Economia) venceu para o país 2!\n");
                    vitorias2++;
                } else {
                    printf("Empate na Economia!\n");
                }
            } else if (atributo2 == 4) {
                if (areaBR > areaEUA) {
                    printf("O segundo atributo (Maior Área) venceu para o país 1!\n");
                    vitorias1++;
                } else {
                    printf("O segundo atributo (Maior Área) venceu para o país 2!\n");
                    vitorias2++;
                }
            } else if (atributo2 == 5) {
                if (populacaoBR > populacaoEUA) {
                    printf("O segundo atributo (Maior População) venceu para o país 1!\n");
                    vitorias1++;
                } else {
                    printf("O segundo atributo (Maior População) venceu para o país 2!\n");
                    vitorias2++;
                }
            }

            // Resultado final
            printf("\nResultado final:\n");
            if (vitorias1 > vitorias2) {
                printf("O país 1 venceu!\n");
            } else if (vitorias1 < vitorias2) {
                printf("O país 2 venceu!\n");
            } else {
                printf("Empate entre os países!\n");
            }

            break;

        case 2:
            // Exibir as regras
            printf("Vamos ver as regras: \n");
            printf("Primeiro passo é selecionar informações da carta que será comparada.\n");
            break;

        case 3:
            // Sair do jogo
            printf("Saindo do jogo. Até mais!\n");
            return 0;

        default:
            printf("Opção inválida. Tente novamente.\n");
            break;
    }

    return 0;
}