/***************************************
* EECS2031Z Lab3
* Filename: Lab3RGB.c
* Author: Baskhi, Tania
* Email: tbakshi@my.yorku.ca
* eecs_num: 215399462
****************************************/

#include <stdio.h>
#include "binaryFunction.c"

#define AlphaValue 100


int main() {

  int r, g,b;
  unsigned int rgb_pack;
  int r_unpack, g_unpack,b_unpack;
  int alpha = AlphaValue;

  printf("enter R value (0~255): ");
  scanf("%d",&r);
  printf("enter G value (0~255): ");
  scanf("%d",&g);
  printf("enter B value (0~255): ");
  scanf("%d",&b);

  while(! (r<0 || g<0 || b <0) )
  {		
     printf("A: %d\t", alpha);  printBinary(alpha); printf("\n");
     printf("R: %d\t", r);  printBinary(r); printf("\n");
     printf("G: %d\t", g);  printBinary(g); printf("\n"); 
     printf("B: %d\t", b);  printBinary(b); printf("\n"); 

    /* do the packing */
    rgb_pack = alpha;    
    rgb_pack = rgb_pack<<8;
    rgb_pack = rgb_pack|r;    
    rgb_pack = rgb_pack<<8;
    rgb_pack = rgb_pack|g;    
    rgb_pack = rgb_pack<<8;
    rgb_pack = rgb_pack|b;    

     //printf("\nPacked: value %d\t", rgb_pack); printBinary(rgb_pack);printf("\n");
     printf("\nPacked:\t"); printBinary(rgb_pack);printf(" (%d)\n", rgb_pack);
     printf("\nUnpacking  ......\n");

    /* do unpacking */
    rgb_pack = rgb_pack<<8; 
    r_unpack = rgb_pack>>24;
    rgb_pack = rgb_pack<<8; 
    g_unpack = rgb_pack>>24;
    rgb_pack = rgb_pack<<8;
    b_unpack = rgb_pack>>24;

     printf("R: "); printBinary(r_unpack); printf(" (%d, %#o, %#X)\n", r_unpack, r_unpack, r_unpack);
     printf("G: "); printBinary(g_unpack); printf(" (%d, %#o, %#X)\n", g_unpack, g_unpack, g_unpack);
     printf("B: "); printBinary(b_unpack); printf(" (%d, %#o, %#X)\n", b_unpack, b_unpack, b_unpack);
     printf("------------------------------------\n"); 
	 
     /* read again */
     printf("\nenter R value: ");
     scanf("%d",&r);
     printf("enter G value: ");
     scanf("%d",&g);
     printf("enter B value: ");
     scanf("%d",&b);

  }

}
