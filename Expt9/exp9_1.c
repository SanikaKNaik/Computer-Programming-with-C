#include<stdio.h>
#include<strings.h>
int main()
{
    char name[30];
    int size;

    printf("enter a string\n");
    gets(name);

    size=strlen(name);
    printf("length of sting is %d", size);

}
