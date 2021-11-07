#include "NumClass.h"

int numOfDigits(int n);
int power(int num, int p);

int isPalindrome(int n)
{
    int temp = n;
    int ret = TRUE;
    int lenght = numOfDigits(n);
    int digits[lenght];
    
    // enter all digits of parameter n into array
    for(int i = 0; i < lenght; i++)
    {
        int digit = temp % 10;
        temp /= 10;
        digits[i] = digit;
    }

    // check polindrome of the array.
    for(int i = 0; i < lenght/2; i++)
    {
        if(digits[i] != digits[lenght-1-i])
        {
            ret = FALSE;
        }
    }

    return ret;
}

int isArmstrong(int n)
{
    int temp = n;
    int lenght = numOfDigits(n);
    int digits[lenght];
    
    // enter all digits of parameter n into array
    for(int i = 0; i < lenght; i++)
    {
        int digit = temp % 10;
        temp /= 10;
        digits[i] = digit;
    }

    int sum = 0;
    for(int i = 0; i < lenght; i++)
    {
        sum += power(digits[i], lenght);
    }

    return sum == n ? TRUE : FALSE;
}

/*-- HELPERS_FUNCTIONS-- */

/* return how many digits have in a number. */
int numOfDigits(int n)
{
    int ret = 1;

    while(n / 10 != 0)
    {
        n /= 10;
        ret++;
    }

    return ret;
}


int power(int num, int p)
{
    int ret = 1;
    
    for(int i = 0; i < p; i++)
    {
        ret *= num;
    }

    return ret;
}