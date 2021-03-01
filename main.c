//LINGUAGEM C

//AULA 2.3

//PROFESSOR ANDERSON DINIZ

//Site: https://sites.google.com/site/codigosdasaulas/

//Calcula a soma de um intervalo entre dois números

//7 + 8 + 9 + 10 = 34  8 + 9 + 10 = 27    7 + 8 + 9 = 24    8 + 9 = 17

//Operador lógico && (e) 

//se x > y e y < z   if    &&

//Operador de atribuição = (x = y)

//Operador relacional == (Se x == y) Comparação

//Operador de incremento ++ (i++ / i = i + 1)



// \n pula linha



//Código ASCII

//American Standard Code for Information Interchange

//Código Padrão Americano para o Intercâmbio de Informação

//161  í

// 163 ú





//Teclas úteis



//ctrl + f9 Só compila

//f9 Compila e executa

//ctrl + f10 Só executa a última compilação

//shift + tab  Tabulação para a esquerda



// Bibliotecas



#include <stdio.h> //Comandos

#include <stdlib.h> //System



//Função é um grupo de intruções (comandos)

//Função principal. É onde o programa começa a ser executado

//Parênteses indicam que é uma função



int main()

{

      //Declaração de variáveis

      

      int contador,  soma = 0, numero1, numero2, menor, maior;

      char primeiro, segundo; 

      

      

 //Leitura dos dados

 //Quebra de linha em string

        

        

       printf(" *** Soma dos numeros de um intervalo "

       "entre dois numeros ***");

       printf("\n\nDigite um numero do intervalo:\n\n");

       scanf("%d", &numero1);

       printf("\n\nDigite outro numero do intervalo:\n\n");

       scanf("%d", &numero2);

       printf("\n\nDeseja que o primeiro numero seja incluido "

       "na soma, s / n?\n\n");

       scanf(" %c", &primeiro);

       printf("\n\nDeseja que o segundo numero seja incluido "

       "na soma, s / n?\n\n");

       scanf(" %c", &segundo);

       

       //Verificar qual é o menor e o maior

   

               

               

               //7      5      

       if (numero1 < numero2)

       {

         menor = numero1;

         maior = numero2;

       }

       else

       {        //5          5   

         menor = numero2;

         maior = numero1;

       }

       

       

       

       //Atribuição do valor de uma variável para outra

       

       //5            5

       numero1 = menor;

       //7            7

       numero2 = maior;

       //5           5

       contador = numero1; 

       

       //Cálculos

                    //s      s                    s       s

       if (primeiro == 's' && segundo == 's')

       {                // 5       5           5          7

                        // 6       5           6          7

                        // 7       5           7          7

              while (contador >= numero1 && contador <= numero2)

              { 

             // 5      0        5

             // 11      5        6

             // 18     11        7

              soma = soma + contador;

              // 6

              // 7

              // 8

              contador++;

              }

       }

 

      if (primeiro == 'n' && segundo == 's')

       {      

              contador++;

              while (contador > numero1 && contador <= numero2)

              {

              soma = soma + contador;

              contador++;

              }

       }     

       if (primeiro == 'n' && segundo == 'n')

       {      

              contador++;

              while (contador > numero1 && contador < numero2)

              {

              soma = soma + contador;

              contador++;

              } 

       }





       if (primeiro == 's' && segundo == 'n')

       {      

              

              while (contador >= numero1 && contador < numero2)

              {

              soma = soma + contador;

              contador++;

              }

       }

      

     printf("\n\nSoma dos numeros de %d a %d: %d. \n\n", numero1, numero2, soma);

     //          Soma dos números de 5 a 7: 18.

     printf("\n\n\n");

     system("PAUSE"); //Faz uma pausa até que uma tecla seja digitada

}

