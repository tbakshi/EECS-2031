/***************************************
* CSE2031 – Lab 5A2 *
* Author: Bakshi, Tania*
* Email: tbakshi@my.yorku.ca*
* eecs_num: tbakshi *
* Yorku #: 215399462
****************************************/
#include <stdio.h>

void swapIncre(int *, int *, int *);
void swap(int *, int *);

int main( ) {
  int a, b, c; 

  scanf("%d %d %d", &a, &b,&c);
  while(a != -1) {
     printf("Original inputs:   a:%-4d  b:%-4d  c:%-4d\n", a, b,c);     
     swapIncre(&a, &b, &c);
     printf("Rearranged inputs: a:%-4d  b:%-4d  c:%-4d\n\n", a, b,c);  

     scanf("%d %d %d", &a, &b,&c);
   }

}

void swapIncre(int *x, int *y, int *z){

    swap(x, z);

   (*y) *= 2;
}

void swap(int *x, int *z){

    int temp = *x;
    *x = *z;
    *z = temp;

}
