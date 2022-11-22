/*# include <stdio.h>
int main()
{
    int n,rem,sum=0,r;
    printf("Enter the value :");
    scanf("%d",&n);
    r=n%10;
    while(n!=0)
    {
        rem=n%10;
        n=n/10;
    }
    printf("sum is %d",rem+r);
    return 0;
}*/




// Number sepration first and last digit sum //

# include <stdio.h>
int main()
{
    int n=1414,rem,sum=0,r;
    r=n%10;
    while(n!=0)
    {
        rem=n%10;
        n=n/10;
    }
    printf("Sum is %d",rem+r);
    return 0;
}