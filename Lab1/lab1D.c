/***************************************
* EECS2031Z Lab1 D
* Filename: Lab1D.c
* Author: Baskhi, Tania
* Email: tbakshi@my.yorku.ca
* eecs_num: 215a399462
****************************************/
#include <stdio.h>
float sum(float i, float j);
int main()
{
   float x, y;
   char pund; 
   int interactions; 
   int i; 
   printf("Enter the number of interactions: "); 
   scanf("%d", &interactions);
   for(i=0; i<interactions; i++){
   printf("Enter two float numbers separated by ##: ");
   scanf("%f%c%c%f", &x, &pund, &pund, &y);
   float su= sum(x,y);
   printf( "%f + %f = %f\n", x,y, su);
   }
}



/* function definition */
float sum (float i, float j){
   return i+j;             
}