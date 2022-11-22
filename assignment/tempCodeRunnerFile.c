
#include<stdio.h>
#include<string.h>

int main()
{
    char s1[30] = "tops";
    char s2[20] = " tech";
    int l1 = strlen(s1);
    int l2 = strlen(s2);
    for(int i=0;i<=l1+l2;i++){
        s1[l1+i] = s2[i];   //  concat
        s1[i] = s2[i];      //  copy
    }
    printf("Concated string is %s",s1);
    printf("Copied string is %s",s1);
    return 0;
}