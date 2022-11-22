# include <stdio.h>
int main()
{
    int sunday,monday,tuesday,wenesday,thursday,friday,saturday;
    int option;

    printf("Please select option 1 for Sunday\n");
    printf("Please select option 2 for Monday\n");
    printf("Please select option 3 for tuesday\n");
    printf("Please select option 4 for Wenesday\n");
    printf("Please select option 5 for Thursady\n ");
    printf("Please select option 6 for Friday\n");
    printf("Please select option 7 for Saturday\n");
    printf("Please Enter your option");
    scanf("%d",&option);
    switch (option)
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
    printf("Wenesday");
    break;
    case 5:
    printf("Thursady");
    break;
    case 6:
    printf("Friday");
    break;
    case 7:
    printf("Saturday");
    break;
    default:
    printf("Please enter valid option");
    break;
    }
    
    return 0;

}