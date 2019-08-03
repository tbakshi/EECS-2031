/***************************************
* EECS2031Z – setArr3 *
* Author: Bakshi, Tania*
* Email: tbakshi@my.yorku.ca *
* eecs_num: tbakshi *
* York #: 215399462
****************************************/
#include <stdio.h>
#include<stdlib.h>

void setArr (int index, int v){
int i = v;
arr[index] = (int*)malloc(sizeof(int));
*(arr[index] )= i;
}
corrected program(Arr3.c)
void setArr (int, int);
int * arr[10]; 
int main(int argc, char *argv[]){
int i;
setArr(0, 0); setArr(1, 100);
setArr(2, 200); setArr(3, 300);
setArr(4, 400);



for(i=0; i<5;i++)
    printf("arr[%d] -*-> %d\n", i, *arr[i]); /* should be 0, 100, 200, 300, 400 */
}

/* set arr[index], which is a pointer, to point to an integer of value v */
void setArr (int index, int v){
int i = v;
arr[index] = (int*)malloc(sizeof(int));//memory allocation required
*(arr[index] )= i;
}