/***************************************
* EECS2031Z – Lab 6C *
* Author: Bakshi, Tania*
* Email: tbakshi@my.yorku.ca *
* eecs_num: tbakshi *
* York #: 215399462
****************************************/

#include <stdio.h>
#include <string.h>

void printArray(char **ar, int n){
    for(int i = 0; i < n; ++i){
        printf("%s\n", *(ar+i));
    }
}
 exchange (char *inputs[]){
    char *tmp = *(inputs+2);
    *(inputs+2) = *(inputs+3);
    *(inputs+3) = tmp;
    tmp = *(inputs+4);
    *(inputs+4) = *(inputs+5);
    *(inputs+5) = tmp;
}

int main(){
char *inputs[8] = {"this is input 0, giraffes", "this is input 1, zebras", "this is input 2, monkeys",
                    "this is input 3, kangaroos"};
char arr1 [] = "this is input 4, do you like them?";
char arr2 [] = "this is input 5, yes";
char arr3 [] = "this is input 6, thank you";
char arr4 [] = "this is input 7, bye";

inputs[4] = arr1;
inputs[5] = arr2;
inputs[6] = arr3;
inputs[7] = arr4;
// display the array by calling printArr
printArray(inputs, 8);
  
// swap pointee of first and second
char *tmp = *inputs;
*inputs = *(inputs+1);
*(inputs+1) = tmp;
// call exchange() to swap some other 'rows';
exchange(inputs);

printf("===========================\n");

// display the array again
printArray(inputs, 8);
}