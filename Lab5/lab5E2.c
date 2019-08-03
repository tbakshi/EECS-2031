/***************************************
* CSE2031 – Lab 5E2 *
* Author: Bakshi, Tania*
* Email: tbakshi@my.yorku.ca*
* eecs_num: tbakshi *
* Yorku #: 215399462
****************************************/
#include <stdio.h>

#define MAX 20
 

int largest(int * x, int len);
void display(int *arr, int len);

int main(int argc, char *argv[])
 {
     int array[MAX], count;


     int i;  count=0;
     
     while ( scanf("%d", &i) != EOF){
        *(array + count) = i; // store in array[count]
        count++;
     }

      printf("Inputs: ");
      display(array, count);

     
     
     printf("\nLargest value: %d\n", largest(array, count));
     
     return 0;
 }
 

 void display(int *arr, int len)
 {
     int i = 0;
     while(i < len){
         printf("%d ", *(arr+i));
         i++;
     }
 }



 int largest(int * arr, int len)
 {
    int i = 0, max;
    while(i < len){
         if(i == 0 || max < *(arr + i)){
             max = *(arr+i);
         }
         i++;
     }

     return max;
 }

