/***************************************
* EECS2031Z – Lab 6E *
* Author: Bakshi, Tania*
* Email: tbakshi@my.yorku.ca *
* eecs_num: tbakshi *
* York #: 215399462
****************************************/

#include <stdio.h>
#include <stdlib.h>
void printArr(int *, int);
int main(){
int n, i;
printf("Size of array: ");
scanf("%d", &n);
int *my_array = (int *)malloc(n * sizeof(int)); 
*my_array = 1;
for (i = 1; i < n; i++)
*(my_array + i) = i * 100;
printArr(my_array, n);
free(my_array);
}

void printArr(int *arr, int n){

for (int i = 0; i < n; i++){
    printf("%d\n", arr[i]);
}

}