/***************************************
* EECS2031Z Lab2 A
* Filename: Lab2A.c
* Author: Baskhi, Tania
* Email: tbakshi@my.yorku.ca
* eecs_num: 215399462
****************************************/

#include <stdio.h>

int main(){
    printf("Enter an integer and a character separated by blank");

  int integer; 
  char c; 

 scanf("%d %c", &integer, &c);

 while( integer != -10000) {

    if (c>='0' && c<='9') {
      int sum = integer + (c-'0'); 
      printf("Character '%c' represents a digit. Sum of %d and %c is %d \n\n", c, integer, c, sum );
    }
    else{
      printf("Chracter '%c' does not represent a digit \n\n", c);
    }

  printf("Enter an integer and a character separated by blank");
  scanf("%d %c", &integer, &c);
  }
  return 0;
}


