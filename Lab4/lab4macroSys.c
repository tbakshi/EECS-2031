/***************************************
* CSE2031Z – Lab4 
* Filename: lab4macroSys.c 
* Author: Bakshi, Tania
* Email: tbakshi@my.yorku.ca 
* eecs_username: tbakshi
* York num: 215399462
****************************************/
#include <stdio.h>
#include <stdlib.h>

#define SIZE 6
#define CUBE(x)  (x) * (x) * (x)


int main(int argc, char *argv[])
{
    int arr[SIZE];
    int m=4; 
    int n = 3;

    int ii= CUBE(m);
    printf("%d -> %d\n", m, ii);
    ii = CUBE(n);
    printf("%d -> %d\n", n, ii);
    ii = CUBE(m+n);
    printf("%d -> %d\n", m+n, ii);
    printf("This is file %s, line %d, run on  %s %s\n",__FILE__, __LINE__,__DATE__, __TIME__);
    system("ls -l");
    system("mkdir xxx");
    printf("%s", "\n");
   system("mkdir xxx/xxx2");
    system("ls -lR"); 
    system("rm -r xxx");
    system("ls -lR");

}