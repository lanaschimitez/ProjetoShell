#include<stdio.h>
#include<unistd.h>
#include <string.h>
int main()
{
    char s[100],diretorio[30] ;
    printf("%s\n", getcwd(s, 100));
    printf("Digite o nome da pasta: ");
    gets(diretorio);
    strcat(diretorio, "/");
    chdir(diretorio);
    printf("%s\n", getcwd(s, 100));
    return 0;
}
