/*# include <stdio.h>           \\ logical operators\\
int main()
{   \\And&&//
    int a=10,b=7;

    printf("%d\n",10<15 && 7>6);
    printf("%d\n",10>15 && 7<20);
    printf("%d\n",10>20 && 7>14);
    printf("%d\n",10>5 &&  20<7);

    return 0;


}*/


/*# include <stdio.h>
int main()
{ //OR||//
    int a=10,b=7;

    
    printf("%d\n",10<15 || 7>6);
    printf("%d\n",10>15 || 7<20);
    printf("%d\n",10>20 || 7>14);
    printf("%d\n",10>5 || 20<7);

    return 0;

}*/


/*# include <stdio.h>
int main()
{  //! not//
    int a=10;

    printf("%d\n",!(10==10));
    printf("%d\n",!(10==15));
    printf("%d\n",!(10==5));

    return 0;

}*/

# include <stdio.h>        // shortend operators//
int main()
{
    int a=10;

    printf("%d\n",a+=10);
    printf("%d\n",a-=10);
    printf("%d\n",a*=10);
    printf("%d\n",a/=10);
    printf("%d\n",a%=10);

    return 0;
}

