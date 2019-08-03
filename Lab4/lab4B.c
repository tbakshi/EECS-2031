/***************************************
* CSE2031Z – Lab4 
* Filename: lab4B.c 
* Author: Bakshi, Tania
* Email: tbakshi@my.yorku.ca 
* eecs_username: tbakshi 
* York num: 215399462
****************************************/
#include <stdio.h>
#include <string.h>
#include <math.h>     
#define SIZE 10
 
int my_atoi (char c[]); 
int isQuit(char c[]);
   
int main(){
  int i,j;
  char arr [SIZE];

  printf("Enter a postive number or 'quit': " );
  scanf("%s", arr);
  while(isQuit(arr))
  {
    printf("%s \n", arr);

    i = atoi(arr);
    printf("atoi:    %d (%#o, %#X)\t%d\t%.0f\n", i,i,i, i*2, pow(i,2));

    j = my_atoi(arr);
    printf("my_atoi: %d (%#o, %#X)\t%d\t%.0f\n", j,j,j, j*2, pow(j,2));

  
   
    /* read again */
    printf("Enter aj postive number or 'quit': " );
    scanf("%s", arr);
  }

}
int my_atoi (char c[]){
    int i = 0, num = 0, len = strlen(c) - 1;

    for(i; i < strlen(c); i++){
      num += c[len] * pow(10, i);
    }
    return num;
}

int isQuit(char word[]){
    char quit[] = "quit";
    return strcasecmp(word, quit);
    
}