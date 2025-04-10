/// Inicio da primeira carta

#include <stdio.h>
int main(){
    char estado[20];
    int codigo_da_carta;
    char nome_cidade[20];
    int populacao;
    float area;
    float pib;
    int pontosturisticos;

    printf("Digite as informações da primeira carta !!! \n");

    printf("Digite o nome do estado: ");
    scanf("%s", estado);

    printf("Digite o codigo da carta: ");
    scanf("%d", &codigo_da_carta);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome_cidade);

    printf("Qual a quantidade da população? ");
    scanf("%d", &populacao);

    printf("Qual a área dessa cidade? ");
    scanf("%f", &area);

    printf("Qual o PIB? ");
    scanf("%f", &pib);

    printf("Quantos pontos turisticos tem na cidade? ");
    scanf("%d", &pontosturisticos);

    printf("\n O estado é: %s \n O codigo da carta é: %d a cidade é: %s\n",estado, codigo_da_carta, nome_cidade);
   
    printf(" O numero de sua população é: %d \n",populacao);
    
    printf(" A área dessa cidade é: %.2f Km² \n", area);
    
    printf(" O PIB é: %.2f \n", pib);
    
    printf(" A cidade tem %d pontos turisticos\n", pontosturisticos);



 /// Término da primeira carta

 /// Inicio da segunda carta

 char estado2[20];
 int codigo_da_carta2;
 char nome_cidade2[20];
 int populacao2;
 float area2;
 float pib2;
 int pontosturisticos2;

    printf("\nDigite as informações da Segunda carta !!! \n");

    printf("Digite o nome do estado: ");
    scanf("%s", estado2);

    printf("Digite o codigo da carta: ");
    scanf("%d", &codigo_da_carta2);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome_cidade2);

    printf("Qual a quantidade da população? ");
    scanf("%d", &populacao2);

    printf("Qual a área dessa cidade? ");
    scanf("%f", &area2);

    printf("Qual o PIB? ");
    scanf("%f", &pib2);

    printf("Quantos pontos turisticos tem na cidade? ");
    scanf("%d", &pontosturisticos2);

    printf("\n O estado é: %s \n O codigo da carta é: %d a cidade é: %s\n",estado2, codigo_da_carta2, nome_cidade2);
   
    printf(" O numero de sua população é: %d \n",populacao2);
    
    printf(" A área dessa cidade é: %.2f Km² \n", area2);
    
    printf(" O PIB é: %.2f \n", pib2);
    
    printf(" A cidade tem %d pontos turisticos", pontosturisticos2);

    return 0;
 }