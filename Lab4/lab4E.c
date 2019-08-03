/***************************************
* CSE2031Z – Lab4 
* Filename: lab4E.c 
* Author: Bakshi, Tania
* Email: tbakshi@my.yorku.ca 
* eecs_username: tbakshi
* York num: 215399462
****************************************/
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>


#define ROWS 20
#define COLUMNS 30

int main(int argc, char *argv[]) {

     int number = 0, age, end;
     char inTable [ROWS][COLUMNS];
     char name[30];
     float wage;

     printf("Enter name age and wage: ");
     scanf("%s %d %f", name, &age, &wage); 

     while (strcasecmp("xxx", name)){  
          sprintf(inTable[number], "%s %d %.2f", name, age, wage);
          number++;
          for(int i = 0; i <strlen(name); i++){
              name[i] = toupper(name[i]);
          }

          age = age +10;
          wage = 1.5 * wage;
          sprintf(inTable[number], "%s %d %.2f", name, age, wage);

          number++;
          printf("\nEnter name age and wage: ");
          scanf("%s %d %f", name, &age, &wage);
          if(!strcasecmp("xxx",name)){
               end = number;
          }
     }
     printf("\nRecords generated in %s on %s %s\n", __FILE__, __DATE__, __TIME__);  
     number = 0;
     
     while (number < end) {  
          printf("%s\n", inTable[number]);
          number++;
     }
}