#include<stdio.h>
#include<strings.h>
int main()
{
    char a[20], b[20];
    int x;
    printf("enter String a\n");
    gets(a);

    printf("enter String b\n");
    gets(b);
    x=strcmp(a,b);
    if(x==0)
     {
       printf("both strings are equal\n");
     }

    else
     if(x>0)
     {
       printf("string a is gretear than b\n");
     }

    else
     {
       printf("string b is gretear than a\n");
     }

}
