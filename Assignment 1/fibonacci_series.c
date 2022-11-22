/*-# include <stdio.h>
int main()
{
    int i,a=0,b=1,c;
    printf("%d %d",a,b);
    for(i=1;i<=3;i++)
    {
        c=a+b;
        printf("%d\n",c);
        a=b;
        b=c;
    }
    return 0;
}*/


# include <stdio.h>
int main()
{
    int i,a=0,b=1,c;
    printf("%d %d",a,b);
    for(i=1;i<=8;i++)
    {
        c=a+b;
        printf("%d\n",c);
        a=b;
        b=c;
    }
    return 0;
}