# include <stdio.h>
int main()
{
    int a[3][3]={{1,2,3,},{4,5,6},{7,8,9}};
    printf("\nYour matrix is\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    int r;
    printf("Enter the value of row:");
    scanf("%d",&r);
    int j=r-1,sum=0;
    for(int i=0;i<3;i++)
    {
        sum=sum+a[i][j];
    }
    printf("Addition of %d row elements of the matrix is %d",(r),sum);
    return 0;

}