/***************************************
* EECS2031Z Lab2 D
* Filename: LabD.c
* Author: Baskhi, Tania
* Email: tbakshi@my.yorku.ca
* eecs_num: 215399462
****************************************/
#include <stdio.h>
#include <string.h>

int main () {
      int c;
      int i =0; 
      int digit[10];

      for (i=0; i< 10; i++){
            digit[i]=0;
      }
      while((c=getchar())!= EOF)  {
            if(c>='0' && c<='9') {
                  digit[c-'0'] ++;
            }      
      }
     
      for (i=0; i< 10; i++) {
            printf("%d: %d\n", i,digit[i] );
      }
      return 0;

}