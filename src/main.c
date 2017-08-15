/* Contador de palavras
 *
 * Este programa recebera uma serie de caracteres representando palavras em sua
 * entrada. Ao receber um caractere fim de linha ('\n'), deve imprimir na tela o
 * numero de palavras separadas que recebeu e, apos, encerrar.
 */

#include <stdio.h>

int main()
{
    char c=0;
    int espaco_atual = 0, letra_atual = 0, numero_atual = 0, virgula_atual = 0, ponto_atual = 0;
    int espaco_anterior = 0, letra_anterior = 0, numero_anterior = 0, virgula_anterior = 0, ponto_anterior = 0;
    int palavra=0;

    while (c != '\n')
    {
         scanf("%c", &c);

         if (c == 32 || c == 33 || (c >= 44 && c <= 46) )   /*Condicaoo para o programa filtrar as letras de acordo com o códio ASCII
            espaco_atual = 1;

         if (c == 44)           /*Condicao para o programa filtrar virgula de acordo com o Codigo ASCII*/
            virgula_atual = 1;

         if (c == 42)           /*Condicao para o programa filtrar ponto de acordo com o Codigo ASCII*/
            ponto_atual = 1;

         if (( c >=65  &&  c <= 90) || ( c >=97 && c <= 122)) /*Condicao para o programa fitrar letra letra maiuscula e minuscula de acordo com o Codigo ASCII*/
            letra_atual = 1;

         if (c>= 48 && c <= 57) /*Condicao para o programa filtrar os numeros de 0-9 de acordo com o Codigo ASCII*/
            numero_atual = 1;

         if (letra_atual == 1 && letra_anterior == 0)
            palavra++;

         if (numero_atual == 1 && numero_anterior == 0)
            palavra++;

         if (numero_atual ==1 && ponto_anterior==0 && numero_anterior ==0 && virgula_anterior==0 && espaco_anterior == 0)
            palavra++ ;

        /*Apos o programa realizar a leitura do caractere, ele atualiza as variaveis de referencia*/
        letra_anterior = letra_atual;
        espaco_anterior = espaco_atual;
        numero_anterior = numero_atual;
        ponto_anterior = ponto_atual;
        virgula_anterior = virgula_atual;

        /*Por fim, zera a variaveis de estado para que elas possam adquirir novos valores apos a leitura de um novo caracter*/
        letra_atual   = 0;
        espaco_atual  = 0;
        numero_atual  = 0;
        virgula_atual = 0;
        ponto_atual   = 0;
    }

        //Impressao da quantidade de palavras contadas
   printf ("%d\n", palavra);
   return 0;
 }
