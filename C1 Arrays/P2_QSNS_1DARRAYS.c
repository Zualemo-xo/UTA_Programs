// Questions using 1D Arrays
 
 // To find the maximum element in the array
#include <stdio.h>
int main() {

  int  i, n, sum = 0, average;
  
  printf("Enter number of elements: ");
  scanf("%d", &n);
  int marks[n];
  //1)Input
  for(i=0; i < n; ++i) {
    printf("Enter number%d: ",i+1);
    scanf("%d", &marks[i]);
    }   

   int max=marks[0],min=marks[0];
   
   //2)Processing
   // [1,3,4,5,7]
	for(i=0; i < n; ++i) {
    //sum += marks[i];
    if(marks[i]<max)
    {
    	max=marks[i];	
	}
	}
  //3)Output
  printf("Max = %d", max);
  average = sum / n;
  //printf("Average = %d", average);

  return 0;
}
