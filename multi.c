#include<stdio.h>
int main()
{
    int mat_1[25][25],mat_2[25][25],mat_3[25][25],i,j,k,r1,c1,r2,c2,sum=0;
    printf("enter the no of rows and columns of first matrix\n");
    scanf("%d%d",&r1,&c1);
    printf("enter the no of rows and columns of second matrix\n");
    scanf("%d%d",&r2,&c2);
    if (c1!=r2)
    {
        printf("multiplication is not possible");
    }
    else
    {
        printf("enter the elements of first matrix\n");
        for (i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                scanf("%d",&mat_1[i][j]);

            }
        }
        printf("enter the elements of second matrix\n");
        for (i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                scanf("%d",&mat_2[i][j]);

            }
        }
         printf(" first matrix\n");
        for (i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                printf("\t%d",mat_1[i][j]);

            }
            printf("\n");
        }
        printf(" second matrix\n");
        for (i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                printf("\t%d",mat_2[i][j]);

            }
            printf("\n");
        }
         
        for (i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                for(k=0;k<c1;k++)
                {
                    sum=sum+mat_1[i][k]*mat_2[k][j];

                }
                mat_3[i][j]=sum;
                sum=0;
            }
        }
        printf("resultant matrix\n");
        for (i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                printf("\t%d",mat_3[i][j]);

            }
            printf("\n");
        
    }
    }
    return 0;

}
