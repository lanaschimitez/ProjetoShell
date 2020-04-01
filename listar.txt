#include<stdio.h>
#include <stdlib.h>
#include <sys/unistd.h>
#include <unistd.h>
#include <string.h>
#include <dirent.h>
int main(void)
{
    char diretorio[100];
    DIR *dir;
    struct dirent *dent;
    dir = opendir(getcwd(diretorio,100));

    if(dir!=NULL)
    {
        while((dent=readdir(dir))!=NULL)
        {
 if((strcmp(dent->d_name,".")==0 || strcmp(dent->d_name,"..")==0 || (*dent->d_name) == '.' ))
            {
            }
            else
            {
                printf(dent->d_name);
                printf("\n");
            }
        }
    }
    close(dir);
}  
