#include <stdio.h>
#include <stdlib.h>
#include <sys/unistd.h>
#include <unistd.h>
#include <string.h>

int main()
{
char ch, arquivo_origem[20], destino_arquivo[20];
FILE *origem, *destino;
printf("Nome de arquivo para copiar\n");
gets(arquivo_origem);
origem = fopen(arquivo_origem,"r");
if (origem == NULL)
{
printf("Problema ao copiar o arquivo. Refaça a operação.in");
exit(EXIT_FAILURE);
}
printf("Nome da copia\n");
gets(destino_arquivo);
destino =fopen(destino_arquivo, "w");
if (destino == NULL)
{
fclose(origem);
printf("Problema ao copiar o arquivo. Refaça a operação \n");
exit(EXIT_FAILURE);
}
while ((ch =fgetc(origem)) != EOF)
fputc(ch, destino);
printf("Arquivo Copiado\n");
fclose(origem);
fclose(destino);
return 0;
}
