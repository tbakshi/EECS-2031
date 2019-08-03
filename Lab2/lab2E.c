/***************************************
* EECS2031Z Lab2 E
* Filename: LabE.c
* Author: Baskhi, Tania
* Email: tbakshi@my.yorku.ca
* eecs_num: 215399462
****************************************/
#include <stdio.h>
#include <string.h>

int main () {
    int year; 
    printf("Enter a year:"); 
    scanf("%d", &year); 

    while (year > 0){

        if ((year%4 ==0 && year%100 !=0) || (year%400 == 0) ){
            printf("Year %d is a leap year\n", year); 
        }
        else{ 
            printf("Year %d is not a leap year\n", year); 

        }
        printf("Enter a year:"); 
        scanf("%d", &year); 
    }
return 0;
}