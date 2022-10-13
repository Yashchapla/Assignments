/*# include <stdio.h>         //arithmatic operators//
int main()
{
    int a=450,b=365;

    printf("Addtiton of %d and %d is %d\n",a,b,a+b);
    printf("subtraction of %d and %d is %d\n",a,b,a-b);
    printf("multiplication of %d and %d is %d\n", a,b,a*b);
    printf("division of %d and %d is %d\n",a,b,a/b);
    printf("moduls of %d and %d is %d\n",a,b,a%b);

    return 0;
}*/

# include <stdio.h>
int main()
{
    int a,b;

    printf("Enter the value of a:");
    scanf("%d",&a);

    printf("Enter the value of b:");
    scanf("%d",&b);

    printf("%d+%d=%d\n",a,b,a+b);
    printf("%d-%d=%d\n",a,b,a-b);
    printf("%d*%d=%d\n",a,b,a*b);
    printf("%d/%d=%d\n",a,b,a/b);
    
    
    return 0;
}