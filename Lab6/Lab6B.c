/***************************************
* EECS2031Z – Lab 6B *
* Author: Bakshi, Tania*
* Email: tbakshi@my.yorku.ca *
* eecs_num: tbakshi *
* York #: 215399462
****************************************/

#include <stdio.h>
#include <string.h>

void printArray(char[][50],int n);
void exchange(char inputs[][50]);
int main()
{
char inputs[30][50];
int current_row=0;

    printf("Enter string: ");

    fgets(inputs[current_row],50,stdin);
    while(strcmp(inputs[current_row], "xxx\n") != 0){
     current_row++;
     printf("Enter string: ");
     fgets(inputs[current_row],50,stdin);
    }
    
    printf("\n== Before Swapping == \n");
    printArray(inputs,current_row);
    exchange(inputs);

    printf("\n== After Swapping == \n");
    printArray(inputs,current_row);

return 0;
}
 printArray(char inputs[][50],int n){
    int i;
    for(i=0;i<n;i++)
    printf("[%2d]: %s\n",i,inputs[i]);
}
 exchange(char arr[][50]){
    int i;
    char temp[50];
    for(i=0;i <6;i+=2){}
        strcpy(temp,arr[i]);
        strcpy(arr[i],arr[i+1]);
        strcpy(arr[i+1],temp);
    }

}