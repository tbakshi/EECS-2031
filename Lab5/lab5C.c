/***************************************
* CSE2031 – Lab 5C *
* Author: Bakshi, Tania*
* Email: tbakshi@my.yorku.ca*
* eecs_num: tbakshi *
* Yorku #: 215399462
****************************************/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define SIZE 40

int isPalindrome (char *);
void printReverse (char *);

int main ()
{   
   int result;  char c; int i;  int count=0;
   char arr[SIZE];
  
   fgets(arr,SIZE,stdin);
   while (strcmp(arr,"quit\n"))
   {
      arr[strlen(arr)-1] = '\0'; // remove the trailing \n
      printReverse(arr);
   
      result = isPalindrome (arr);
      if (result==1) 
         printf ("\nIs a case-insensitive palindrome.\n\n");
      else 
         printf ("\nNot a case-insensitive palindrome.\n\n");
 
      fgets(arr,SIZE,stdin);
    }
    
    return 0;
}


int isPalindrome (char * str)
{

    int i = strlen(str) -1;
    int j = 0;
    while ( i >=0 ){
        if(toupper(*(str+j))!=toupper(*(str+i))){
            return 0;
        }
        j++;
        i--;
    }
    return 1;
}

void printReverse(char * str){
  int i = strlen(str) -1;
  while ( i >=0 ){
     printf("%c", *(str+i) );  // or  putchar(*(str+i));
     i--;
  }
}