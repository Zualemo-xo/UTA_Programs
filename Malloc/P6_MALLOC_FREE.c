// Store and add elements
#include <stdio.h>  
#include <stdlib.h>  
void main()  
{  
    int num, i, sum = 0;  
    int *ptr, *p;  
    printf (" The number of elements to be entered: \n ");  
    scanf (" %d", &num); // define the no. of element to be entered   
    // use malloc() function to define the size of memory block  
    ptr = (int *) malloc (num);  
    p = ptr; // store the base address of ptr in p    
    // validate the string is full or not  
    if (ptr == NULL)  
    {  
        printf (" Memory is not allocated ");  
        exit(0); // exit from program  
    }  
    else  
    {  
        printf (" Memory is created using the malloc() function ");  
    }  
    printf ("\n Enter the elements in allocated space: ");    
    for (i = 1; i <= num; i++)  
    {  
        scanf (" %d", ptr);  
        sum = sum + *ptr;  
        ptr++;  
    }     
    // print the entered number  
    printf (" Elements are: ");  
    for (i = 1; i <= num; i++)  
    {  
        printf (" \n %d", *p);  
        p++;  
    }     
    printf (" \n The addition of stored elements is: %d ", sum);  
    free (ptr); // use free() function to release the occupy space using malloc() function  
    getch();      
}  
