/***************************************
* EECS2031Z Lab3
* Filename: Lab3panlindrome.c
* Author: Baskhi, Tania
* Email: tbakshi@my.yorku.ca
* eecs_num: 215399462
****************************************/

#include <stdio.h>
#include <string.h>
int length(char[]);
int isQuit(char []);

int main(){
    char word[30];
    int i,k;
    int result=2; 
       scanf("%s", word);

     while (! isQuit(word)) { 
         // print in reverse & is palindrome or not 
         for(k=length(word); k>-1; k--){
             printf("%c", word[k]);
        }
        printf("\n");

//        printf("%c %c", word[length(word)-2], word[0]);
   //     if(word[length(word)-1] == word[0]){
     //   }
         for(i=0; i<(length(word)); i++){
             if(word[length(word)-1] != word[0]){
                 result = 0;
                break;
                break;
             }
             else {
                 if(word[length(word)-1-i] == word[0]){
                 result=1; 
                 }
                else { 
                 result=0;
                 }

            }
         }

             if(result==1){
                 printf("Is a palindrome\n"); 
             }
             else if (result == 0){
                 printf("Is not a palindrome\n");
             }
        scanf("%s", word);

     }
}
int length(char arr[]){
  int i;
  for(i=0; arr[i]!= '\0'; i++)
    ;
  return i;
}


int isQuit (char arr[]){
 int i;
 if (arr[0]=='q' && arr[1]=='u' && arr[2]=='i' && arr[3]=='t' && arr[4]=='\0')
  return 1;
 else return 0;
}