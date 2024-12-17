#include <stdio.h>
void main()
{
    // 1+2+3+4+5=15
    int n, sum = 0;

    printf("Enter Number : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
        printf("%d : %d\n", i, sum);
    }

    printf("The total sum of the first %d natural numbers is: %d\n", n, sum);
}