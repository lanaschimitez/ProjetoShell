#include <stdio.h>
#include <stdlib.h>
#include <sys/unistd.h>
#include <unistd.h>
#include <string.h>

int main(void)
{
char diretorio[30];
printf("Digite o nome do diretorio: \n");
gets(diretorio);
strcat(diretorio, "/");
if(rmdir(diretorio) == 0)
{
printf("\nDiretorio apagado com sucesso \n");
}
else
{
printf("Erro ao apagar o arquivo \n");
}
}
