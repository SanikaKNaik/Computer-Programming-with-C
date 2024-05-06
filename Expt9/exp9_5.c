#include<stdio.h>
int main()
{
        int a[10],n,i,largest;
    int *p;
    printf("\nEnter how many elements\n");
    scanf("%d",&n);

    printf("\nEnter %d elements of array\n",n);
    for(i=0;i<n;i++)
      {
        scanf("%d",&a[i]);
      }

    largest=a[0];
    p=a;

    for(i=0;i<n;i++)
     {
        if(*p>largest)
         {
            largest=*p;
         }
       p++;
     }

    printf("\nElements are \n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nLargest element is %d",largest);

}
