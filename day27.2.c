#include<stdio.h>

int main()
{
    int arr[50] ;
    int n , i ;
    int *ptr ;
    
    ptr = arr ;

    printf("Enter size of an array : ");
    scanf("%d",&n);

    printf("Enter elements in an array :\n");
    for (i=0 ; i<n ; i++)
    {
        scanf("%d",ptr);

        ptr++;   
    }
 
    ptr = arr;

    printf("Array elements: ");
    for (i=0; i<n ; i++)
    {
        printf("%d , ",*ptr);

        ptr++;
    }

    return 0;
}
