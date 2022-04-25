#include<stdio.h>
#include<conio.h>


int main () {
   int  var[] = {10, 20, 30};
   int i;
   int*ptr[3]={NULL,NULL,NULL}; /*Array of pointers*/
   for ( i = 0; i < 3; i++) {
      ptr[i] = &var[i]; /* assign the address of integers in the 'var' array. */
}
   for ( i = 0; i < 3; i++) {
   	  printf("Address of var[%d] = %x\n", i, ptr[i] );
      printf("Value of var[%d] = %d\n", i, *ptr[i] );
   }
   return 0;
}

