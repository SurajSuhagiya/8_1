// WRITE A PROGRAM TO PERFORM THE ADDITION OPERATION OF TWO 1D ARRAYS & STORE IT IN ANOTHER ARRAY. KEEP IN MIND THAT BOTH ARRAY SIZES MUST BE THE SAME.
#include<stdio.h>
void main(){
	int r,s;
	printf("Enter the size of array :");
	scanf("%d",&s);
	
	int x(s);
	printf("Enter the array size :");
	for(r=0;r<s;r++){
	printf("x[%d]=",r);
	scanf("%d",&x[r]);	
	}
	int y[r];
	printf("Enter y elements/t :");
	for(r=0;r<s;r++){
	printf("y[%d]=",r);
	scanf("%d ",&y[r]);
	}
	int z[r];
	for(r=0;r<s;r++){
	z[r]=x[r]+y[r];	
	}
	for(r=0;r<s;r++){
	printf("Array z is z[%d]=%d\n",r,z[r]);	
	}
}
