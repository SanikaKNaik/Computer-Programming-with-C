//sum of two matrics

#include<stdio.h>
void main()
{
	int a[10][10], b[10][10], c[10][10], i, j, r1, r2, c1, c2;
	
	printf("enter the number of rows and column in matrics a\n");
	scanf("%d%d", &r1, &c1);
	
	printf("enter the number of rows and columns in matrics b\n");
	scanf("%d%d", &r2, &c2);
	
	if((r1==r2) && (c1==c2))
 {
	printf("enter the elements in matrics a\n");
	
	for(i=1; i<=r1; i++)
	{
		for(j=1; j<=c1; j++)
		{
		
			scanf("%d", &a[i][j]);
		}
	}
	
	printf("enter the elements in matrics b\n");
	
	for(i=1; i<=r2; i++)
	{
		for(j=1; j<=c2; j++)
		{
		
			scanf("%d",&b[i][j]);
	
		}
	}	
	

	for(i=1; i<=r1; i++)
	{
		for(j=1; j<=c2; j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		
		}
	}
	
	printf("the  matrics a is\n");
	for(i=1; i<=r1; i++)
	{
		for(j=1; j<=c1; j++)
		{
		   printf("%d\t",a[i][j]);
		}
		printf("\n");
	}

    printf("the  matrics b is\n");
	for(i=1; i<=r2; i++)
	{
		for(j=1; j<=c2; j++)
		{
		   printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	
	printf("the sum of matrics is\n");
	for(i=1; i<=r1; i++)
	{
		for(j=1; j<=c2; j++)
		{
		   printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
 }
 else
 {
 	printf("error");
 }
}


