#include <stdio.h>
  
  int main(){
  
  //estou apresentando as variaves do codego
      char estado1[20], estado2[20];
      char code1[20], code2[20];
      char cidade1[20], cidade2[20];
      int populacao1, populacao2, atributo;
      float kilometros1, kilometros2;
      float PIB1, PIB2;
      int pontosTuristicos1, pontosTuristicos2;
      float DensidadePopulacional1, DensidadePopulacional2;
      float PIBperCapita1, PIBperCapita2;
      float SuperPoder1, SuperPoder2;
 
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
    printf("Tema escolhido: ");
    scanf("%d", &atributo);// ta recebendo o valor da variavel atributo para o switch
    printf("\n");

    //lihas de codegos representando a comparação dos atributos das carta,com a escolha do atributo que o jogador escolheu comparar
     switch (atributo)
     {
     case 1:
        if (populacao1 > populacao2)//codego se a carta 1 vencer
        {
            printf("--- carta 1 ---\n");
            printf("Cujo o Estado: %s, com a População: %d\n",estado1, populacao1);
            printf("*** Foi a Vencedora ***\n");

        } else if (populacao1 < populacao2)//codego se a carta 2 vencer
        {
            printf("--- carta 2 ---\n");
            printf("Cujo o Estado: %s, com a População: %d\n",estado2, populacao2);
            printf("*** Foi a Vencedora ***\n");

        } else //codego se der impate
        {
            printf("--- AS carta 1 e 2 ---\n");
            printf("*** Deram impate pos os atributos tem o mesmo valor ***\n");
        }
        break;

        case 2:
        if (kilometros1 > kilometros2)//codego se a carta 1 vencer
        {
            printf("--- carta 1 ---\n");
            printf("Cujo o Estado: %s, com a Area: %.3f\n",estado1, kilometros1);
            printf("*** Foi a Vencedora ***\n");

        } else if (kilometros1 < kilometros2)//codego se a carta 2 vencer
        {
            printf("--- carta 2 ---\n");
            printf("Cujo o Estado: %s, com a Area: %.3f\n",estado2, kilometros2);
            printf("*** Foi a Vencedora ***\n");

        } else//codego se der impate
        {
            printf("--- AS carta 1 e 2 ---\n");
            printf("*** Deram impate pos os atributos tem o mesmo valor ***\n");
        }
        break;

        case 3:
        if (PIB1 > PIB2)//codego se a carta 1 vencer
        {
            printf("--- carta 1 ---\n");
            printf("Cujo o Estado: %s, com a PIB: %.3f\n",estado1, PIB1);
            printf("*** Foi a Vencedora ***\n");

        } else if (PIB1 < PIB2)//codego se a carta 2 vencer
        {
            printf("--- carta 2 ---\n");
            printf("Cujo o Estado: %s, com a PIB: %.3f\n",estado2, PIB2);
            printf("*** Foi a Vencedora ***\n");

        } else//codego se der impate
        {
            printf("--- AS carta 1 e 2 ---\n");
            printf("*** Deram impate pos os atributos tem o mesmo valor ***\n");
        }
        break;

        case 4:
        if (pontosTuristicos1 > pontosTuristicos2)//codego se a carta 1 vencer
        {
            printf("--- carta 1 ---\n");
            printf("Cujo o Estado: %s, com a Pontos Turisticos: %d\n",estado1, pontosTuristicos1);
            printf("*** Foi a Vencedora ***\n");

        } else if (pontosTuristicos1 < pontosTuristicos2)//codego se a carta 2 vencer
        {
            printf("--- carta 2 ---\n");
            printf("Cujo o Estado: %s, com a Pontos Turisticos: %d\n",estado2, pontosTuristicos2);
            printf("*** Foi a Vencedora ***\n");

        } else//codego se er impate
        {
            printf("--- AS carta 1 e 2 ---\n");
            printf("*** Deram impate pos os atributos tem o mesmo valor ***\n");
        }
        break;

        case 5:
        if (DensidadePopulacional1 < DensidadePopulacional2)//codego se a carta 1 vencer
        {
            printf("--- carta 1 ---\n");
            printf("Cujo o Estado: %s, com a Densidade Populacional: %.3f\n",estado1, DensidadePopulacional1);
            printf("*** Foi a Vencedora ***\n");

        } else if (DensidadePopulacional1 > DensidadePopulacional2)//codego se a carta 2 vencer
        {
            printf("--- carta 2 ---\n");
            printf("Cujo o Estado: %s, com a Densidade Populacional: %.3f\n",estado2, DensidadePopulacional2);
            printf("*** Foi a Vencedora ***\n");

        } else//coego ser der impate
        {
            printf("--- AS carta 1 e 2 ---\n");
            printf("*** Deram impate pos os atributos tem o mesmo valor ***\n");
        }
        break;

        case 6:
        if (PIBperCapita1 > PIBperCapita2)//codego se a carta 1 vencer
        {
            printf("--- carta 1 ---\n");
            printf("Cujo o Estado: %s, com a PIB per Capita: %.3f\n",estado1, PIBperCapita1);
            printf("*** Foi a Vencedora ***\n");

        } else if (PIBperCapita1 < PIBperCapita2)//codego se a carta 2 vencer
        {
            printf("--- carta 2 ---\n");
            printf("Cujo o Estado: %s, com a PIB per Capita: %.3f\n",estado2, PIBperCapita2);
            printf("*** Foi a Vencedora ***\n");

        } else//codego ser der imapate
        {
            printf("--- AS carta 1 e 2 ---\n");
            printf("*** Deram impate pos os atributos tem o mesmo valor ***\n");
        }
        break;

        case 7:
        if (SuperPoder1 > SuperPoder2)//codego se a carta 1 vencer
        {
            printf("--- carta 1 ---\n");
            printf("Cujo o Estado: %s, com o Super Poder: %.3f\n",estado1, SuperPoder1);
            printf("*** Foi a Vencedora ***\n");

        } else if (SuperPoder1 < SuperPoder2)//codego se a carta 2 vencer
        {
            printf("--- carta 2 ---\n");
            printf("Cujo o Estado: %s, com o Super Poder: %.3f\n",estado2, SuperPoder2);
            printf("*** Foi a Vencedora ***\n");

        } else//codego ser der imapate
        {
            printf("--- AS carta 1 e 2 ---\n");
            printf("*** Deram impate pos os atributos tem o mesmo valor ***\n");
        }
        break;

     default://codego ser caso o valor da variavel nao corresponde com nenhum dos numeros acima
        printf("--- Opção invalida ---");
        break;
     }
      return 0;
  }