/*
Projeto SHELL - SO
Autor: Soffner
Data: 05/2018
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <sys/wait.h>


int main(int argc, char * argv[])
{
    char comando[30];
    char *arg[3];
    int pid;
    char senha[10];
    printf("Digite a senha: \n");
    gets(senha);
    if(strcmp(senha, "fatecso") != 0)
    {
        printf("Senha incorreta! \n");
        exit(1);
    }
    for( ; ; )
    {
        printf("fatec> ");
        gets(comando);
        argv[0]=strtok(comando, "");
        argv[1]=strtok(NULL, "");
        argv[2]=NULL;
        if(strcmp(argv[0], "sair")==0)
            exit(0);
        if(strcmp(argv[0], "apagar")==0) // apagar
        {
            pid=fork();
            if(pid==0)
            {
                execlp("./apagar", "./apagar", argv[1], NULL);
            }
            else
                wait(NULL);
            continue;
        }
        if(strcmp(argv[0], "data")==0)
        {
            pid=fork();
            if(pid==0)
            {
                execlp("./data", "./data", argv[1], NULL);
            }
            else
                wait(NULL);
            continue;
        }
        if(strcmp(argv[0], "mudar")==0)
        {
            pid=fork();
            if(pid==0)
            {
                execlp("./mudar", "./mudar", argv[1], NULL);
            }
            else
                wait(NULL);
            continue;
        }
        if(strcmp(argv[0], "local")==0)
        {
            pid=fork();
            if(pid==0)
            {
                execlp("./local", "./local", argv[1], NULL);
            }
            else
                wait(NULL);
            continue;
        }
         if(strcmp(argv[0], "listar")==0)
        {
            pid=fork();
            if(pid==0)
            {
                execlp("./listar", "./listar", argv[1], NULL);
            }
            else
                wait(NULL);
            continue;
        }
         if(strcmp(argv[0], "criar")==0)
        {
            pid=fork();
            if(pid==0)
            {
                execlp("./criar", "./criar", argv[1], NULL);
            }
            else
                wait(NULL);
            continue;
        }
        if(strcmp(argv[0], "remover")==0)
        {
            pid=fork();
            if(pid==0)
            {
                execlp("./remover", "./remover", argv[1], NULL);
            }
            else
                wait(NULL);
            continue;
        }
        if(strcmp(argv[0], "dicas")==0)
        {
            pid=fork();
            if(pid==0)
            {
                execlp("./dicas", "./dicas", argv[1], NULL);
            }
            else
                wait(NULL);
            continue;
        }
	if(strcmp(argv[0], "copiar")==0)
        {
            pid=fork();
            if(pid==0)
            {
                execlp("./copiar", "./copiar", argv[1], NULL);
            }
            else
                wait(NULL);
            continue;
        }
        if(strcmp(argv[0], "creditos")==0)
        {
            pid=fork();
            if(pid==0)
            {
                execlp("./creditos", "./creditos", argv[1], NULL);
            }
            else
                wait(NULL);
            continue;
        }
       if(strcmp(argv[0], "calculadora")==0)
        {
            pid=fork();
            if(pid==0)
            {
                execlp("./calculadora", "./calculadora", argv[1], NULL);
            }
            else
                wait(NULL);
            continue;
        }
        else
        {
            printf("Comando invalido \n");
        }
    }
}
