//WRITE A PROGRAM TO FIND THE LENGTH OF A 1D ARRAY.

#include<stdio.h>

void main (){
    int r,s,t=1;
    
	printf("Enter size of array :");
	scanf("%d",&s);
	
	 int count [s];
	  for(r=0;r<=s;r++){
	  	printf("s[%d]=",r);
	  	scanf("%d",&count[s]);
	  	t++;
	  }
	  printf("Length of array is %d",t-1);
}
