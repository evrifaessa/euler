/**
 * Problem 1: Multiples of 3 or 5
 * https://projecteuler.net/problem=1
 * 
 * github.com/evrifaessa
 * yagiz.dev
 */

#include <stdio.h>

int main()
{
    const int max = 1000;
    int sum = 0;
    int i;

    for (i = 1; i < max; ++i)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            sum = sum + i;
        }
    }

    printf("The sum of all the multiplies of 3 or 5 below %d is %d.\n", max, sum);

    return 0;
}