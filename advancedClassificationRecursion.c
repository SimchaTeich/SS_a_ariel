#include "NumClass.h"

int getFirstDigit(int num, int lenInDigits);
int getNumWithoutFirstDigit(int num);
int numOfDigits(int n);
int isPalindrome(int n);
int isPalindromeRecursion(int n, int lenInDigits);
int retArmstrong(int n, int lenInDigits);
int power(int num, int p);

int isPalindrome(int n)
{
    return isPalindromeRecursion(n, numOfDigits(n));
}

int isPalindromeRecursion(int n, int lenInDigits)
{
    // when n for example is 70, bun actualy is 070... --> check the last digit.
    // when n for example is 7, but actualy is 07...   --> check the number of digits.
    if((n%10 != 0) && (numOfDigits(n) != lenInDigits))
    {
        return FALSE;
    }

    if(n < 10)
    {
        return TRUE;
    }
    else if(getFirstDigit(n, lenInDigits) != (n % 10)) // check if first and last letters are equals.
    {
        return FALSE;
    }
    else
    {
        // cut the number. for example: n is 12341, so do 1--234--1, and 234 is go to recursia.
        return isPalindromeRecursion(getNumWithoutFirstDigit(n) / 10, lenInDigits - 2);
    }
}

int isArmstrong(int n)
{
   int lenInDigits = numOfDigits(n);
   return retArmstrong(n, lenInDigits) == n ? TRUE : FALSE;
}

/* return the armstrong num of n by recursion*/
int retArmstrong(int n, int lenInDigits)
{
    if(n == 0)
    {
        return 0;
    }
    return power((n % 10), lenInDigits) + retArmstrong((n / 10), lenInDigits);
}

// -- HELPER FUNCTIONS --//

/* return the first difgit of any positive number type int */
int getFirstDigit(int num, int lenInDigits)
{
    // when first digit is, actualy, 0..
    if(lenInDigits > numOfDigits(num))
    {
        return 0;
    }

    while(num >= 10)
    {
        num /= 10;
    }
    return num;
}

/* return the same input number but without the first difgit */
int getNumWithoutFirstDigit(int num)
{
    int ret = 0;
    int tens = 1;

    if(num < 10){return num;}

    while(num > 10) // >=
    {
        ret += (num % 10) * tens;
        tens *= 10;
        num /= 10;
    }

    return ret;
}


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

/* get num, p and return num^p */
int power(int num, int p)
{
    int ret = 1;
    
    for(int i = 0; i < p; i++)
    {
        ret *= num;
    }

    return ret;
}