#include <stdio.h>
struct book  
	{    
	 float  price ;   
	 int  pages ;  
	} b[25];  



int main()
{
	
    int i;
	for ( i = 0 ; i < 2 ; i++ )  
	{   
		printf ( "\n Enter price and pages " ) ;   
		scanf ( " %f %d", &b[i].price, &b[i].pages ) ;
	}
	
	for ( i = 0 ; i < 2 ; i++ )  
	{   
		printf ( "\n  Price and pages are:" ) ;   
		printf ( " %f %d", b[i].price, b[i].pages ) ;
	}
	
	return(0);
}
