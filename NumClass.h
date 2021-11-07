#ifndef _NUMCLASS_H_
#define _NUMCLASS_H_

#define TRUE 1
#define FALSE 0

/*
will return if a number is Armstrong number
An Armstrong number is an n-digit number that is equal to the sum of the nth powers of its digits.
for example: 407 = 4^3 + 0^3 + 7^3 = 64 + 0 + 343 = 407
*/
int isArmstrong(int n);

/* will return if a number is a polindrome */
int isPalindrome(int n);

/* will return if a number is prime */
int isPrime(int n);

/*
Strong number is a special number whose sum of the factorial of digits is equal to the original
number. for example 145 is strong number because:
145 = 1! + 4! + 5! = 1 + 24 + 120 = 145
*/
int isStrong(int n);

#endif
