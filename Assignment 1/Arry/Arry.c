/*# include <stdio.h>
int main()
{
    int a[5]={10,20,30,40,50};
    printf("\n Yor arry is\n");
    for(int i=0;i<5;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}*/


# include <stdio.h>
int main()
{
    int a[5];
    for(int i=0;i<5;i++)
    {
        printf("Enter the value of %d index postion :",i);
        scanf("%d",&a[i]);
    }
    printf("\n Your arry is \n");
    for(int i=0;i<5;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}