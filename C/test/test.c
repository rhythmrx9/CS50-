#include<stdio.h>

int main()
{
    int i,n,j=0,d,temp;
    printf("enter numbers");
    scanf("%d",&n);
    int a[15];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=j+1;i<n;i++)
    {
        d=i;
        while(d>0&&a[d]<a[d-1])
        {
            temp=a[d];
            a[d]=a[d-1];
            a[d-1]=temp;
            d--;
        }

    }

    return 0;
}