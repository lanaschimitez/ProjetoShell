#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1=0, num2=0, soma=0, subtracao=0, multi=0, div=0, esc=0;
    printf("\nDigite um numero: ");
    scanf("%i", &num1);
    printf("\nDigite outro numero: ");
    scanf("%i", &num2);
    printf("O que voce deseja fazer?");
    printf ("\n1- somar\n2-subtracao\n3-multiplicacao\n4-divisao\n");
    scanf("%i", &esc);
    switch (esc)
{
    case 1:
    soma = num1 + num2;
    printf( "A soma e: %i\n", soma );
    break;
case 2:
    subtracao = num1 - num2;
    printf( "A subtracao e: %i\n", subtracao );
    break;
case 3:
    multi = num1 * num2;
    printf( "O produto e: %i \n", multi );
    break;
case 4:
    div = num1 / num2;
    printf( "A divisão e: %i \n", div );
break;
     default :
    printf ("Valor invalido!\n");
break;
}
    return 0;
}
