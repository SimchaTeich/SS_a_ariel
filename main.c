#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "NumClass.h"

int main(int argc, char **argv)
{
    int start = atoi(argv[1]);
    int end = atoi(argv[2]);
    
    printf("The Armstrong numbers are:");
    for(int i = start; i < end; i++)
    {
        if(isArmstrong(i) == TRUE)
        {
            printf(" %d", i);
        }
    }

    printf("\n");
    
    printf("The Polindrome numbers are:");
    for(int i = start; i < end; i++)
    {
        if(isPalindrome(i) == TRUE)
        {
            printf(" %d", i);
        }
    }

    printf("\n");

    printf("The Prime numbers are:");
    for(int i = start; i < end; i++)
    {
        if(isPrime(i) == TRUE)
        {
            printf(" %d", i);
        }
    }

    printf("\n");
    printf("The Strong numbers are:");
    for(int i = start; i < end; i++)
    {
        if(isStrong(i) == TRUE)
        {
            printf(" %d", i);
        }
    }

    printf("\n");

    return 0;
}
