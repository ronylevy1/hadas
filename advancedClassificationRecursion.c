#include <stdio.h>
#include "NumClass.h"

int digitCount(int num){
    if(num == 0){
        return 0;
    }
    else
    return 1 + digitCount(num / 10);
}

int power(int digit, int n){
    int ans = 1;
    for(int i = 0; i < n; i++){
        ans = ans * digit;
    }
    return ans;
}

int isArmstrongRecursive(int num, int n){
    if(num == 0){
        return 0;
    }
    else{
        int digit = num % 10;
        return power(digit, n) + isArmstrongRecursive(num / 10, n);
    }
}

int isArmstrong(int num){
    int n = digitCount(num);
    int sum = isArmstrongRecursive(num,n);
    return (sum == num);
    }

int reverseNumber(int num, int rev){
    if(num == 0){
        return rev;
    }
    else{
        int digit = num % 10;
        int remaining = num / 10;
        return reverseNumber(remaining, rev * 10 + digit);
    }
}

int isPalindrome(int num){
    return num == reverseNumber(num, 0);
}
