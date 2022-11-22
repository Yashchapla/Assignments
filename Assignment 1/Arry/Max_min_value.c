/*# include <stdio.h>
int main()
{
    int a[5]={10,20,30,40,50};
    int max=a[0];
    for(int i=0;i<5;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("Maximum value of arry is %d",max);
    return 0;
}*/



# include <stdio.h>
int main()
{
    int a[5]={10,20,30,40,50};
    int min=a[0];
    for(int i=0;i<5;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    printf("Minimum value of the arry is %d",min);
    return 0;
}