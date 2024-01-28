#include <stdio.h>
#include "NumClass.h"

int main()
{
    int x, y;
    scanf("%d%d", &x, &y);

    if (x > y)
    {
        printf("The Strong numbers are:");
        for (int i = y; i <= x; i++)
        {
            if (isStrong(i))
            {
                printf(" %d", i);
            }
        }

        printf("\n");
        printf("The Palindromes are:");
        for (int i = y; i <= x; i++)
        {
            if (isPalindrome(i))
            {
                printf(" %d", i);
            }
        }
        printf("\n");
        printf("The Prime numbers are:");
        for (int i = y; i <= x; i++)
        {
            if (isPrime(i))
            {
                printf(" %d", i);
            }
        }
        printf("\n");
        printf("The Armstrong numbers are:");
        for (int i = y; i <= x; i++)
        {
            if (isArmstrong(i))
            {
                printf(" %d", i);
            }
        }
        printf("\n");
    }
    else
    {
        printf("The Strong numbers are:");
        for (int i = x; i <= y; i++)
        {
            if (isStrong(i))
            {
                printf(" %d", i);
            }
        }
        printf("\n");
        printf("The Palindromes are:");
        for (int i = x; i <= y; i++)
        {
            if (isPalindrome(i))
            {
                printf(" %d", i);
            }
        }
        printf("\n");
        printf("The Prime numbers are:");
        for (int i = x; i <= y; i++)
        {
            if (isPrime(i))
            {
                printf(" %d", i);
            }
        }
        printf("\n");
        printf("The Armstrong numbers are:");
        for (int i = x; i <= y; i++)
        {
            if (isArmstrong(i))
            {
                printf(" %d", i);
            }
        }
        printf("\n");
    }
    return 0;
}