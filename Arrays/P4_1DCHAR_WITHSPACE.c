// IN case input has space
//helo world this is.
#include <stdio.h>
#include<string.h>
int main()
{
  char name[20];
  int i;
  printf("ENTER a name..\n");
  gets(name);
  //Best Way-- Method 0
  puts(name);
  
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
