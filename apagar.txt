#include <stdio.h>
#include <stdlib.h>
#include <sys/unistd.h>
#include <unistd.h>
#include <string.h>
int main(void)
{
char arquivo[30];
printf("Digite o nome do arquivo: \n");
gets(arquivo);
if(unlink(arquivo) == 0)
{
printf("Arquivo apagado com sucesso \n");
}
else
{
printf("Erro ao apagar o arquivo \n");
}
}
