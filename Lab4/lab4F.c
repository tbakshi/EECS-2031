/***************************************
* CSE2031Z – Lab4 
* Filename: lab4F.c 
* Author: Bakshi, Tania
* Email: tbakshi@my.yorku.ca 
* eecs_username: tbakshi
* York num: 215399462
****************************************/
#include <stdio.h>

int main(){
    int firstAge = 10;
    int secondAge = 100;
    int *ptr, *ptr2;

    ptr = &firstAge;
    
    printf("age:\t%d %d\n", firstAge, *ptr);
    
    *ptr = 14;
    
    printf("age:\t%d %d\n", firstAge, *ptr);
    
    ptr2 = &secondAge;
    *ptr2 = firstAge;
    
    printf("age2:\t%d %d\n", secondAge, *ptr2);
    
    ptr2 = ptr;
    *ptr2 -= 1;
    
    printf("age:\t%d %d %d\n", firstAge, *ptr, *ptr2);
    printf("%p %p %p\n",&firstAge,ptr,ptr2);

}