#include<stdio.h>
#include<string.h>
int main()
{
    char str[20],*ptr,l=0;
    printf("Enter string:");
    gets(str);
    ptr=str;
    while(*ptr!='\0')
    {
        l++;
       ptr++;

    }
    printf("Length of string:%d",l);
    return 0;
}