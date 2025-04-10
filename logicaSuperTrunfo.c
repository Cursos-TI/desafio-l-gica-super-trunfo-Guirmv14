#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declarando as variaveis

    int menu, comparacao;
    float densidade_demografica, densidade_demografica2;
    char estado[20], estado2[20];
    int codigo_da_carta, codigo_da_carta2;
    char nome_cidade[20], nome_cidade2[20];
    int populacao, populacao2;
    float area, area2;
    float pib, pib2;
    int pontosturisticos, pontosturisticos2;

    // Menu principal do jogo

    printf("MENU PRINCIPAL: \n");
    printf("1. Iniciar Jogo\n");
    printf("2. Ver Regras\n");
    printf("3. Sair\n");
    printf("\n ###Escolha uma das opções: ###\n");
    scanf("%d", &menu);

    // Escolha de qual função será executada

    switch (menu)
    {
    case 1:
        printf("\n### Vamos iniciar o jogo ###\n");

        // Adicionar as informações da primeira carta

        printf("\n### Digite as informações da primeira carta ###\n");
        printf("Digite o nome do estado: ");
        scanf("%19s", estado);

        printf("Digite o codigo da carta: ");
        scanf("%d", &codigo_da_carta);

        printf("Digite o nome da cidade: ");
        scanf("%19s", nome_cidade);

        printf("Qual a quantidade da população? ");
        scanf("%d", &populacao);

        printf("Qual a área dessa cidade? ");
        scanf("%f", &area);

        printf("Qual o PIB? ");
        scanf("%f", &pib);

        printf("Qual a densidade demográfica? ");
        scanf("%f", &densidade_demografica);

        printf("Quantos pontos turísticos tem na cidade? ");
        scanf("%d", &pontosturisticos);

        // Adicionar as informações da segunda carta

        printf("\n### Agora vamos digitar os valores da segunda carta ###\n");

        printf("Digite o nome do estado: ");
        scanf("%19s", estado2);

        printf("Digite o codigo da carta: ");
        scanf("%d", &codigo_da_carta2);

        printf("Digite o nome da cidade: ");
        scanf("%19s", nome_cidade2);

        printf("Qual a quantidade da população? ");
        scanf("%d", &populacao2);

        printf("Qual a área dessa cidade? ");
        scanf("%f", &area2);

        printf("Qual o PIB? ");
        scanf("%f", &pib2);

        printf("Qual a densidade demográfica? ");
        scanf("%f", &densidade_demografica2);

        printf("Quantos pontos turísticos tem na cidade? ");
        scanf("%d", &pontosturisticos2);

        // Escolha de qual comparação será feita

        printf("\n### Qual comparação deseja fazer? ###\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Densidade Demográfica\n");
        printf("5. Pontos Turísticos\n");
        scanf("%d", &comparacao);

        // Menu de escolhas dos atributos

        switch (comparacao)
        {
        case 1:
            printf("Comparação de População:\n");
            if (populacao == populacao2)
            {
                printf("As cartas possuem o mesmo valor no tributo População!\n");
            }
            else if (populacao > populacao2)
            {
                printf("A carta 1 venceu!\n");
            }
            else
            {
                printf("A carta 2 venceu!\n");
            }
            break;

        case 2:
            printf("Comparação de Área:\n");
            if (area == area2)
            {
                printf("As cartas possuem o mesmo valor no tributo Área!\n");
            }
            else if (area > area2)
            {
                printf("A carta 1 venceu!\n");
            }
            else
            {
                printf("A carta 2 venceu!\n");
            }
            break;

        case 3:
            printf("Comparação de PIB:\n");
            if (pib == pib2)
            {
                printf("As cartas possuem o mesmo valor no tributo PIB!\n");
            }
            else if (pib > pib2)
            {
                printf("A carta 1 venceu!\n");
            }
            else
            {
                printf("A carta 2 venceu!\n");
            }
            break;

        case 4:
            printf("Comparação de Densidade Demográfica:\n");
            if (densidade_demografica == densidade_demografica2)
            {
                printf("As cartas possuem o mesmo valor no tributo Densidade Demográfica!\n");
            }
            else if (densidade_demografica < densidade_demografica2)
            {
                printf("A carta 1 venceu!\n");
            }
            else
            {
                printf("A carta 2 venceu!\n");
            }
            break;

        case 5:
            printf("Comparação de Pontos Turísticos:\n");
            if (pontosturisticos == pontosturisticos2)
            {
                printf("As cartas possuem o mesmo valor no tributo Pontos Turísticos!\n");
            }
            else if (pontosturisticos > pontosturisticos2)
            {
                printf("A carta 1 venceu!\n");
            }
            else
            {
                printf("A carta 2 venceu!\n");
            }
            break;

        default:
        {
            printf("Opção de comparação inválida!\n");
        }
        }
        break;

        // Explicação das regras

    case 2:
        printf("\n### Como funciona o Jogo? ###\n");
        printf("1. O jogador preenche as informações da primeira carta.\n");
        printf("2. Em seguida, preenche as informações da segunda carta.\n");
        printf("3. Por fim, escolhe um atributo para comparar.\n");
        printf("A carta com maior valor no atributo escolhido vence.\n");
        printf("EXCEÇÃO: Na Densidade Demográfica, vence quem tiver o MENOR valor.\n");
        break;

        // Opção para encerrar o jogo

    case 3:
        printf("Ok, jogo encerrado!\n");
        break;
    default:
        printf("Opção inválida!\n");
        break;
    }

    return 0;
}
