/***************************************
* CSE2031 – Lab 5E *
* Author: Bakshi, Tania*
* Email: tbakshi@my.yorku.ca*
* eecs_num: tbakshi *
* Yorku #: 215399462
****************************************/
#include <stdio.h>

#define MAX 20
 

int largest(int * x);
void display(int *arr);

int main(int argc, char *argv[])
 {
     int array[MAX], count;

     int i;  count=0;
     
     while ( scanf("%d", &i) != EOF){
        *(array + count) = i; // store in array[count]
        count++;
     }
     if(count != MAX)   *(array + count) = EOF;

      printf("Inputs: ");
      display(array);

     
     
     printf("\nLargest value: %d\n", largest(array));
     
     return 0;
 }
 

 void display(int *arr)
 {
     int i = 0;
     while(*(arr + i ) != EOF || i == 20){
         printf("%d ", *(arr+i));
         i++;
     }
 }

 int largest(int * arr)
 {
    int i = 0, max;
    while(*(arr + i ) != EOF || i == 20){
         if(i == 0 || max < *(arr + i)){
             max = *(arr+i);
         }
         i++;
     }

     return max;
 }

