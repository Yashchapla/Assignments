/*

* * * *
* * * *
* * * *
* * * *

*/

/*# include <stdio.h>
int main()
{
    int i,j,n=4;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}*/


/*

* * * * * * * *
* * * * * * * *
* * * * * * * *
* * * * * * * *

*/

/*# include <stdio.h>
int main()
{
    int i,j,n=8,n1=4;
    for(i=1;i<=n1;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}*/


/*

*
* *
* * *
* * * *
* * * * *
* * * * * *

*/

/*# include <stdio.h>
int main ()
{
    int i,j,n=6;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}*/

/*

* * * * * *
* * * * *
* * * *
* * *
* *
*

*/

/*# include <stdio.h>
int main()
{
    int  i,j,n=6;
    for(i=1;i<=n;i++)
    {
        for(j=n;j>=i;j--)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}*/

/*

          *
        * *
      * * *
    * * * *
  * * * * *
* * * * * *

*/

/*# include <stdio.h>
int main()
{
    int i,j,k,n=6;
    for(i=1;i<=n;i++)
    {
        for(k=1;k<=n-i;k++)
        {
            printf("  ");
        }
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}*/


/*

* * * * * *
  * * * * *
    * * * *
      * * *
        * *
          *
*/ 


/*# include <stdio.h>
int main()
{
    int i,j,k,n=6;
    for(i=1;i<=n;i++)
    {
        for(k=1;k<i;k++)
        {
            printf("  ");
        }
        for(j=n;j>=i;j--)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}*/


/*   *
    * *
   * * *
  * * * *
 * * * * *
* * * * * *
 * * * * *
  * * * *
   * * *
    * *
     *

     */

/*# include <stdio.h>
int main()
{
    int i,j,k,n=6;
    for(i=1;i<=n;i++)
    {
        for(k=1;k<=n-i;k++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for(i=1;i<=n;i++)
    {
        for(k=1;k<=i;k++)
        {
            printf(" ");
        }
        for(j=1;j<=n-i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}*/


/*#include<stdio.h>

int main()
{
    int i,j,k,n=5;
    for(i=1;i<=n;i++){
        for(k=1;k<=n-i;k++){
            printf(" ");
        }
        for(j=1;j<=i;j++){

           if(j==1||j==i||(i==n&&j==3)){
             printf("* ");
           }
           else{
            printf("  ");
           }
        }
        printf("\n");
    }
    for(i=1;i<=n;i++){
        for(k=1;k<=i;k++){
            printf(" ");
        }
        for(j=1;j<=n-i;j++){
            if(j==1||j==n-i){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}*/


#include<stdio.h>

int main()
{
    int i,j,n=5;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
             //if(i==1||j==1||i==n||j==n)||i==(n/2)+1||j==(n/2)+1){
               if(i==4 || j==2){
            printf("* ");

            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}