/*# include <stdio.h>
void Addition()
printf("Enter the value of a:");
sacanf("%d",&a);
printf("Enter the value of b:");
scanf("%d",&b);

{
    printf("Addition of %d and %d is %d\n",a,b,a+b);
}
void Subtraction(int a,int b)
{
    printf("Subtraction of %d and %d is %d\n",a,b,a-b);
}
void Multiplication(int a, int b)
{
    printf("Multiplication of %d and %d is %d\n",a,b,a*b);
}
void Division(int a, int b)
{
    printf("Division of %d and %d is %d\n",a,b,a/b);
}

int main()
{
    Addition();
    Subtraction(100,50);
    Multiplication(100,50);
    Division(100,50);
    
    return 0;
}*/



# include <stdio.h>
int  Addition(){
int a,b;

    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    return a+b;
}
void Subtraction(int a,int b)
{
     printf("Subtraction of %d and %d is %d\n",a,b,a-b);
}
int main()
{
    int s=Addition();
    printf("Addition of %d\n",s);
    Subtraction(100,50);
    return 0;
}


