/***************************************
* EECS2031Z Lab1 C
* Filename: Lab1C.c
* Author: Baskhi, Tania
* Email: tbakshi@my.yorku.ca
* eecs_num: 215399462
****************************************/
#include <stdio.h>
float sum(float i, float j);
int main()
{
   float x, y;
   char pund; 
   printf("Enter two float numbers separated by ##: ");
   scanf("%f%c%c%f", &x, &pund, &pund, &y);
   float su= sum(x,y);
   printf( "%f + %f = %f\n", x,y, su);

   return 0;

}

/* function definition */
float sum (float i, float j){
   return i+j;             
}