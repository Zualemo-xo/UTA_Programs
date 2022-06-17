#include<stdio.h>
#include<conio.h>

int main () {
   int  v = 20;   /* variable declaration */
   int *ip;        /* pointer variable declaration */
   ip = &v;  /* store address of var in pointer variable*/
   printf("Address of variable 'v': %x\n", &v );
   /* address stored in pointer variable */
   printf("Address stored in pointer variable: %x\n", ip );
   /* access the value using the pointer */
   printf("Value inside the pointer variable: %d\n", *ip );
   return 0;}

