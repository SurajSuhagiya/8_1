// WRITE A PROGRAM TO FIND THE AVERAGE OF A 1D ARRAY.
#include<stdio.h>
void main(){
	int r,s,sum=0;
	printf("Enter the array size :");
	scanf("%d",&s);
	
	int count[s];
	 for(r=0;r<s;r++){
	 	printf("s[%d]=",r);
	 	scanf("%d",&count[s]);
	 	sum=sum+count[s];
	 }
	 printf("Average of an array: %d",sum/s);
}
