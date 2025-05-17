#include <stdio.h>

int main(){
    // Versão 1.3.0

    //carta 1
    char estado01[20];
    //Nome do estado
    char codigo01[5];
    //exemplo de código: A01
    char cidade01[20];
    unsigned long int pop01;
    float areakm01;
    float pib01;
    int turistic01;
    float densipop01;
    float pibpercap01;
    float power01;


 //carta 2
    char estado02[20];
    char codigo02[5];
    char cidade02[20];
    unsigned long int pop02;
    float areakm02;
    float pib02;
    int turistic02;
    float densipop02;
    float pibpercap02;
    float power02;

    int resultpop;
    int resultareakm;
    int resultpib;
    int resultturistic;
    int resultdensipop;
    int resultpibpercap;
    int resultpower;

    printf("Seja bem vindo (a) ao jogo Super Trunfo!\n");
    printf("Vamos criar sua primeira carta!\n");

    printf("Digite o nome do estado (sem espaço ou acentuação): ");
    scanf("%s", &estado01);

    printf("Digite o código da carta, (exemplo A01, máximo de 5 caracteres): ");
    scanf("%s", &codigo01);

    printf("Digite o nome da cidade (sem espaço ou acentuação): ");
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

    densipop01 = (double) pop01 / areakm01;
    pibpercap01 = (double) pib01 / pop01;
    power01 = pop01 + areakm01 + pib01 + turistic01 + densipop01 + pibpercap01;
    printf("Estado: %s\n", estado01);
    printf("Código: %s\n", codigo01);
    printf("Cidade: %s\n", cidade01);
    printf("População: %d\n", pop01);
    printf("Area km2: %.2f\n", areakm01);
    printf("PIB: %.2f\n", pib01);
    printf("Pontos Turísticos: %d\n", turistic01);
    printf("Densidade Populacional: %.2f hab/km2.\n", densipop01);
    printf("PIB Per Capta: %.4f reais.\n", pibpercap01);
    printf("Poder: %.3f.\n", power01);


    //SEGUNDA CARTA


    printf("Vamos para a segunda carta!\n");

    printf("Digite o nome do estado (sem espaço ou acentuação): ");
    scanf("%s", &estado02);

    printf("Digite o código da carta, (exemplo A01, máximo de 5 caracteres): ");
    scanf("%s", &codigo02);

    printf("Digite o nome da cidade (sem espaço ou acentuação): ");
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

    densipop02 = (double) pop02 / areakm02;
    pibpercap02 = (double) pib02 / pop02;
    power02 = pop02 + areakm02 + pib02 + turistic02 + densipop02 + pibpercap02;
    printf("Estado: %s\n", estado02);
    printf("Código: %s\n", codigo02);
    printf("Nome: %s\n", cidade02);
    printf("População: %d\n", pop02);
    printf("Area km2: %.2f\n", areakm02);
    printf("PIB: %.2f\n", pib02);
    printf("Pontos Turísticos: %d\n", turistic02);
    printf("Densidade Populacional: %.2f hab/km2.\n", densipop02);
    printf("PIB Per Capta: %.4f reais.\n", pibpercap02);
    printf("Poder: %.3f.\n", power02);


    printf("Hora da batalha!\n");
    printf("Se o resultado for 1, a carta 1 venceu.\n");

    resultpop = pop01 > pop02;
    resultareakm = areakm01 > areakm02;
    resultpib = pib01 > pib02;
    resultturistic = turistic01 > turistic02;
    resultdensipop = densipop01 > densipop02;
    resultpibpercap = pibpercap01 > pibpercap02;
    resultpower = power01 > power02;

    printf("População: %d\n", resultpop);
    printf("Areakm2: %d\n", resultareakm);
    printf("PIB: %d\n", resultpib);
    printf("Pontos Turísticos: %d\n", resultturistic);
    printf("Densidade Populacional: %d\n", resultdensipop);
    printf("PIB per Capita: %d\n", resultpibpercap);
    printf("Poder: %d\n", resultpower);

    printf("FIM\n");
    return 0;
}