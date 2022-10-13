# include <stdio.h>  //switch//
int main()
{
    int Sunday,Monday,Tuesday,Wednesday,Thursday,Friday,Saturday;
    int option;

    printf("Please select 1 for Sunday\n");
    printf("Please select 2 for Monday\n");
    printf("Please select 3 for Tuesday\n");
    printf("Please select 4 for Wednesday\n");
    printf("Please select 5 for Thursday\n");
    printf("Please select 6 for Friday\n");
    printf("Please select 7 for Saturday\n");
    printf("Please select your choice:");
    scanf("%d",&option);

    switch(option)
    {
        case 1:
        printf("Sunday");
        break;
        case 2:
        printf("Monday");
        break;
        case 3:
        printf("Tuesday");
        break;
        case 4:
        printf("Wednesday");
        break;
        case 5:
        printf("Thursday");
        break;
        case 6:
        printf("Friday");
        break;
        case 7:
        printf("Saturday");
        break;
        default:
        printf("Please select valid input.....");
        break;
        }
        return 0;
}