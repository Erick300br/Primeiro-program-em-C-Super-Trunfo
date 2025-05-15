#include <stdio.h>

int main(){

    //carta 1
    char estado01[20];
    //escolher uma letra para o estado
    char codigo01[5];
    //exemplo de código: A01
    char cidade01[20];
    int pop01;
    float areakm01;
    float pib01;
    int turistic01;

 //carta 2
    char estado02[20];
    char codigo02[5];
    char cidade02[20];
    int pop02;
    float areakm02;
    float pib02;
    int turistic02;

    printf("Seja bem vindo (a) ao jogo Super Trunfo!\n");
    printf("Vamos criar sua primeira carta!\n");

    printf("Digite o nome do estado (sem espaço ou acentuação): ");
    scanf("%s", &estado01);

    printf("Digite o código da carta, (exemplo A01): ");
    scanf("%s", &codigo01);

    printf("Digite o nome da cidade: ");
    scanf("%s", &cidade01);

    printf("Digite o número de cidadãos: ");
    scanf("%d", &pop01);

    printf("Digite o tamanho da cidade em km2 (até 2 casas decimais): ");
    scanf("%f", &areakm01);

    printf("Digite o PIB (até 2 casas decimais): ");
    scanf("%f", &pib01);

    printf("Digite o número de pontos turísticos: ");
    scanf("%i", &turistic01);

    printf("Veja as informações da sua primeira carta: \n");

    printf("Estado: %s\n", estado01);
    printf("Código: %s\n", codigo01);
    printf("Cidade: %s\n", cidade01);
    printf("População: %d\n", pop01);
    printf("Area km2: %.2f\n", areakm01);
    printf("PIB: %.2f\n", pib01);
    printf("Pontos Turísticos: %d\n", turistic01);


    //SEGUNDA CARTA


    printf("Vamos para a segunda carta!\n");

    printf("Digite o nome do estado (sem espaço): ");
    scanf("%s", &estado02);

    printf("Digite o código da carta, (exemplo A01): ");
    scanf("%s", &codigo02);

    printf("Digite o nome da cidade: ");
    scanf("%s", &cidade02);

    printf("Digite o número de cidadãos: ");
    scanf("%d", &pop02);

    printf("Digite o tamanho da cidade em km2 (até 2 casas decimais): ");
    scanf("%f", &areakm02);

    printf("Digite o PIB (até 2 casas decimais): ");
    scanf("%f", &pib02);

    printf("Digite o número de pontos turísticos: ");
    scanf("%i", &turistic02);

    printf("Veja as informações da sua segunda carta: \n");

    printf("Estado: %s\n", estado02);
    printf("Código: %s\n", codigo02);
    printf("Nome: %s\n", cidade02);
    printf("População: %d\n", pop02);
    printf("Area km2: %.2f\n", areakm02);
    printf("PIB: %.2f\n", pib02);
    printf("Pontos Turísticos: %d\n", turistic02);
    printf("FIM");
    return 0;
}