#include <stdio.h>
#include <string.h>
// racecar racecar
// coolc
// 01234
// To  check if a character array is a palindrome or not
// IP: racecar length=7 -0-1 =6
    // 0123456
// OP: yes /no 
int main(){
    char string1[20];
    int i, length;
    int flag = 0; 
    printf("Enter a string:");
    scanf("%s", string1);
    
    length = strlen(string1);
    for(i=0;i < length ;i++)
	{
        if(string1[i] != string1[length-i-1])
		{
            flag = 1;
            break; 
		}
	}
            
    if (flag) {
        printf("%s is not a palindrome", string1);
    }    
    else {
        printf("%s is a palindrome", string1);
    }
    return 0;
}

//Q : Is there any way to make this program case insensitive?
//OP: RACECar is a palindrome

