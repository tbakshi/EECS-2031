/***************************************
* EECS2031Z Lab2 C
* Filename: LabC.c
* Author: Baskhi, Tania
* Email: tbakshi@my.yorku.ca
* eecs_num: 215399462
****************************************/
#include <stdio.h>
#include<string.h>

int main () {
  char s='a';
  char msg[]="Hello";
  int i=0; 
  int ap = 0;
  printf(" \"%s\" contains %d characters, but the memory of size is %d (bytes) \n", msg, (int)strlen(msg), (int)sizeof(msg));

  printf("Enter a word and a character spearated by blank:");
  scanf("%s %c",msg,&s);

  while( (strcmp(msg, "quit")))  {
    for(i=0; i< strlen(msg); i++){
      if((msg[i] == s)){ 
        printf("Input  word is \"%s\". Contarins %d characters. Index of '%c' in it is %d\n",msg, (int)strlen(msg), s, i);
      ap = 1;
      break;
            }
      }
      if (ap == 0) { 
      printf("Input  word is \"%s\". Contarins %d characters. Index of '%c' in it is -1\n",msg, (int)strlen(msg), s);
       }
     ap = 0;
 printf("Enter a word and a character spearated by blank:");
  scanf("%s %c",msg,&s);
  
  }
  return 0;
}
