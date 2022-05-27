#include<stdio.h>
#include<stdlib.h>

int et(int *ptr,int n){

    int i,timetaken=0;
	printf("%d \n",n);
    for(i=0;i<n;i++){

        if(*ptr==1){

            timetaken+=60;

        }

        if(*ptr==2){

            timetaken+=20;

        }
        ptr++;

    }
    //printf("%d \n",timetaken);

   return(timetaken);

}



//void et(int *ptr,int timetaken);

int main()

{

    int *ptr,timetaken;
//	int  var[] = {1,2};
	//ptr = var;
    int n,i;

    scanf("%d",&n);

    ptr=(int*)malloc(n*sizeof(int));
	
    for(i=0;i<n;i++){

        scanf("%d",ptr+i);

    }
	timetaken=et(ptr,n);
    //et(ptr,timetaken);

//    for(i=0;i<n;i++){

        printf("%d",timetaken);

//    }
	return(0);
    //return timetaken;

}
