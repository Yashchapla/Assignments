/*# include <stdio.h>
int main()
{
    int n=370,temp=n,sum=0,rem;
    while(n!=0)
    {
        rem=n%10;
        sum=sum+rem*rem*rem;
        n=n/10;
    }
    if(temp==sum)
    {
        printf("Value is armstrong");
    }
    else
    {
     printf("Value is not armstrong");   
    }
    return 0;
}*/



# include <stdio.h>
int main()
{
    int n=50,temp=n,sum=0,rem;
    /*printf("Enter the value :");
    scanf("%d",&n);*/
    while(n!=0)
    {
        rem=n%10;
        sum=sum+rem*rem;
        n=n/10;
    }
    if(temp==sum)
    {
      printf("Value is armstrong");
    }
    else
    {
        printf("Value is not  armstrong");
    }
    return 0;
}