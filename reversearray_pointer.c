#include<stdio.h>
int main()
{
    int size, i, *ptr;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements:");
    for(i=0;i<size;i++){
        scanf("%d",ptr);
        ptr++;
    }
    ptr=&arr[size-1];
    printf("\nElements of array is reverse order:");
    for(i=size-1;i>=0;i--){
        printf("\nElement %d is %d:",i,*ptr);
        ptr-- ;

    }

    return 0;

}