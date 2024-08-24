/**
 * Problem 3: Largest Prime Factor
 * https://projecteuler.net/problem=3
 *
 * github.com/evrifaessa
 * yagiz.dev
 */

#include <stdio.h>
#include <stdbool.h>

int main()
{
    int number = 600851475143;
    int i;
    int largestYet;

    for (i = 1; i <= number; ++i)
    {
        if (isPrime(i) && number % i == 0)
        {
            largestYet = i;
        }
    }

    printf("%d", largestYet);
    return 0;
}

/**
 * I honestly don't know what's the best and the most efficient way to know if a number is a prime number.
 * I also am quite unsure if the best way to find the largest prime factor of a given number is to just bruteforce every number until you find the largest.
 * 
 * Leaving this problem for now, will come back with a clearer mind.
 * 
 */
bool isPrime(int n)
{

}