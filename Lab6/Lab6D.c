/***************************************
* EECS2031Z – Lab 6D *
* Author: Bakshi, Tania*
* Email: tbakshi@my.yorku.ca *
* eecs_num: tbakshi *
* York #: 215399462
****************************************/

#include <stdio.h>
#include <stdlib.h>

int getSum(char *a[], int n) {
   int i = 0, sum=0;
  
   while( i < n )  {
       sum += atoi(a[i]) ;
       i++;
   }
   return sum;
}

int getSumP(char **a, int n) {
   int i = 0, sum = 0;
  
   while( i < n )    {
       sum += atoi(a[i]) ;
       i++;
   }
   return sum;
}

void main(int argc, char *argv[]){
   int i=1, sum1, sum2;
  
   printf("%d arguments excluding \"a.out\"\n",argc-1);
   while( i < argc-1 ) {
       printf("%s + ",argv[i]);
       i++;
   }


   printf("%s\n",argv[i]);
   sum1 = getSum(&argv[1], argc-1);
   sum2 = getSumP(&argv[1], argc-1);
   printf("=%d\n=%d\n\n",sum1,sum2);
}