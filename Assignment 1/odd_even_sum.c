/*# include <stdio.h>
int main()
{
    int n=842,rem,odd=0,even=0;
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
    printf("Sum of even digit is %d\n",even);
    printf("Sum of odd digit is %d\n",odd);
    return 0;
}*/


# include <stdio.h>
int main()
{
    int n,rem,odd=0,even=0;
    printf("Enter the value:");
    scanf("%d",&n);
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
    printf("Sum of even digit number is %d\n",even);
    printf("Sum of odd digit number is %d\n",odd);
    return 0;
}