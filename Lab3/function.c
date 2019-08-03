/***************************************
* EECS2031Z Lab3
* Filename: function.c
* Author: Baskhi, Tania
* Email: tbakshi@my.yorku.ca
* eecs_num: 215399462
****************************************/
#include <stdio.h>

int sum = 0;int count=0;

double r_avg(int currentInput)
{
    sum += currentInput; count++;

    return (double)sum/count;
}