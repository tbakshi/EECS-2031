/***************************************
* CSE2031Z – Lab4 
* Filename: lab4C.c 
* Author: Bakshi, Tania
* Email: tbakshi@my.yorku.ca 
* eecs_username: tbakshi
* York num: 215399462
****************************************/
#include <stdio.h>
#include <string.h>

int countDays(int, int, int);
int isLeap (int);
int isQuit(char []);
extern int isLeap(int);

int main(){ 

  char input[30];
  int i, dates, day, year, month; 

  printf("Enter 'month-day year' : " );
  fgets(input, 30, stdin);  

  while ( isQuit(input) )
   {
    sscanf(input, "%d-%d %d", &month, &day, &year);

    printf("\n%d days of year %d have elapsed.", countDays(year, month, day), year);
       printf("\n\nEnter 'month-day year': " );
    fgets(input, 30, stdin);  
  }
 
}


int countDays(int y, int x, int z){
  int days = 0;
  for(int i = 1; i <= x; i++){
    if(i == x){
      days += z;
      break;
    }
    if(i == 2){
      isLeap(y)?(days+=29):(days+=28);
      continue;
    }
    (((i%2 == 1) && (i <= 7)) || ((i%2 == 0) && (i > 7)))?(days += 31):(days += 30);
  }
  return days;
}

int isQuit(char word[]){
    char quit[] = "quit\n";
    return strcasecmp(word, quit);   
}