# include <stdio.h>
int main()
{
    int n=1221,temp=n,sum=0,rem;
    while(n!=0)
    {
        rem=n%10;
        sum=sum*10+rem;
        n=n/10;
    }
    if(temp==sum)
    {
        printf("Value is palidrome");
    }
    else
    {
        printf("Value is not palidrome");
    }
    return 0;

}