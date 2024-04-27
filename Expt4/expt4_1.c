// find sum and average of elements in an array. 

#include<stdio.h>

void main()
{
	int n, a[10], i;
	float sum=0, avg;
	
	printf("enter the number of the elements\n");
	scanf("%d",&n);
	
    printf("enter the elements\n");
    for(i=0; i<n; i++)
    scanf("%d",&a[i]);
    
    for(i=0; i<n; i++)
    sum=sum+a[i];

	printf("the sum is %f\n",sum);
		

	avg=sum/n;
	printf("the avg is %f",avg);
}
