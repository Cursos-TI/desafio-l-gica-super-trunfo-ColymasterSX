#include <stdio.h>
  
  int main(){
  
  //estou apresentando as variaves do codego
      char estado1[20], estado2[20];
      char code1[20], code2[20];
      char cidade1[20], cidade2[20];
      int populacao1, populacao2;
      int atributo1, atributo2;
      float kilometros1, kilometros2;
      float PIB1, PIB2;
      int pontosTuristicos1, pontosTuristicos2;
      float DensidadePopulacional1, DensidadePopulacional2;
      float PIBperCapita1, PIBperCapita2;
      float SuperPoder1, SuperPoder2;
      int resultado1, resultado2;
 
  // introdução,e como o usuario deve digita as infomarçoes pra nao da errdo
      printf("===cadastramentos das cartas do Super Trunfo===\n");
      printf(" (carta 1) e (carta 2)\n");
      printf("As informações deve ser escrita tudo junto,sem spaço e sem acentuação pra nao erros.\n");
      printf("\n");
  
      //codego pra receber as informações da primeira carta do jogo do Super Trunfo
      printf("(carta 1)\n");
      printf("\n");
  
      printf("Nome do Estado: ");//printf e scanf,para receber as informação do nome do Estado (card 1)
      scanf("%s", estado1);
  
      printf("Codego da Carta(letra que reprensenta o estado com o numero de 01 a 04): ");//printf e scanf, para  receber informação do Code da Carta (card 1)
      scanf("%s", code1);
  
      printf("Nome da Cidade: ");//printf e scanf,para receber informação do nome da cidade (card 1)
      scanf("%s", cidade1);
  
      printf("Numero da População da cidade: ");//printf e scanf,para receber as informação da População (card 1)
      scanf("%d", &populacao1);
  
      printf("Area da Cidade em km²: ");//printf e scanf,para receber as informação da Area em km² (card 1)
      scanf("%f", &kilometros1);
  
      printf("O PIB da cidade: ");//printf e scanf,para receber as informação do PIB (card 1)
      scanf("%f", &PIB1);
  
      printf("Quantidades de pontos turisticos da cidade: ");//printf e scanf,para receber as informação quantidades de Pontos Turisticos (card 1)
      scanf("%d", &pontosTuristicos1);
      printf("\n");
  
      //codego pra receber as informações segunda carta  do jogo do Super Trunfo
      printf("(carta 2)\n");
      printf("\n");
  
      printf("Nome do Estado: ");//printf e scanf,para receber as informação do nome do Estado (card 2)
      scanf("%s", estado2);
  
      printf("Codego da Carta(letra que reprensenta o estado com o numero de 01 a 04): ");//printf e scanf, para  receber informação do Code da Carta (card 2)
      scanf("%s", code2);
  
      printf("Nome da Cidade: ");//printf e scanf,para receber informação do nome da cidade (card 2)
      scanf("%s", cidade2);
  
      printf("Numero da População da cidade: ");//printf e scanf,para receber as informação da População (card 2)
      scanf("%d", &populacao2);
  
      printf("Area da Cidade em km²: ");//printf e scanf,para receber as informação da Area em km² (card 2)
      scanf("%f", &kilometros2);
  
      printf("O PIB da cidade: ");//printf e scanf,para receber as informação do PIB (card 2)
      scanf("%f", &PIB2);
  
      printf("Quantidades de pontos turisticos da cidade: ");//printf e scanf,para receber as informação quantidades de Pontos Turisticos (card 2)
      scanf("%d", &pontosTuristicos2);
      printf("\n");
 
 //calculo das 3 variaves densidade populacional e PIB per capita e super poder
 
     DensidadePopulacional1 = ((float)populacao1 / kilometros1);// calcolando da densidade transformando o valor de inteiro da população em ponto flutuante (card 1)
     PIBperCapita1 = ((float)PIB1 / populacao1);//calco da PIB per capita o valor de inteiro da população em ponto flutuante (card 1)
 
     DensidadePopulacional2 = ((float)populacao2 / kilometros2);//calcolando da densidade transformando o valor de inteiro da população em ponto flutuante (card 2)
     PIBperCapita2 = ((float)PIB2 / populacao2);//calcolando da PIB per capita o valor de inteiro da população em ponto flutuante (card 2)
 
     SuperPoder1 = ((float)populacao1 + kilometros1 + PIB1 + PIBperCapita1 + (DensidadePopulacional1 / 1) + pontosTuristicos1);//calculo do super poder (card 1)
     SuperPoder2 = ((float)populacao2 + kilometros2 + PIB2 + PIBperCapita2 + (DensidadePopulacional2 / 1) + pontosTuristicos2);//calculo do super poder (card 2)
 
 //codego para o menu do jogo,contendo as informações de como funciona o jogo e,a escolha de qual atributo vai comparar
    printf("---vamos inicia o confronto das cartas do jogo Super Trunfo---\n");   
    printf(">>> O jogo funciona da seguinte maneira caro jogador <<<\n");
    printf(">> A carta que diver maio valor que a outra carta, ganha a Batalha <<\n");
    printf(">> Exeto a Densidade Populacional,que ganha se o valor for menor que da outra carta <<\n");
    printf(">> temos tambem o Super Poder,que é a soma de todos os atributos,ganhar o maio valor <<\n");
    printf(">> Vence ser ganhar 2 comparação, 1 comparação impata,0 comparação perde <<");
    printf("--- Sem mais enrolação,vamos jogar ---\n");
    printf("\n");

    printf("--- Escolha com gual atributo vai comparar ---\n");
    printf("\n");

    printf("> (População) digite 1\n");
    printf("> (Area) digite 2\n");
    printf("> (PIB) digite 3\n");
    printf("> (Pontos Turisticos) digite 4\n");
    printf("> (Densidade Populacional) digite 5\n");
    printf("> (PIB per capita) digite 6\n");
    printf("> (Super poder) digite 7\n");
    printf("Atributo escolhido: ");
    scanf("%d", &atributo1);// ta recebendo o valor da variavel atributo para o switch
    printf("\n");

    switch (atributo1)
    {
    case 1:
        printf("Escolheu População\n");
        resultado1 = populacao1 > populacao2 ? 1 : 0;
    break;
    case 2:
     printf("Escolheu Area\n");
     resultado1 = kilometros1 > kilometros2 ? 1 : 0;
    break;
    case 3:
     printf("Escolheu PIB\n");
     resultado1 = PIB1 > PIB2 ? 1 : 0;
    break;
    case 4:
     printf("Escolheu Pontos Turisticos\n");
     resultado1 = pontosTuristicos1 > pontosTuristicos2 ? 1 : 0;
    break;
    case 5:
     printf("Escolheu Desindade Populacional\n");
     resultado1 = DensidadePopulacional1 < DensidadePopulacional2 ? 1 : 0;
    break;
    case 6:
     printf("Escolheu PIB per Capita\n");
     resultado1 = PIBperCapita1 > PIBperCapita2 ? 1 : 0;
    break;
    case 7:
     printf("Escolheu Super Poder\n");
     resultado1 = SuperPoder1 > SuperPoder2 ? 1 : 0;
    break;
    }
    printf("\n");

    printf("Escolha a segunda comparação(tem que ser difente da primeira)\n");
    printf("Segundo atributo escolhido: ");
    scanf("%d", &atributo2);
    printf("\n");

    if (resultado1 == resultado2)
    {
       printf("*** E o mesmo atributo do primeiro ***\n");
    }else{
        switch (atributo2)
    {
    case 1:
      printf("Escolheu População\n");
      resultado2 = populacao1 > populacao2 ? 1 : 0;
    break;
    case 2:
      printf("Escolheu Area\n");
      resultado2 = kilometros1 > kilometros2 ? 1 : 0;
    break;
    case 3:
      printf("Escolheu PIB\n");
      resultado2 = PIB1 > PIB2 ? 1 : 0;
    break;
    case 4:
      printf("Escolheu Pontos Turisticos\n");
      resultado2 = pontosTuristicos1 > pontosTuristicos2 ? 1 : 0;
    break;
    case 5:
      printf("Escolheu Desindade Populacional\n");
      resultado2 = DensidadePopulacional1 < DensidadePopulacional2 ? 1 : 0;
    break;
    case 6:
      printf("Escolheu PIB per Capita\n");
      resultado2 = PIBperCapita1 > PIBperCapita2 ? 1 : 0;
    break;
    case 7:
      printf("Escolheu Super Poder\n");
      resultado2 = SuperPoder1 > SuperPoder2 ? 1 : 0;
    break;
    }
    }
    
    if (resultado1 && resultado2)
    {
       printf("--- Você venceu parabens ---");
    }else if (resultado1 != resultado2)
    {
       printf("--- Deu impate ---");
    }else{
        printf("--- Você perdeu ---");
    }
    
    
      return 0;
  }