//dynamic memory allocation
//programme to calculate sum of n number enter by user
#include<stdio.h>
void main()
{
    int n,*ptr,sum=0,i;
    printf("enter the element of number:\n");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        printf("\n %d",*(ptr+i));
    }
    printf("\n enter the element:");
    for(i=0;i<n;++i)
    {


        scanf("%d",ptr+i);
    sum=sum+*(ptr+i);
    }
    printf("sum=%d",sum);
}

