#include <stdio.h>

void NoArgsNoReturn()

{
    int num, i, fact = 1;
    printf("Enter a number: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
        {
        fact=fact*1;

        }

    if (fact == num)
        {
        printf("%d is a factorial number.\n");
        }
    else
        {
        printf("%d is not a factorial number.\n");
        }
}


int main()
{
    NoArgsNoReturn();

    printf("Shreel Joshi,23CE049");

    return NoArgsNoReturn;
}
