#include<stdio.h>
int add(int *x , int *y);
int main()
{
    int a , b , sum;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter 2nd number");
    scanf("%d",&b);
    sum=add(&a,&b);
    printf("The sum is:%d",sum);
    return 0;

}
int add(int *x,int *y)
{
    int sum=0;
    sum=*x+*y;
    return sum;
}