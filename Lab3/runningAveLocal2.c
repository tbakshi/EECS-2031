/***************************************
* EECS2031Z Lab3
* Filename: runningAveLocal2.c
* Author: Baskhi, Tania
* Email: tbakshi@my.yorku.ca
* eecs_num: 215399462
****************************************/
#include <stdio.h>

#define MY_PRINT(x,y,z)  printf("running average is %d / %d = %.3f\n", x,y,z)

double r_avg(int);

int sum = 0;int count=0;

int main(int argc, char *argv[])
{
	
      int input;
      double resu;

      printf("enter number (-1 to quit):  ");
      scanf("%d", &input);

      while(input != -1)
      {

        resu = r_avg(input);
        MY_PRINT(sum, count, resu);
 	     
          /* read again */
        printf("enter number (-1 to quit): ");  
        scanf("%d", &input);
	
       }  
	
       return 0;
}

double r_avg(int currentInput)
{
    sum += currentInput; count++;

    return (double)sum/count;
}