#include "NumClass.h"

int factorial(int n);

int isPrime(int n)
{
    if(n == 1)
    {
        return TRUE;
    }

    int ans = TRUE;
    if(n == 0 || n == 1)
    {
        ans = FALSE;
    }
    else
    {
        for(int i = 2; i <= n/2; i++)
        {
            if(n % i == 0)
            {
                ans = FALSE;
                break;
            }
        }
    }
    return ans;
}

int isStrong(int n)
{
    int const originalN = n;
    int sum = 0;
    int nextNum = 0;

    while(n > 0)
    {
        nextNum = n % 10;
        n /= 10;
        sum += factorial(nextNum);

        if (sum > originalN)
        {
            break;
        }
    }

    return sum == originalN ? TRUE : FALSE;
}


// HELP FUNCTIONS
/* return the fuctorial of input number.*/
int factorial(int n)
{
    int ans = n;
    for(int i = n-1; i >= 2; i--)
    {
        ans *= i;
    }
    return ans;
}
//-------------------------------
