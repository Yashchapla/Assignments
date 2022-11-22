/*# include <stdio.h>
int main()
{
    int i=8;
    for(i=8;i<=16;i++)
    {
        printf("%d\n",i);
    }
    return 0;
}*/

/*# include <stdio.h>
int main()
{
    int i=12;
    for(i=12;i>=9;i--)
    {
        printf("%d\n",i);
    }
    return 0;
}*/

# include <stdio.h>
int main()
{
    int i=1,n;
    printf("Enter the value n:");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        printf("%d*%d=%d\n",n,i,n*i);

    }
    return 0;
}
