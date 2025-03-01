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
    
    // Declaração das variáveis para os dados das cartas
    // Definindo variáveis para a primeira carta
    char estado1;
    char codigo1[5]; // Usando um array de caracteres para armazenar o código
    char cidade1[50];
    unsigned long int populacao1; // Usando unsigned long int para populações maiores
    float area1, pib1;
    int pontos_turisticos1;
    float densidade_populacional1, pib_per_capita1, super_poder1;

    // Definindo variáveis para a segunda carta
    char estado2;
    char codigo2[5]; // Usando um array de caracteres para armazenar o código
    char cidade2[50];
    unsigned long int populacao2; // Usando unsigned long int para populações maiores
    float area2, pib2;
    int pontos_turisticos2;
    float densidade_populacional2, pib_per_capita2, super_poder2;

    // Leitura dos dados da carta 1
    printf("Digite os dados da Carta 1:\n");

    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado1); // Espaço antes de %c para limpar o buffer do teclado
    printf("Código da Carta (exemplo A01, B03): ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade1); // Lê até a quebra de linha
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // Calculando a Densidade Populacional e PIB per Capita para a carta 1
    densidade_populacional1 = populacao1 / area1;
    pib_per_capita1 = pib1 * 1000000000 / populacao1; // Convertendo PIB de bilhões para reais

    // Cálculo do Super Poder da Carta 1
    super_poder1 = (float)populacao1 + area1 + pib1 * 1000000000 + pontos_turisticos1 + pib_per_capita1 + (1 / densidade_populacional1);

    // Leitura dos dados da carta 2
    printf("\nDigite os dados da Carta 2:\n");

    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado2); // Espaço antes de %c para limpar o buffer do teclado
    printf("Código da Carta (exemplo A01, B03): ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade2); // Lê até a quebra de linha
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // Calculando a Densidade Populacional e PIB per Capita para a carta 2
    densidade_populacional2 = populacao2 / area2;
    pib_per_capita2 = pib2 * 1000000000 / populacao2; // Convertendo PIB de bilhões para reais

    // Cálculo do Super Poder da Carta 2
    super_poder2 = (float)populacao2 + area2 + pib2 * 1000000000 + pontos_turisticos2 + pib_per_capita2 + (1 / densidade_populacional2);

    // Comparando os atributos das cartas e exibindo o vencedor para cada um
    printf("\nComparação de Cartas:\n");

    // Comparação da População
    printf("População: Carta 1 venceu (%d)\n", (populacao1 > populacao2));

    // Comparação da Área
    printf("Área: Carta 1 venceu (%d)\n", (area1 > area2));

    // Comparação do PIB
    printf("PIB: Carta 1 venceu (%d)\n", (pib1 > pib2));

    // Comparação dos Pontos Turísticos
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", (pontos_turisticos1 > pontos_turisticos2));

    // Comparação da Densidade Populacional (quanto menor a densidade, maior o "poder")
    printf("Densidade Populacional: Carta 2 venceu (%d)\n", (densidade_populacional1 > densidade_populacional2));

    // Comparação do PIB per Capita
    printf("PIB per Capita: Carta 1 venceu (%d)\n", (pib_per_capita1 > pib_per_capita2));

    // Comparação do Super Poder
    printf("Super Poder: Carta 1 venceu (%d)\n", (super_poder1 > super_poder2));

    return 0;
}