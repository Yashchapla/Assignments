/*# include <stdio.h>
int main()
{
    int n=147,rem,sum=0,r;
    r=n%10;
    while(n!=0)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    printf("Sum is %d",sum);
    return 0;
}*/





// Number sepration all digit sum //

# include <stdio.h>
int main()
{
    int n=4141,rem,sum=0,r;
    r=n%10;
    while(n!=0)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    printf("Sum is %d",sum);
    return 0;
}