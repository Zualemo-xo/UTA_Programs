#include<stdio.h>
#include<conio.h>


int main () {
   int  var[] = {10, 20, 30};
   int  i;
   int *ptr=NULL; /*Called a NULL pointer*/
   printf("When printing 'var' we get:%x\n",var);
   ptr = var; /* array address is stored in pointer */
   for (i=0;i<3;i++) {
   	printf("Address of var[%d] = %x\n", i, ptr );
    printf("Value of var[%d] = %d\n", i, *ptr );
    ptr++; /* move to the next location */
   }
   return 0;
}

