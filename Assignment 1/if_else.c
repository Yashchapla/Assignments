# include <stdio.h>
int main()
{
    int age;
    printf("Enter the your age:");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("You are eligble for voting");
    }
    else
    {
        printf("you are not eligble for voting");
    }
    return 0;
}