#include <unistd.h>
#include <stdio.h>
#include <string.h>

int main()
{
    char dir[200];	
    printf("\ndigite o nome da pasta:  ");
    gets(dir);
    strcat(dir, "/");
    printf("\npasta criada com sucesso\n");
    mkdir(dir, 7000);
    return 0;
}
