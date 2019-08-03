/***************************************
* EECS2031Z Lab1 G
* Filename: Lab1G.c
* Author: Baskhi, Tania
* Email: tbakshi@my.yorku.ca
* eecs_num: 215a399462
****************************************/
#include <stdio.h>

int main(){
  int c = getchar();
  int count =0;
  int lines=0; 
  while( c != EOF)
  {
    if (c =='\n') {
        lines++;
      }
    else{
        count++;
    }
    c = getchar();

  }

printf("# of chars: %d\n", count);
printf("# of lines: %d\n", lines);

}