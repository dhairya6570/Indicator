#include<stdio.h>

void revers(int *p , int n){
	
	int i;
	int *first = p ;
	int *last = p+n-1 ;
	
	while(first<last){
		
		int temp = *first;
		
		*first = *last ;
		*last = temp ;
		
		first++ ;
		last-- ;
				
	}
	
	printf("Reversed array elements are : ");
	
	for(i=0 ; i<n ; i++){
		
		printf("%d , ",*p++);
		
	}	
}

int main (){
	
	int i , n ;
	
	printf("Enter size of array : ");
	scanf("%d",&n);
	
	int a[n];
	
	printf("\nEnter elements of an array :");
	
	for(i=0 ; i<n ; i++){
		scanf("%d",&a[i]);
	}
	
	revers(a,n);
	
	return 0;
}
