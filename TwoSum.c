#include<stdio.h>

int main()
{
    int n,i,j,t;
    printf("How Many Numbers: ");
    scanf("%d",&n);

    printf("Enter %d Numbers: ",n);

    int a[n];

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter Target Value: ");
    scanf("%d",&t);

    printf("%d\n",t);

    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    printf("\n");

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i] + a[j] == t)
            {
                printf("%d %d",i,j);
                printf("\n");
            }
        }
    }

    return 0;
}
