/***************************************
* CSE2031Z – Lab4 
* Filename: leap.c 
* Author: Bakshi, Tania
* Email: tbakshi@my.yorku.ca 
* eecs_username: tbakshi
* York num: 215399462
****************************************/
int isLeap(int year){

    if(((year % 4) == 0 && (year % 100) != 0) || (year%400) == 0)
        return 1;

    return 0;
}