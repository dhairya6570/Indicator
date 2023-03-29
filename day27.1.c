#include<stdio.h>

void swap (int *x , int *y){
	
	int z ;
	
	z = *x ;
	*x = *y ;
	*y = z ;
	
	printf("After swap A : %d\n",*x);
	printf("After swap B : %d",*y);
	
}

int main (){
	
	int a , b ;
	
	printf("Enter first value : ");
	scanf("%d",&a);
	
	printf("Enter second value : ");
	scanf("%d",&b);
	
	swap(&a , &b);
	
	return 0 ;
}
