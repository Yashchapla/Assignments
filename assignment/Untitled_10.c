# include <stdio.h>    // else if lader//
int main()
{
    int m1=50,m2=68,m3=78,m4=95,m5=45;
    int m;
    printf("percentage is %d",(m1+m2+m3+m4+m5)/5);

    if(m>100)
    {
        printf("Invalid input...");
    }
    else if(m>75&&m<=100)
    {
        printf("You are pass with A grade");
    }
    else if(m>55&&m<=75)
    {
        printf("You are pass with B grade");
    }
    else if(m>35&&m<=55)
    {
        printf("You are pass with C grade");
    }
    else

    {
        printf("You are fail......");
    }
    return 0;


}