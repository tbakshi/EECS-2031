/***************************************
* EECS2031Z Lab3
* Filename: Lab3conversion.c
* Author: Baskhi, Tania
* Email: tbakshi@my.yorku.ca
* eecs_num: 215399462
****************************************/

/*
fun_II is different from the other two becuase in that one of the argument is converted
from a float to int, and when you conver any decimal number to int it basically 
floors the value.

This is what was seen in the second attempt as the output was seen to be 24.0 because
2.331 was floored to 2 and then the operations were performed.
*/

#include <stdio.h>

float fun_IF(int, char, float);
float fun_II(int, char, int);
float fun_FF(float, char, float);


int main(){

    int num1;
    char op;
    float num2;

    while(1){
    printf("\nEnter operand_1 operator operand_2 separated by blanks>");
    scanf("%d %c %f", &num1, &op, &num2);

    if(num1 == -1 && num2 == -1){
        break;
    }

    printf("Your input '%d %c %f' results in %f (fun_IF) and %f (fun_II) and %f (fun_FF)", num1, op, num2, fun_IF(num1, op, num2), fun_II(num1, op, num2), fun_FF(num1, op, num2));
    }

    return 0;
}

float fun_IF(int n1, char c, float n2){

    if(c == '+'){

        return n1+n2;

    }
    else if(c == '-')
    {
         return n1-n2;
    }
    else if (c == '/') {
        return n1/n2;
    }
    else if(c == '*'){
        return n1*n2;
    }
    
    return 0;

}

float fun_II(int n1, char c, int n2){

    if(c == '+'){

        return n1+n2;

    }
    else if(c == '-')
    {
         return n1-n2;
    }
    else if (c == '/') {
        return n1/n2;
    }
    else if(c == '*'){
        return n1*n2;
    }
    
    return 0;

}

float fun_FF(float n1, char c, float n2){

    if(c == '+'){

        return n1+n2;

    }
    else if(c == '-')
    {
         return n1-n2;
    }
    else if (c == '/') {
        return n1/n2;
    }
    else if(c == '*'){
        return n1*n2;
    }
    
    return 0;

}