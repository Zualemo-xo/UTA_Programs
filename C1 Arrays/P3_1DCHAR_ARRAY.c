#include <stdio.h>
#include<string.h>
int main()
{
  //Initialization of Input
  //char name[] = {'h','e','l','l','u','\0'};
  
  //Getting Input from user
  char name[10];
  printf("ENTER a name..\n");
  scanf("%s", name);
  
  int i=0;
  printf("OUTPUT:\n");
  
  //Method 1
  while(name[i] != '\0')
  {
    printf("%c", name[i]);
    i++;
  }
  printf("\n");
  
  //Method2
  for(i=0; i < strlen(name); i++) {
    printf("%c", name[i]);
    }  
  printf("\n");
  
  //Method3
  printf("%s", name);
  return 0;
}
