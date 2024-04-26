// factorial of given no

#include<stdio.h>
void main()

{
  int n, fact = 1;
	
  printf("enter the value of n \n");
  scanf("%d", &n);
	
  while(n>0)
  {
   fact =fact*n;	
   n--;
  }	
	printf("the factorial for given number is %d", fact);
}
