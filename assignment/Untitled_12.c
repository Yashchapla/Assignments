// while loop//
/*# include <stdio.h>
int main()
{
    int i=20;
    while(i>=11)
    {
        printf("%d\n",i);
        i--;
    }
    return 0;
}*/

//do while loop//
/*# include <stdio.h>
int main()
{
    int i=100;
    do
    {
        printf("%d\n",i);
        i--;
    }
    while(i>=65);
    return 0;
}*/

// for loop//

/*# include <stdio.h>
int main()
{
    int i;
    for(i=15;i>=9;i--)
    {
        printf("%d\n",i);
    }
    return 0;
}*/

// task of tabel for while loop//

/*# include <stdio.h>
int main()
{
    int i=1,n;
    printf("Enter the value:");
    scanf("%d",&n);
    while(i<=10)
    {
        printf("%d*%d=%d\n",n,i,n*i);
        i++;
    }
    return 0;
}*/

// task of tabel for do while loop//

/*# include <stdio.h>
int main()
{
    int i=10,n=13;
    do
    {
        printf("%d*%d=%d\n",n,i,n*i);
        i--;
    }
    while(i>=1);
    return 0;
}*/

// task for tabel in for loop//

/*# include <stdio.h>
int main()
{
    int i,n;

    printf("Enter the value:");
    scanf("%d",&n);

    for(i=1;i<=10;i++)
    {
        printf("%d*%d=%d\n",n,i,n*i);
    }
    return 0;
}*/

// natural number task for loop//

/*# include <stdio.h>
int main()
{
    int i,sum=0;
    for(i=1;i<=15;i++)
    {
        sum+=i;
    }
    printf("sum of natural number is %d",sum);
    return 0;
}*/

//natural number task is while loop//

/*# include <stdio.h>
int main()
{
    int i=1,sum=0;
    while(i<=10)
    {
        sum+=i;
        i++;
    }
    printf("sum of natural number is %d",sum);
    return 0;
}*/

// natrual number task for do while loop//

/*# include <stdio.h>
int main()
{
    int i=1,sum=0;
    do
    {
        sum+=i;
        i++;
        }
    while(i<=3);
    printf("sum of natural number is %d",sum);
    return 0;
}*/

// task for the factorial number is for loop//

/*#include <stdio.h>

int main()
{
    int i,fact=1;

    for(i=1;i<=5;i++)
    {
        fact*=i;

    }
    printf("factorial is %d",fact);

    return 0;
}*/

// task for factorial in while loop//

/*# include <stdio.h>
int main()
{
    int i=1,fact=1;
    
    while(i<=6)
    {
        fact*=i;
        i++;
    }
    printf("factorail is %d",fact);
    return 0;
}*/


// task for fibonacci series// //for loop//

/*# include <stdio.h>
int main()
{
    int i,a=0,b=1,c;
    printf("%d%d",a,b);
    for(int i=1;i<=8;i++)
    {
        c=a+b;
        printf("%d\n",c);
        a=b;
        b=c;
    }
    return 0;
}*/

// prime number for loop//

/*# include <stdio.h>
int main()
{
    int i,n=6;

    if(n==1 || n==2)
    {
        printf("Number is prime");
    }
    for(i=1;i<n;i++)
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
    printf("Enter the value:");
    scanf("%d",&n);

    if(n==1 || n==2)
    {
        printf("Number is prime");
    }
    for(i=1;i<n;i++)
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




