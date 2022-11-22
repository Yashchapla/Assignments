/*# include <stdio.h>
int main()
{
    int i=1;
    do
    {
        printf("%d\n",i);
        i++;
    }
    while(i<=15);
    return 0;
}*/

/*# include <stdio.h>
int main()
{
    int i=20;
    do
    {
        printf("%d\n",i);
        i--;
    }
    while(i>=17);
    return 0;
}*/

# include <stdio.h>
int main()
{
    int i=5,n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    do
    {
        printf("%d*%d=%d\n",n,i,n*i);
        i++;
    }
    while(i<=15);
    return 0;
}