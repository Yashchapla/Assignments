//first and last digit number sum//

/*# include <stdio.h>
int main()
{
    int n=25836,rem,sum=0,r;
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
    int n,rem,sum=0,r;
    printf("Enter the number:");
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

// odd and even number sum//

/*# include <stdio.h>
int main()
{
    int n=298316,rem,even=0,odd=0;
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
    printf("sum of odd digit is %d\n",odd);
    printf("sum od even digit is %d\n",even);
    return 0;
}*/

# include <stdio.h>
int main()
{
    int n,rem,even=0,odd=0;
    printf("Enter the value:");
    scanf("%d",n);
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
    printf("sum of even digit is %d\n",even);
    printf("sum of odd digit is %d\n",odd);
    return 0;
}