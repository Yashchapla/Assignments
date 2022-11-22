/*
* * * * * *
*         *
*         *
*         *
*         *
* * * * * *
*/

/*# include <stdio.h>
int main()
{
    int i,j,n=6;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==1||j==1||i==n||j==n)
            {
                printf("* ");
            }
            else 
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}*/

/*

* * * * * * *
* * * * * * *
* * * * * * *
*/

/*# include <stdio.h>
int main()
{
    int i,j,i1=3,j1=7;
    for(i=1;i<=i1;i++)
    {
        for(j=1;j<=j1;j++)
        {
            if(i==i1||j==j1||i==1||j==1)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}*/

/*  *
   * *
  * * *
 * * * *
* * * * *

*/

# include <stdio.h>
int main()
{
    int i,j,k,n=5;
    for(i=1;i<=n;i++)
    {
        for(k=1;k<=n-i;k++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            if(j==1||j==i||i==n)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
