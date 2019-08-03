/***************************************
* CSE2031Z – Lab4 
* Filename: lab4D.c 
* Author: Bakshi, Tania
* Email: tbakshi@my.yorku.ca 
* eecs_username: tbakshi
* York num: 215399462
****************************************/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>

int Quit(char []);

#define SIZE 40
#define SIZE2 10

int main(int argc, char *argv[]){
    int ageNumber;
    float wageNumber;
       
     char name[SIZE], wage[SIZE], age[SIZE], resu[SIZE2], resu2[SIZE2], resu3[SIZE2];
	
     printf("Enter name, age and wage (xxx to quit): ");
     scanf("%s %s %s", name, age, wage);
     while (quit(name)){   
      name[0] = toupper(name[0]); 
      ageNumber = atoi(age) + 10;
      wageNumber = atof(wage)*2;
      
      sprintf(resu, "%s-%d-%.3f-[%.0f, %.0f]\n", name, ageNumber, wageNumber, floor(wageNumber), ceil(wageNumber));
      strcpy(resu2, resu);
      sprintf(resu3, "%s", resu);
      printf("%s%s%s", resu, resu2, resu3);
      printf("Enter name, age and wage (xxx to quit): ");
	    scanf("%s %s %s", name, age, wage);
      } 
}

int Quit (char word[]){
    char quit[] = "xxx";
   return strcasecmp(word, quit);
    
}