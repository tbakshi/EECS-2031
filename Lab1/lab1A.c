/***************************************
* EECS2031Z Lab1 A
* Filename: Lab1A.c
* Author: Baskhi, Tania
* Email: tbakshi@my.yorku.ca
* eecs_num: 215399462
****************************************/

#include <stdio.h>

int main()
{
    int day, month, year; 
	printf("Enter month, day and year seperated by sapces:");

    scanf("%d %d %d", &day, &month, &year); 

    printf("the input '%d %d %d' is reformatted as %d/%d/%d and %d-%d-%d \n", day, month, year, day, month, year, day, month, year);

	
}