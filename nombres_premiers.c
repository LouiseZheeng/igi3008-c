// primes.c

#include <stdio.h>
#include <math.h>

int isprime(int p)
{
    for (int i=2; i<=sqrt(p); i++)
    {
        if (p<=1)
        {
            return 0;
        }
        else if (p%i==0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    for (int p=2; p<=100; p++)
    {
        if (isprime(p))
        {
            printf("%d\t", p);
        }
    }
    return 0;
}