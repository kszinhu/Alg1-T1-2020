#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <windows.h>
   /* ------BIBLIOTECAS-------- */
#define ESC 27 
#define UM 49 
#define DOIS 50 
#define TRES 51
#define QUATRO 52
#define CINCO 53
#define SEIS 54
#define SETE 55
#define OITO 56
#define NOVE 57
#define PI 3.14159265359
   /* ------DEFINICAO-------- */
void setcolor(int color){
   HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
   SetConsoleTextAttribute(hOut, color);
      return;}
   /* ------SET_COLOR-------- */
main(){
   char opcao;
   int opcao_operacao,opcao_entrada=0;
   int radianos_numerador,radianos_denominador;
   double aux,graus,graus_convertido,radianos_geral;
   double seno,cosseno,tangente,secante,cossecante,cotangente;
   double arco_seno,arco_cosseno,arco_tagente;
   /* -------DECLARANDO VARIÁVEIS-------- */
   do{
      /* -------MENU------- */
      system("cls");
         setcolor(5);
      printf("\n %c Aperte a tecla referente as opcoes em parenteses para realizar a funcao desejada:\n____________________\n\n",158);
         setcolor(5);
      printf("(1)%c",175);
         setcolor (7);
      printf(" SENO\n");
         setcolor (5);
      printf("(2)%c",175);
         setcolor (7); 
      printf(" COSSENO\n");
         setcolor (5);
      printf("(3)%c",175);
         setcolor (7);
      printf(" TANGENTE\n");
         setcolor (5);
      printf("(4)%c",175);
         setcolor (7);
      printf(" SECANTE\n");
         setcolor (5);
      printf("(5)%c",175);
         setcolor (7);
      printf(" COSSECANTE\n");
         setcolor (5);
      printf("(6)%c",175);
         setcolor (7);
      printf(" COTANGENTE\n");
         setcolor (5);
      printf("(7)%c",175);
         setcolor (7);
      printf(" ARCO SENO\n");
         setcolor (5);
      printf("(8)%c",175);
         setcolor (7);
      printf(" ARCO COSSENO\n");
         setcolor (5);
      printf("(9)%c",175);
         setcolor (7);
      printf(" ARCO TANGENTE\n");
         setcolor (5);
      printf("\n____________________\n\n");
         setcolor (5);
      printf("(ESC)>");
         setcolor (7);
      printf(" SAIR DO ALGORITMO\n",158,175,175,175,175,175,175,175,175,175);
         opcao = getch();
   /*------------------------------------------------------------------------------------------------------------------------------------------------*/
      /* -------OPCAO OPERACAO SENO------- */
      if(opcao==UM){
         system("cls");
         printf(">   FUNCAO ");
            setcolor (5);
         printf("'SENO'\n");
            setcolor (7);
         printf("____________________\n\nDigite a opcao desejada para sua entrada:\n");
            setcolor (5);
         printf("(1)>");
            setcolor (7);
         printf(" Radianos\n");
            setcolor (5);
         printf("(2)>");
            setcolor (7);
         printf(" Graus\n");
            setcolor(5);
         printf("(X)>"); 
            setcolor (7);
         printf(" Voltar\n____________________\n\n");
         opcao_entrada = getch();
            switch(opcao_entrada){
               case 49:
               /* -------OPCAO RADIANOS------- */
                  system("cls");
                     printf(">   FUNCAO ");
                        setcolor (5);
                     printf("'SENO'\n");
                      setcolor (7);
                      printf("____________________\nVoce Escolheu ");
                        setcolor(5);
                     printf("'Radianos'\n");
                        setcolor(7);
                     printf("   <> Digite o numerador (Inteiro): ");
                     scanf("%d",&radianos_numerador);
                        printf("____________________\nVoce Escolheu"); 
                           setcolor(5);
                        printf(" 'Radianos'\n");
                           setcolor(7);
                        printf("   <> Digite o denominador (Inteiro): ");
                           scanf("%d",&radianos_denominador);
                           graus_convertido=(double)radianos_numerador*180/radianos_denominador;
                           if (graus_convertido>360){
                              int graus_convertido;
                              graus_convertido=graus_convertido%(2*3);}
                           seno=sin(graus_convertido*PI/180);
                           system("cls");
                              printf("____________________\nA Funcao ");
                                 setcolor(5);
                              printf("'SENO'");
                                 setcolor(7);
                              printf(" de %g%c ou %d*Pi/%d Radianos \n   <> Equivale: %g\n",graus_convertido,167,radianos_numerador,radianos_denominador,seno);
                           if(graus_convertido==180 || graus_convertido==360){
                           system("cls");
                           printf("Funcao ");
                              setcolor(5);
                           printf("'SENO'");
                              setcolor(7);
                           printf("\n____________________\n");
                           printf("\n   %c Porem 'SENO' de %g%c Equivale a 0\n",158,graus_convertido,167);}
                           printf("____________________\n   --Aperte qualquer botao para sair");
                              getch();
                              system("cls");
                  break;
               case 50:
               /* -------OPCAO GRAUS------- */
                  system("cls");
                     printf(" >   FUNCAO ");
                        setcolor(5);
                     printf("'SENO'\n");
                        setcolor(7);
                     printf("____________________\nVoce Escolheu ");
                        setcolor(5); 
                     printf("'Graus'\n");
                        setcolor(7);
                     printf("   <> Digite sua entrada: ");
                     scanf("%lf",&graus);
                        seno=sin(graus*PI/180);
                           system("cls");
                        printf("____________________\nA Funcao ");
                                 setcolor(5);
                              printf("'SENO'");
                                 setcolor(7);
                              printf(" de %g%c \n   <> Equivale: %g\n",graus,167,seno);
                        if(graus==180 || graus==360){
                           system("cls");
                           printf("Funcao ");
                              setcolor(5);
                           printf("'SENO'");
                              setcolor(7);
                           printf("\n____________________\n");
                           printf("\n   %c Porem 'SENO' de %g%c Equivale a 0\n",158,graus,167);}
                        printf("____________________\n   --Aperte qualquer botao para sair");
                           getch();
                           system("cls");
                  break;
               default:
                  system("cls");
                  break;}}
      /*------------------------------------------------------------------------------------------------------------------------------------------------*/
      /* -------OPCAO OPERACAO COSSENO------- */  
      if(opcao==DOIS){
         system("cls");
         printf(">   FUNCAO ");
            setcolor (5);
         printf("'COSSENO'\n");
            setcolor (7);
         printf("____________________\n\nDigite a opcao desejada para sua entrada:\n");
            setcolor (5);
         printf("(1)>");
            setcolor (7);
         printf(" Radianos\n");
            setcolor (5);
         printf("(2)>");
            setcolor (7);
         printf(" Graus\n");
            setcolor(5);
         printf("(X)>"); 
            setcolor (7);
         printf(" Voltar\n____________________\n\n");
         opcao_entrada = getch();
            switch(opcao_entrada){
               case 49:
            /* -------OPCAO RADIANOS------- */
               system("cls");
                     printf(" >   FUNCAO ");
                        setcolor(5);
                     printf("'COSSENO'");
                        setcolor(7);
                     printf(" \n____________________\nVoce Escolheu ");
                        setcolor(5);
                     printf("'Radianos'\n");
                        setcolor(7);
                     printf("   <> Digite o numerador (Inteiro): ");
                     scanf("%d",&radianos_numerador);
                        printf("____________________\nVoce Escolheu"); 
                           setcolor(5);
                        printf(" 'Radianos'\n");
                           setcolor(7);
                        printf("   <> Digite o denominador (Inteiro): ");
                           scanf("%d",&radianos_denominador);
                           graus_convertido=(double)radianos_numerador*180/radianos_denominador;
                           if (graus_convertido>360){
                              int graus_convertido;
                              graus_convertido=graus_convertido%(2*3);}
                           cosseno=cos(graus_convertido*PI/180);
                              system("cls");
                        printf("____________________\nA Funcao ");
                           setcolor(5);
                        printf("'COSSENO'");
                           setcolor(7);
                        printf(" de %g%c ou %d*Pi/%d Radianos \n   <> Equivale: %g\n",graus_convertido,167,radianos_numerador,radianos_denominador,cosseno);
                     /* -------EXCESSOES------- */
                        if(graus_convertido==90 || graus_convertido==270){
                           system("cls");
                           printf("Funcao ");
                              setcolor(5);
                           printf("'COSSENO'");
                              setcolor(7);
                           printf("\n____________________\n");
                           printf("\n   %c 'COSSENO' de %g%c Equivale a 0\n",158,graus_convertido,167);}
                        printf("____________________\n   --Aperte qualquer botao para sair");
                           getch();
                              system("cls");
                  break;
               case 50:
               /* -------OPCAO GRAUS------- */
                  system("cls");
                     printf(" >   FUNCAO ");
                        setcolor(5);
                     printf("'COSSENO'");
                        setcolor(7);
                     printf("\n____________________\n");
                     printf("Voce Escolheu");
                        setcolor(5); 
                     printf(" 'Graus'\n");
                        setcolor(7);
                     printf("   <> Digite sua entrada: ");
                     scanf("%lf",&graus);
                        cosseno=cos(graus*PI/180);
                        system("cls");
                           printf("____________________\nA Funcao ");
                                 setcolor(5);
                              printf("'COSSENO'");
                                 setcolor(7);
                              printf(" de %g%c \n   <> Equivale: %g\n",graus,167,cosseno);
                     /* -------EXCESSOES------- */
                        if(graus==90 || graus==270){
                           system("cls");
                           printf("Funcao ");
                              setcolor(5);
                           printf("'COSSENO'");
                              setcolor(7);
                           printf("\n____________________\n");
                           printf("\n   %c 'COSSENO' de %g%c Equivale a 0\n",158,graus,167);}
                        printf("____________________\n   --Aperte qualquer botao para sair");
                           getch();
                           system("cls");
                  break;
               default:
                  system("cls");
                  break;}}      
      /*------------------------------------------------------------------------------------------------------------------------------------------------*/   
      /* -------OPCAO OPERACAO TANGENTE------- */  
      if(opcao==TRES){
         system("cls");
         printf(">   FUNCAO ");
            setcolor (5);
         printf("'TANGENTE'\n");
            setcolor (7);
         printf("____________________\n\nDigite a opcao desejada para sua entrada:\n");
            setcolor (5);
         printf("(1)>");
            setcolor (7);
         printf(" Radianos\n");
            setcolor (5);
         printf("(2)>");
            setcolor (7);
         printf(" Graus\n");
            setcolor(5);
         printf("(X)>"); 
            setcolor (7);
         printf(" Voltar\n____________________\n\n");
         opcao_entrada = getch();
            switch(opcao_entrada){
               case 49:
               /* -------OPCAO RADIANOS------- */
                  system("cls");
                     printf(" >   FUNCAO 'TANGENTE' \n____________________\nVoce Escolheu ");
                        setcolor(5);
                     printf("'Radianos'\n");
                        setcolor(7);
                     printf("   <> Digite o numerador (Inteiro): ");
                     scanf("%d",&radianos_numerador);
                        printf("____________________\nVoce Escolheu"); 
                           setcolor(5);
                        printf(" 'Radianos'\n");
                           setcolor(7);
                        printf("   <> Digite o denominador (Inteiro): ");
                           scanf("%d",&radianos_denominador);
                              graus_convertido=(double)radianos_numerador*180/radianos_denominador;
                        if (graus_convertido>360){
                           int graus_convertido;
                           graus_convertido=graus_convertido%(2*3);}
                        tangente=tan(graus_convertido*PI/180);
                        system("cls");
                        printf("____________________\nA Funcao ");
                           setcolor(5);
                        printf("'TANGENTE'");
                           setcolor(7);
                        printf(" de %g%c ou %d*Pi/%d Radianos \n   <> Equivale: %g\n",graus_convertido,167,radianos_numerador,radianos_denominador,tangente);
                     /* -------EXCESSOES------- */
                        if(graus_convertido==180 || graus_convertido==360){
                           system("cls");
                           printf("Funcao ");
                              setcolor(5);
                           printf("'TANGENTE'");
                              setcolor(7);
                           printf("\n____________________\n");
                           printf("\n   %c 'Tangente' de %g%c Equivale a 0\n",158,graus_convertido,167);}
                        if(graus_convertido==90 || graus_convertido==270){
                           system("cls");
                           printf("Funcao ");
                              setcolor(5);
                           printf("'TANGENTE'");
                              setcolor(7);
                           printf("\n____________________\n");
                           printf("\n   %c 'Tangente' de %g%c Nao Existe\n",158,graus_convertido,167);}
                        printf("____________________\n   --Aperte qualquer botao para sair");
                           getch();
                              system("cls");
                  break;
               case 50:
               /* -------OPCAO GRAUS------- */
                  system("cls");
                     printf(" >   FUNCAO ");
                        setcolor(5);
                     printf("'TANGENTE'");
                        setcolor(7);
                     printf("\n____________________\nVoce Escolheu ");
                        setcolor(5); 
                     printf("'Graus'\n");
                        setcolor(7);   
                     printf("<> Digite sua entrada: ");
                     scanf("%lf",&graus);
                        tangente=tan(graus*PI/180);
                        system("cls");
                        printf("____________________\nA Funcao ");
                           setcolor(5);
                        printf("'TANGENTE'");
                           setcolor(7);
                        printf(" de %g%c \n   <> Equivale: %g\n",graus,167,tangente);
                     /* -------EXCESSOES------- */
                        if(graus==180 || graus==360){
                           system("cls");
                           printf("Funcao ");
                              setcolor(5);
                           printf("'TANGENTE'");
                              setcolor(7);
                           printf("\n____________________\n");
                           printf("\n   %c 'Tangente' de %g%c Equivale a 0\n",158,graus,167);}
                        if(graus==90 || graus==270){
                           system("cls");
                           printf("Funcao ");
                              setcolor(5);
                           printf("'TANGENTE'");
                              setcolor(7);
                           printf("\n____________________\n");
                           printf("\n   %c 'Tangente' de %g%c Nao Existe\n",158,graus,167);}
                        printf("____________________\n   --Aperte qualquer botao para sair");
                           getch();
                              system("cls");
                  break;
               default:
                  system("cls");
                  break;}}   
      /*------------------------------------------------------------------------------------------------------------------------------------------------*/  
      /* -------OPCAO OPERACAO SECANTE------- */  
      if(opcao==QUATRO){
         system("cls");
         printf(">   FUNCAO ");
            setcolor (5);
         printf("'SECANTE'\n");
            setcolor (7);
         printf("____________________\n\nDigite a opcao desejada para sua entrada:\n");
            setcolor (5);
         printf("(1)>");
            setcolor (7);
         printf(" Radianos\n");
            setcolor (5);
         printf("(2)>");
            setcolor (7);
         printf(" Graus\n");
            setcolor(5);
         printf("(X)>"); 
            setcolor (7);
         printf(" Voltar\n____________________\n\n");
         opcao_entrada = getch();
            switch(opcao_entrada){
               case 49:
               /* -------OPCAO RADIANOS------- */
                  system("cls");
                  printf(" >   FUNCAO ");
                     setcolor(5);
                  printf("'SECANTE'");
                     setcolor(7);
                  printf("\n____________________\nVoce Escolheu ");
                        setcolor(5);
                     printf("'Radianos'\n");
                        setcolor(7);
                     printf("   <> Digite o numerador (Inteiro): ");
                     scanf("%d",&radianos_numerador);
                        printf("____________________\nVoce Escolheu"); 
                        printf(" 'Radianos'\n");
                        printf("   <> Digite o denominador (Inteiro): ");
                           scanf("%d",&radianos_denominador);
                        graus_convertido=(double)radianos_numerador*180/radianos_denominador;
                        if (graus_convertido>360){
                           int graus_convertido;
                           graus_convertido=graus_convertido%(2*3);}
                        cosseno=(graus_convertido*PI/180);
                        secante=1.0/cosseno;
                        system("cls");
                        printf("____________________\nA Funcao ");
                           setcolor(5);
                        printf("'SECANTE'");
                           setcolor(7);
                        printf(" de %g%c ou %d*Pi/%d Radianos \n   <> Equivale: %g\n",graus_convertido,167,radianos_numerador,radianos_denominador,secante);
                     /* -------EXCESSOES------- */
                        if(graus_convertido==90 || graus_convertido==270){
                           system("cls");
                           printf("Funcao ");
                              setcolor(5);
                           printf("'SECANTE'");
                              setcolor(7);
                           printf("\n____________________\n");
                           printf("\n   %c 'COSSENO' de %g%c Equivale a 0\n Resultando em 'SECANTE' Impossivel",158,graus_convertido,167);}
                        printf("\n____________________\n   --Aperte qualquer botao para sair");
                           getch();
                           system("cls");
                  break;
               case 50:
               /* -------OPCAO GRAUS------- */
                  system("cls");
                     printf(" >   FUNCAO ");
                        setcolor(5);
                     printf("'SECANTE'");
                        setcolor(7);
                     printf("\n____________________\nVoce Escolheu ");
                        setcolor(5); 
                     printf("'Graus'\n");
                        setcolor(7);   
                     printf("<> Digite sua entrada: ");
                     scanf("%lf",&graus);
                        cosseno=cos(graus*PI/180);
                        secante=1.0/cosseno;
                           system("cls");
                        printf("____________________\nA Funcao ");
                           setcolor(5);
                        printf("'SECANTE'");
                           setcolor(7);
                        printf(" de %g%c \n   <> Equivale: %g\n",graus,167,secante);
                     /* -------EXCESSOES------- */
                        if(graus==90 || graus==270){
                           system("cls");
                           printf("Funcao ");
                              setcolor(5);
                           printf("'SECANTE'");
                              setcolor(7);
                           printf("\n____________________\n");
                           printf("\n   %c 'COSSENO' de %g%c Equivale a 0\n Resultando em 'Secante' Impossivel",158,graus,167);}
                        printf("\n____________________\n   --Aperte qualquer botao para sair");
                           getch();
                              system("cls");
                  break;
               default:
                     system("cls");
                  break;}}   
      /*------------------------------------------------------------------------------------------------------------------------------------------------*/
      /* -------OPCAO OPERACAO COSSECANTE------- */  
      if(opcao==CINCO){
         system("cls");
         printf(">   FUNCAO ");
            setcolor (5);
         printf("'COSSECANTE'\n");
            setcolor (7);
         printf("____________________\n\nDigite a opcao desejada para sua entrada:\n");
            setcolor (5);
         printf("(1)>");
            setcolor (7);
         printf(" Radianos\n");
            setcolor (5);
         printf("(2)>");
            setcolor (7);
         printf(" Graus\n");
            setcolor(5);
         printf("(X)>"); 
            setcolor (7);
         printf(" Voltar\n____________________\n\n");
         opcao_entrada = getch();
            switch(opcao_entrada){
               case 49:
               /* -------OPCAO RADIANOS------- */
                  system("cls");
                  printf(" >   FUNCAO ");
                     setcolor(5);
                  printf("'COSSECANTE'");
                     setcolor(7);
                  printf(" \n____________________\nVoce Escolheu ");
                        setcolor(5);
                     printf("'Radianos'\n");
                        setcolor(7);
                     printf("   <> Digite o numerador (Inteiro): ");
                     scanf("%d",&radianos_numerador);
                        printf("____________________\nVoce Escolheu"); 
                           printf(" 'Radianos'\n");
                        printf("   <> Digite o denominador (Inteiro): ");
                           scanf("%d",&radianos_denominador);
                        graus_convertido=(double)radianos_numerador*180/radianos_denominador;
                        if (graus_convertido>360){
                           int graus_convertido;
                           graus_convertido=graus_convertido%(2*3);}
                        seno=sin(graus_convertido*PI/180);
                        cossecante=1.0/seno;
                           system("cls");
                        printf("____________________\nA Funcao ");
                           setcolor(5);
                        printf("'COSSECANTE'");
                           setcolor(7);
                        printf(" de %g%c ou %d*Pi/%d Radianos \n   <> Equivale: %g\n",graus_convertido,167,radianos_numerador,radianos_denominador,cossecante);
                     /* -------EXCESSOES------- */
                        if(graus_convertido==360 || graus_convertido==180 || graus_convertido==0){
                           system("cls");
                           printf("Funcao ");
                              setcolor(5);
                           printf("'COSSECANTE'");
                              setcolor(7);
                           printf("\n____________________\n");
                           printf("\n   %c Porem 'SENO' de %g%c Equivale a 0\n Resultando em 'COSSECANTE' Impossivel",158,graus_convertido,167);}
                        printf("\n____________________\n   --Aperte qualquer botao para sair");
                           getch();
                              system("cls");
                  break;
               case 50:
               /* -------OPCAO GRAUS------- */
                  system("cls");
                     printf(" >   FUNCAO ");
                        setcolor(5);
                     printf("'COSSECANTE'\n");
                        setcolor(7);
                     printf("____________________\nVoce Escolheu ");
                        setcolor(5);
                     printf("'Graus'\n");
                        setcolor(7);
                     printf("   <> Digite sua entrada: ");
                     scanf("%lf",&graus);
                        seno=sin(graus*PI/180);
                        cossecante=1.0/seno;
                           system("cls");
                        printf("____________________\nA Funcao ");
                           setcolor(5);
                        printf("'COSSECANTE'");
                           setcolor(7);
                        printf(" de %g%c \n   <> Equivale: %g\n",graus,167,cossecante);
                     /* -------EXCESSOES------- */
                        if(graus==360 || graus==180 || graus==0){
                           system("cls");
                           printf("Funcao ");
                              setcolor(5);
                           printf("'COSSECANTE'");
                              setcolor(7);
                           printf("\n____________________\n");
                           printf("\n   %c 'SENO' de %g%c Equivale a 0\n Resultando em 'COSSECANTE' Impossivel",158,graus,167);}
                        printf("\n____________________\n   --Aperte qualquer botao para sair");
                           getch();
                              system("cls");
                  break;
               default:
                     system("cls");
                  break;}}   
      /*------------------------------------------------------------------------------------------------------------------------------------------------*/
      /* -------OPCAO OPERACAO COTANGENTE------- */  
      if(opcao==SEIS){
         system("cls");
         printf(">   FUNCAO ");
            setcolor (5);
         printf("'COTANGENTE'\n");
            setcolor (7);
         printf("____________________\n\nDigite a opcao desejada para sua entrada:\n");
            setcolor (5);
         printf("(1)>");
            setcolor (7);
         printf(" Radianos\n");
            setcolor (5);
         printf("(2)>");
            setcolor (7);
         printf(" Graus\n");
            setcolor(5);
         printf("(X)>"); 
            setcolor (7);
         printf(" Voltar\n____________________\n\n");
         opcao_entrada = getch();
            switch(opcao_entrada){
               case 49:
               /* -------OPCAO RADIANOS------- */
                  system("cls");
                  printf(" >   FUNCAO ");
                     setcolor(5);
                  printf("'COTANGENTE'");
                     setcolor(7);
                  printf("\n____________________\nVoce Escolheu ");
                        setcolor(5);
                     printf("'Radianos'\n");
                        setcolor(7);
                     printf("   <> Digite o numerador (Inteiro): ");
                     scanf("%d",&radianos_numerador);
                        printf("____________________\nVoce Escolheu"); 
                           setcolor(5);
                        printf(" 'Radianos'\n");
                           setcolor(7);
                        printf("   <> Digite o denominador (Inteiro): ");
                           scanf("%d",&radianos_denominador);
                        graus_convertido=(double)radianos_numerador*180/radianos_denominador;
                        if (graus_convertido>360){
                           int graus_convertido;
                           graus_convertido=graus_convertido%(2*3);}
                        tangente=tan(graus_convertido*PI/180);
                        cotangente=1.0/tangente;
                           system("cls");
                        printf("____________________\nA Funcao ");
                           setcolor(5);
                        printf("'COTANGENTE'");
                           setcolor(7);
                        printf(" de %g%c ou %d*Pi/%d Radianos \n   <> Equivale: %g\n",graus_convertido,167,radianos_numerador,radianos_denominador,cotangente);
                     /* -------EXCESSOES------- */
                        if(graus_convertido==180 || graus_convertido==360 || graus_convertido==0){
                           system("cls");
                           printf("Funcao ");
                              setcolor(5);
                           printf("'COTANGENTE'");
                              setcolor(7);
                           printf("\n____________________\n");
                           printf("\n   %c Porem 'TANGENTE' de %d%c Equivale a 0\n Resultando em 'COTANGENTE' Impossivel",158,graus_convertido,167);}
                        if(graus_convertido==270 || graus_convertido==90){
                           system("cls");
                           printf("Funcao ");
                              setcolor(5);
                           printf("'COTANGENTE'");
                              setcolor(7);
                           printf("\n____________________\n");
                           printf("\n   %c 'TANGENTE' de %d%c 'NAO EXISTE'\n Resultando em 'COTANGENTE' Impossivel",158,graus_convertido,167);}
                        printf("\n____________________\n   --Aperte qualquer botao para sair");
                           getch();
                              system("cls");
                  break;
               case 50:
               /* -------OPCAO GRAUS------- */
                  system("cls");
                     printf(" >   FUNCAO ");
                        setcolor(5);
                     printf("'COTANGENTE'\n");
                        setcolor(7);
                     printf("____________________\nVoce Escolheu");
                        setcolor(5);
                     printf(" 'Graus'\n");
                        setcolor(7);
                      printf("   <> Digite sua entrada: ");
                     scanf("%lf",&graus);
                        tangente=tan(graus*PI/180);
                        cotangente=1.0/tangente;
                        system("cls");
                        printf("____________________\nA Funcao ");
                           setcolor(5);
                        printf("'COTANGENTE'");
                           setcolor(7);
                        printf(" de %g%c \n   <> Equivale: %g\n",graus,167,cotangente);
                        if(graus==180 || graus==360 || graus==0){
                              system("cls");
                           printf("Funcao ");
                              setcolor(5);
                           printf("'COTANGENTE'");
                              setcolor(7);
                           printf("\n____________________\n");
                           printf("\n   %c Porem 'TANGENTE' de %g%c Equivale a 0\n Resultando em 'COTANGENTE' Impossivel",158,graus,167);}
                        if(graus==270 || graus==90){
                              system("cls");
                           printf("Funcao ");
                              setcolor(5);
                           printf("'COTANGENTE'");
                              setcolor(7);
                           printf("\n____________________\n");
                           printf("\n   %c 'TANGENTE' de %g%c 'NAO EXISTE' \n Resultando em 'COTANGENTE' Impossivel",158,graus,167);}
                        printf("\n____________________\n   --Aperte qualquer botao para sair");
                           getch();
                              system("cls");
                              break;
               default:
                   system("cls");
                  break;}}   
      /*------------------------------------------------------------------------------------------------------------------------------------------------*/  
      /* -------OPCAO OPERACAO ARCO-SENO------- */  
      if(opcao==SETE){
            system("cls");
            printf(" >   FUNCAO ");
               setcolor(5);
            printf("'ARCO SENO'\n");
               setcolor(7);
            printf("____________________\n\nDigite a opcao desejada:\n");
               setcolor(5);
            printf("(1)>");
               setcolor(7); 
            printf(" Calcular \n");
               setcolor(5);
            printf("(X)>");
               setcolor(7); 
            printf(" Voltar\n____________________\n\n");
         opcao_entrada = getch();
            switch(opcao_entrada){
               case 49:
                  /* -------ENTRADA------- */
                        system("cls");
                     printf("____________________\nVoce Escolheu ");
                        setcolor(5);
                     printf("'ARCO SENO'\n");
                        setcolor(7);
                     printf("  -- Limite de 'SENO'");
                        setcolor(5);
                     printf("[-1,1] \n");
                        setcolor(7);
                     printf("   <> Digite o SENO: ");
                        scanf("%lf",&seno);
                           radianos_geral=asin(seno);
                           graus_convertido=asin(seno)*180/PI;
                              system("cls");
                        printf("____________________\nA Funcao ");
                           setcolor(5);
                        printf("'ARCO SENO'");
                           setcolor(7);
                        printf(" do Seno de: %g ou Sen(x%c) = %g \n   <> Equivale: %g radianos e/ou %g%c graus",seno,167,seno,radianos_geral,graus_convertido,167);
                        if(seno>1 || seno<-1){
                           system("cls");
                              printf("____________________\nA Funcao ");
                                 setcolor(5);
                              printf("'ARCO SENO'");
                                 setcolor(7);
                              printf(" Nao Existe, Ja que nao ha Angulo que comprove a existencia desse 'SENO'");}
                        printf("\n____________________\n   --Aperte qualquer botao para sair");
                           getch();
                              system("cls");
                              break;
                  default:
                     system("cls");
                  break;}}
      /*------------------------------------------------------------------------------------------------------------------------------------------------*/  
      /* -------OPCAO OPERACAO ARCO-COSSENO------- */  
      if(opcao==OITO){
            system("cls");
               setcolor(5);
            printf(" >   FUNCAO 'ARCO COSSENO'");
               setcolor(7);
            printf("\n____________________\n\nDigite a opcao desejada:\n");
               setcolor(5);
            printf("(1)>");
               setcolor(7); 
            printf(" Calcular \n");
               setcolor(5);
            printf("(X)>");
               setcolor(7); 
            printf(" Voltar\n____________________\n\n");
         opcao_entrada = getch();
            switch(opcao_entrada){
               case 49:
                  /* -------ENTRADA------- */
                     system("cls");
                     printf("____________________\nVoce Escolheu ");
                        setcolor(5);
                     printf("'ARCO COSSENO'\n");
                        setcolor(7);
                     printf("   <> Digite o COSSENO: ");
                        scanf("%lf",&cosseno);
                        radianos_geral=acos(cosseno);
                        graus_convertido=acos(cosseno)*180/PI;
                           system("cls");
                        printf("____________________\nA Funcao ");
                           setcolor(5);
                        printf("'ARCO COSSENO'");
                           setcolor(7);
                        printf(" do Cosseno de: %g ou Cos(x%c)= %g\n  <> Equivale: %g radianos e/ou %g%c graus",cosseno,167,cosseno,radianos_geral,graus_convertido,167);
                        if(cosseno>1 ||cosseno<-1){
                           system("cls");
                              printf("____________________\nA Funcao ");
                                 setcolor(5);
                              printf("'ARCO COSSENO'");
                                 setcolor(7);
                              printf(" Nao Existe, Ja que nao ha Angulo que comprove a existencia desse 'COSSENO'");}
                        printf("\n____________________\n   --Aperte qualquer botao para sair");
                           getch();
                              system("cls");
                              break;
                  default:
                     system("cls");
                  break;}}
      /*------------------------------------------------------------------------------------------------------------------------------------------------*/
      /* -------OPCAO OPERACAO ARCO-TANGENTE------- */  
      if(opcao==NOVE){
            system("cls");
            printf(" >   FUNCAO ");
               setcolor(5);
            printf("'ARCO TANGENTE'\n");
               setcolor(7);
            printf("____________________\n\nDigite a opcao desejada:\n");
               setcolor(5);
            printf("(1)>");
               setcolor(7);
            printf(" Calcular \n");
               setcolor(5);
            printf("(X)>");
               setcolor(7);
            printf(" Voltar\n____________________\n\n");
         opcao_entrada = getch();
            switch(opcao_entrada){
               case 49:
                  /* -------ENTRADA------- */
                        system("cls");
                     printf("____________________\nVoce Escolheu");
                        setcolor(5);
                     printf(" 'ARCO TANGENTE'\n");
                        setcolor(7);
                     printf("   <> Digite o TANGENTE: ");
                        scanf("%lf",&tangente);
                        radianos_geral=atan(tangente);
                        graus_convertido=atan(tangente)*180/PI;
                           system("cls");
                        printf("____________________\nA Funcao ");
                           setcolor(5);
                        printf("'ARCO TANGENTE'");
                           setcolor(7);
                        printf(" da Tangente de: %g ou Tan(x%c) = %g\n   <> Equivale: %g radianos e/ou %g%c",tangente,167,tangente,radianos_geral,graus_convertido,167);
                        printf("\n____________________\n   --Aperte qualquer botao para sair");
                           getch();
                              system("cls");
                              break;
                  default:
                     system("cls");
                     break;}}
   }while(opcao!=ESC);
      /*------------------------------------------------------------------------------------------------------------------------------------------------*/
      /* -------CREDITOS------- */  
      system("cls");
         printf("    > Algoritmo realizado pelos alunos <\n");
            setcolor (5);
         printf("   %c Cassiano Henrique Aparecido Rodrigues\n   %c Joao Pedro Vieira Rodrigues\n\n\n",175,175);
            setcolor (7);
               system("pause");}