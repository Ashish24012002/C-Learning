/*1. Calculate the Sum of Even Numbers
Write a program to calculate the sum of all even numbers between 1 and N.
*/

#include <stdio.h>
void main()
{
    int n, sum = 0;

    printf("enter number : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
           //printf("%d : even\n", i);
            sum = sum + i;
            printf("%d ", sum);
        }
        else
        {
           // printf("%d : odd\n", i);
            sum = sum + i;
            printf("%d ", sum);
        }
    }
}