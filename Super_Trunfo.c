#include <stdio.h>

int main(){
    // Versão 1.5.0
    int menu;
    //carta 1
    char estado01[20];
    //Nome de um estado brasileiro
    char codigo01[5];
    //exemplo de código: A01
    char cidade01[20];
    unsigned long int pop01;
    float areakm01;
    float pib01;
    int turistic01;
    float densipop01;
    float pibpercap01;
    double power01;


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
    double power02;

//variáveis de comparação

    int resultpop;
    int resultareakm;
    int resultpib;
    int resultturistic;
    int resultdensipop;
    int resultpibpercap;
    int resultpower;

//   **  início  **

    printf("Seja bem vindo (a) ao jogo Super Trunfo!\n");
    printf("1. Iniciar.\n");
    printf("2.Regras\n");
    printf("3.Sair.\n");
    printf("Escolha uma opção: ");
    scanf("%d", &menu);
    switch (menu)
    {
    case 1:
        // PRIMEIRA CARTA

        printf("Vamos criar sua primeira carta!\n");

        printf("Digite o nome do estado (sem espaço ou acentuação): ");
        scanf("%s", &estado01);

        printf("Digite o código da carta, (exemplo A01, máximo de 5 caracteres): ");
        scanf("%s", &codigo01);

        printf("Digite o nome da cidade (sem espaço ou acentuação): ");
        scanf("%s", &cidade01);

        printf("Digite o número de cidadãos: ");
        scanf("%u", &pop01);

        printf("Digite o tamanho da cidade em km2 (até 2 casas decimais): ");
        scanf("%f", &areakm01);

        printf("Digite o PIB (até 2 casas decimais): ");
        scanf("%f", &pib01);

        printf("Digite o número de pontos turísticos: ");
        scanf("%i", &turistic01);

        printf("Veja as informações da sua primeira carta: \n");

        densipop01 = (double) pop01 / (double) areakm01;
        pibpercap01 = (double) pib01 / (double) pop01;
        power01 = (double) pop01 + (double) areakm01 + (double) pib01 + (double) turistic01 + (double) densipop01 + (double) pibpercap01;
        printf("Estado: %s\n", estado01);
        printf("Código: %s\n", codigo01);
        printf("Cidade: %s\n", cidade01);
        printf("População: %u\n", pop01);
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
        scanf("%u", &pop02);

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
        printf("População: %u\n", pop02);
        printf("Area km2: %.2f\n", areakm02);
        printf("PIB: %.2f\n", pib02);
        printf("Pontos Turísticos: %d\n", turistic02);
        printf("Densidade Populacional: %.2f hab/km2.\n", densipop02);
        printf("PIB Per Capta: %.4f reais.\n", pibpercap02);
        printf("Poder: %.3f.\n", power02);

        // RESULTADO

        printf("Hora do vamo vê!\n");

        resultpop = pop01 > pop02;
        resultareakm = areakm01 > areakm02;
        resultpib = pib01 > pib02;
        resultturistic = turistic01 > turistic02;
        resultdensipop = densipop01 > densipop02;
        resultpibpercap = pibpercap01 > pibpercap02;
        resultpower = power01 > power02;

        
        if(resultpop == 1){
            printf("População: Carta 1 (%s, %s)\n", cidade01, codigo01);
        }else{
            printf("População: Carta 2 (%s, %s)\n", cidade02, codigo02);
        }
        if(resultareakm == 1){
            printf("Areakm2: Carta 1 (%s, %s)\n", cidade01, codigo01);
        }else{
            printf("Areakm2: Carta 2 (%s, %s)\n", cidade02, codigo02);
        }
        if(resultpib == 1){
            printf("PIB: Carta 1 (%s, %s)\n", cidade01, codigo01);
        }else{
            printf("PIB: Carta 2 (%s, %s)\n", cidade02, codigo02);
        }
        if(resultturistic == 1){
            printf("Pontos Turísticos: Carta 1 (%s, %s)\n", cidade01, codigo01);
        }else{
            printf("Pontos Turísticos: Carta 2 (%s, %s)\n", cidade02, codigo02);
        }
        if(resultdensipop == 1){
            printf("Densidade Populacional: Carta 1 (%s, %s)\n", cidade01, codigo01);
        }else{
            printf("Densidade Populacional: Carta 2 (%s, %s)\n", cidade02, codigo02);
        }
        if(resultpibpercap == 1){
            printf("PIB Per Capta: Carta 1 (%s, %s)\n", cidade01, codigo01);
        }else{
            printf("PIB Per Capta: Carta 2 (%s, %s)\n", cidade02, codigo02);
        }
        if(resultpower == 1){
            printf("Poder: Carta 1 (%s, %s)\n", cidade01, codigo01);
        }else{
            printf("Poder: Carta 2 (%s, %s)\n", cidade02, codigo02);
        }
        printf("FIM\n");
        return 0;
        break;
    case 2:
        printf("Escolha apenas estados brasileiros.\n");
        printf("Atenção às limitações para cada atributo das cartas.\n");
        break;
    case 3:
        printf("Até a próxima!");
        return 0;
        break;
    default:
        printf("Inválido");
        break;
    }
    
}