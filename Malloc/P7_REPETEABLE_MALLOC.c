#include <stdio.h>
//Enter larger sizes each time
int main()
{
    int *ptr,size,newsize,i;
    int inp,cnt=0;
	do
	{
		
		if(cnt==0) // Iteration 1
		{
			printf("Size to be added:");
	    	scanf(" %d",&size);
			ptr=malloc(size*sizeof(int));
			if(ptr != NULL)
		    {
		           printf("Enter numbers\n");
		
		           for(i = 0; i < size; i++)
		                 scanf("%d",ptr+i);
		
		           //printing values
		           printf("The numbers are\n");
		
		           for(i = 0; i < size; i++)
		                 printf("%d\n",*(ptr+i)); // *(ptr+i) is as same as ptr[i] 
		
		    }
		}
		
		else{ // NEXT iterations
	    printf("Enter a size greater than %d:",size);
	    scanf("%d",&newsize);
	    ptr = realloc(ptr,newsize * sizeof(int)); //REALLOC PRESERVES DATA ALREADY ADDED IN
	    int xx=newsize-size;
	    printf("Enter %d numbers numbers:\n",xx);
	    
	    for(i = size; i < newsize; i++)
		    scanf("%d",ptr+i);
		
		           //printing values
		        printf("The numbers are:\n");
		
		for(i = 0; i < newsize; i++)
		    printf("%d\n",*(ptr+i));
		size=newsize; //for next iteration
		}
		//oldsize+=size;

	printf("Press 0 to exit, 1 to continue:");
	cnt+=1;
	scanf("%d",&inp);
	}while(inp!=0);

    return 0;
}
