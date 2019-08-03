/***************************************
* CSE2031 – Lab 5D *
* Author: Bakshi, Tania*
* Email: tbakshi@my.yorku.ca*
* eecs_num: tbakshi *
* Yorku #: 215399462
****************************************/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define SIZE 40

void sortArray(char *);
void swap(char *, char *);
void printArr(char *);

int main ()
{   
   int result;  char c; int i;  int count=0;
   char arr[SIZE];
  
   fgets(arr,SIZE,stdin);
   while (strcmp(arr,"quit\n"))
   {
      arr[strlen(arr)-1] = '\0'; // remove the trailing \n
      // sortArray

    sortArray(arr);
    printArr(arr);
    
    fgets(arr,SIZE,stdin);
    }

    return 0;
}

void sortArray(char *arr){

    int i, j, min_idx, n = strlen(arr); 
  
    for (i = 0; i < n; i++){ 
        min_idx = i; 
        for (j = i+1; j < n; j++){ 
          if (*(arr+j) < *(arr+min_idx)) 
            min_idx = j; 
        }
        swap((arr+min_idx), (arr+i)); 
    }
}

void swap (char *a, char *b){ 
    char temp = *a; 
    *a = *b; 
    *b = temp; 
} 

void printArr(char *arr){
    int i = 0;
    while(*(arr+i)!='\0'){
        printf("%c", *(arr+i));
        i++;
    }
    printf("\n\n");

}