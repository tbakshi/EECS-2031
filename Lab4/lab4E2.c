/***************************************
* CSE2031Z – Lab4 
* Filename: lab4E2.c 
* Author: Bakshi, Tania
* Email: tbakshi@my.yorku.ca 
* eecs_username: tbakshi
* York num: 215399462
****************************************/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define ROWS 20
#define COLUMNS 30

int main(int argc, char *argv[]) {
     char inTable[ROWS][COLUMNS];
        
     int Row = 0;
     char name[30];
     int age, end;
     float wage;	 
       
     while(1) {    
          printf("Enter name age and wage: ");
          fgets(inTable[Row], 30, stdin);  
          sscanf(inTable[Row], "%s %d %f", name, &age, &wage);

          if(!strcasecmp("xxx",name)){
               end = Row;
               break;
          } 
         Row++;
   
          for(int i = 0; i <strlen(name); i++){
               name[i] = toupper(name[i]);
          }

          age = age +10;
          wage = 1.5 * wage;
          sprintf(inTable[Row], "%s %d %.2f\n", name, age, wage);
          Row++;    
     }  
     printf("\nRecords generated in %s on %s %s\n", __FILE__, __DATE__, __TIME__);  
     Row = 0;
     while (Row < end) {  
          printf("%s", inTable[Row]);
          Row++;
     }
}
