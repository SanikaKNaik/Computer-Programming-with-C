//fibonacci series

#include<stdio.h>
void main()

{
  int n, i=1, a=0, b=1, c;
	
  printf("enter the value of n\n");
  scanf("%d",&n);
	
   while(i<=n)
   {
    printf("%d", a);
    c=a+b;
    a=b;
    b=c;
    i++;
   }
}
