// to find transpose of a matrix

#include<stdio.h>
void main()
{
	int a[10][10], i, j, r, c, t[10][10];
	
	printf("enter the number of rows\n");
	scanf("%d", &r);
	
	printf("enter the number of columns\n");
	scanf("%d", &c);
	
	printf("enter the elements in the array\n");	
	for(i=1; i<=r; i++)
	{
		for(j=1; j<=c; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
		
	for(i=1; i<=r; i++)
	{
		for(j=1; j<=c; j++)
		{
		
		 t[j][i]=a[i][j];
		}
		printf("\n");
	}
	
	
	printf("the array is\n");
	for(i=1; i<=r; i++)
	{
		for(j=1; j<=c; j++)
		{
		    printf("%d\t", a[i][j]);
		}
		printf("\n");
	}

	
	printf("the transpose array is\n");
	for(i=1; i<=c; i++)
	{
		for(j=1; j<=r; j++)
		{
	    	printf("%d\t", t[i][j]);
        }
	    	printf("\n");
     	
	}

}
