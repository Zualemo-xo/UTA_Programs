#include<stdio.h>


int maximum(int *a,int k,int n)
{
	int i,maxcnt=0,cnt=0,maxele=-1;
	for(i=0;i<n;i++)
	{
		//printf("%d ",*(a+i));
		cnt+=1;
		//If elem is greater, replace max value
		if(*(a+i)>maxele)
		{
			maxele=*(a+i);
		}
		//When we reach k elements,store max value in existing 'a' array
		if(cnt%k==0)
		{
			
			*(a+maxcnt)=maxele;
			cnt=0;
			maxele=-1;
			maxcnt+=1;
		}
	}
	//Edge case
	if(cnt!=0)
	{
		*(a+maxcnt)=maxele;
		cnt=0;
		maxele=-1;
		maxcnt+=1;
	}
	
	return(maxcnt);
}


int main () {
   int  var[] = {10, 20, 30, 10, 50, 40,15,16,2};
   //			{30, 50, 17, 10, 50, 40,17,15};
   int  i;
   int *ptr=NULL; /*Called a NULL pointer*/
   ptr = var; /* array address is stored in pointer */
   int no_of_max_elem=maximum(ptr,3,8); // Function call // return 3
   printf("No of maximum elements:%d \n",no_of_max_elem);
   
   
   
   for (i=0;i<no_of_max_elem;i++) 
   {
    printf("Value of max[%d] = %d\n", i, *(ptr+i) ); // Pointer Arithmetic
    //Normal way
//    printf("Value of var[%d] = %d\n", i, var[i] );
//    printf("Value of var[%d] = %d\n", i, *ptr ); 
//    ptr++;  
   }
   return 0;
}
