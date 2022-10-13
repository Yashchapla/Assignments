// firs and last digit sum while loop //

/*# include <stdio.h>
int main()
{
    int n,rem,sum=0,r;

    printf("Enter the value:");
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

/*# include <stdio.h>
int main()
{
    int n=89764,rem,sum=0,r;
    r=n%10;
    while(n!=0)
    {
        rem=n%10;
        n=n/10;
    }
    printf("sum is %d",rem+r);
    return 0;
}*/


// odd and even digit sum while loop//

# include <stdio.h>
int main()
{
    int n=632,rem,even=0,odd=0;

    while(n!=0)
    {
        rem=n%10;
        if(rem%2==0)
        {
            even=even+rem;
        }
        else
        {
            odd=odd+rem;
        }
            n=n/10;
        
    }
    printf("sum of even digit number is %d",even);
    printf("sum of odd digit is%d",odd);
    return 0;
}