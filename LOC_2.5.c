#include<stdio.h>
int main()
{  
int a1[2][2],sum=0,a2[2][2],s=1,i,j;

    printf("Enter elements of first matrix:\n");

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a1[i][j]);
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d ",a1[i][j]);
        }
        printf("\n");
    }
    printf("Enter elements of second matrix:\n");
     for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a2[i][j]);
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d ",a2[i][j]);
        }
        printf("\n");
    }
    printf("Sum :\n");
    for(i =0;i<2;i++)
    {
        for (j=0;j<2;j++)
        {
            sum=a1[i][j]+a2[i][j];
            printf("%d ",sum);

        }
        printf("\n");
    }
    printf("Product:\n");
    for(i =0;i<2;i++)
    {
        for (j=0;j<2;j++)
        {
            s=a1[i][j]*a2[i][j];
            printf("%d ",s);

        }
        printf("\n");
    }
    return 0;
}
