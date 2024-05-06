#include<stdio.h>
#include<strings.h>
int main()
{
    char a[20], b[15];
    printf("enter aString A ");
    gets(a);

    printf("enter a String B");
    gets(b);

    strcat(a,b);

    printf("\n\nAfter concatenating");
    printf("\nString a is %s",a);

}
