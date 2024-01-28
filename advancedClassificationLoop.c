#include "NumClass.h"

int isArmstrong(int num)
{

    int count = 0;
    int sum = 0;
    int num2 = num, num1 = num;
    while (num != 0)
    {
        count++;
        num = num / 10;
    }
    while (num1 != 0)
    {
        int x = num1 % 10;
        int sum2 = 1;
        for (int i = 0; i < count; i++)
        {
            sum2 = sum2 * x;
        }
        sum = sum + sum2;
        sum2 = 1;
        num1 = num1 / 10;
    }
    if (num2 == sum)
    {
        return 1;
    }
    return 0;
}

int isPalindrome(int num){
    int reversed = 0, original = num;

    while(num > 0){
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    return original == reversed;
}
