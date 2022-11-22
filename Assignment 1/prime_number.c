/*# include <stdio.h>
int main()
{
    int i,n=8;
    if(n==1 || n==2)
    {
        printf("Number is prime");
    }
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            printf("Number is non prime");
            break;
        }
    
    else
    {
        printf("Number is prime");
        break;
    }
    }
    return 0;
}*/


# include <stdio.h>
int main()
{
    int i,n;
    printf("Enter the value of n :");
    scanf("%d",&n);
    if(n==1 || n==2)
    {
        printf("Number is prime");
    }
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
        printf("Number is non prime");
        break;
    }
    else
    {
        printf("Number is prime");
        break;
    }
    }
    return 0;
}