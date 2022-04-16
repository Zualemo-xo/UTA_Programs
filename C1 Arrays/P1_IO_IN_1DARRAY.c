// INPUT AND OUTPUT USING A 1-D ARRAY
#include <stdio.h>

int main() {
  int numbers[5],i=0;
  int number=0; 
   // [1,3,4,5,7]
  printf("Enter 5 integers: ");

  // taking input and storing it in an array
  for( i = 0; i < 5; ++i) {
     scanf("%d", &numbers[i]);
  }

  printf("Displaying integers: ");

  // printing elements of an array
  for( i = 0; i < 5; ++i) {
     printf("%d  ", numbers[i]);
  }
  return 0;
}
