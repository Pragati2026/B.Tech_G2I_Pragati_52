#include<stdio.h>
int main()
{
    int  mat1[25][25],mat2[25][25],row,col,i,j;
    printf("enter the rows and columns of matrix");
    scanf("%d%d",&row,&col);
    printf("enter the elements of matrix");
    for (i=0;i<row;i++)
    {
        for(j=0;j<col;j++){
            scanf("%d",&mat1[i][j]);
    
        }

    }
    printf("matrix");
    for (i=0;i<row;i++)
    {
        for(j=0;j<col;j++){
            printf("\t%d",mat1[i][j]);
        }
    printf("\n");
}
for (i=0;i<row;i++)
    {
        for(j=0;j<col;j++){
            mat2[j][i]=mat1[i][j];
        
        }}
        printf("transpose matrix");
   
for (i=0;i<col;i++)
    {
        for(j=0;j<row;j++){
           
            printf("\t%d",mat2[i][j]);
        }
    printf("\n");
}



}