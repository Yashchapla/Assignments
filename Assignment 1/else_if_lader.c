/*# include <stdio.h>
int main()
{
    int p;
    printf("Enter the percentage:");
    scanf("%d",&p);
    if(p>100)
    {
        printf("Invalid input....!!!");
    }
    else if(p>75 && p<=100)
    {
        printf("You are pass with A garde");
    }
    else if(p>55 && p<=75)
    {
        printf("You are pass with B garde");
    }
    else if(p>35 && p<=55)
    {
        printf("You are pass with C garde");
    }
    else 
    {
        printf("You are fail....!!!");
    }
    return 0;
}*/

# include <stdio.h>
int main()
{
    int p=34;
    if(p>100)
    {
        printf("Invalid input.....!!!!");
    }
    else if(p>75 && p<=100 )
    {
        printf("You are pass with A garde");
    }
    else if(p>55 && p<=75)
    {
        printf("You are pass with B garde");
    }
    else if(p>35 && p<=55)
    {
        printf("You are pass With C garde");
    }
    else
    {
        printf("You are fail.....!!!!!");
    }
    return 0;
}
