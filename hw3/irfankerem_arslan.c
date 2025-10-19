// 20220201001-072 İrfan Kerem Arslan -HW3

#include <stdio.h>

int main()
{
    int number_1;
    int number_2;
    int i;
    printf("Enter two positive integers (first < second): ");
    scanf("%d %d", &number_1, &number_2);
    while (number_1 <= number_2)
    {
        if(number_1 % 2 == 1 && number_2 % 2 == 1) //odd case
        {
            i = number_2;
            while(number_1 <= i)
            {
                printf("%d\n",i);
                i -= 2;
            }
        }
        else if(number_1 % 2 == 0 && number_2 % 2 == 0) //even case
        {
            i = number_1;
            while(i <= number_2)
            {
                printf("%d\n",i);
                i += 2;
            }
        }
        else
            printf("Please enter two positive odd numbers or two positive even numbers!\n"); // case for one odd - one even
        printf("Enter two positive integers (first < second): ");
        scanf("%d %d", &number_1, &number_2);
    }
    printf("First number is larger than or equal to the second. Exiting.\n");
    return (0); // exit(0) ?? return is forbidden?
} 