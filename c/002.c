/**
 * Problem 2: Even Fibonacci Numbers
 * https://projecteuler.net/problem=2
 *
 * github.com/evrifaessa
 * yagiz.dev
 */

#include <stdio.h>

int main()
{
    int smaller = 1;
    int bigger = 2;
    int next;

    int max = 4000000;
    int sum = 0;

    while (bigger < max)
    {
        if (bigger % 2 == 0)
        {
            sum = sum + bigger;
        }

        next = smaller + bigger;
        smaller = bigger;
        bigger = next;
    }

    printf("The sum of the even-valued terms until %d is %d.\n", max, sum);

    return 0;
}