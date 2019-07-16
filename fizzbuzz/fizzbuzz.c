#include <stdio.h>

/*
    Your fizzbuzz implementation should initialize a counter, then
    iterate n times. If the ith iteration is divisible by 3, print
    "Fizz". If it's divisible by 5, print "Buzz". If it's divisible
    by both 3 and 5, print "FizzBuzz". Increment the counter variable
    every time that nothing gets printed and return the counter.
    Don't forget to include newlines '\n' in your printf statements!
*/

//---------------------------------------//
// initialize a counter i=0
// checks/test condition 
// increment a loop everytime it passes check 
//---------------------------------------//

// If ith iteration divisible by 3, print "Fizz\n"
// divisible by 5, print "Buzz\n"
// divisible by both 3 and 5, print "FizzBuzz\n"

// i++ every time that nothing gets printed and return counter
//---------------------------------------//

//---------------------------------------//
//---------RUN IN THE TERMINAL-----------//
// gcc -Wall -Wextra -o fizzbuzz fizzbuzz.c then,
// ./fizzbuzz
//---------------------------------------//

// % = modulo is the remainder
// 7 % 3 = 1
// because the remainder of 7 / 3 is 1
// 6 % 3 = 0 // no remainder
// because the remainder of 6 / 3 is 0
// i % z is the remainder of "i" divided by "z"
//modulo is the remainder of the division of two numbers
// 
int fizzbuzz(int n)
{
    for(int i=0; i<n; i++) {
        if(i%3 == 0 && i%5 == 0) {
			printf("%d FizzBuzz\n", i);
        }
        else if (i%3 == 0){
            printf("%i Fizz\n", i);
        }
        else if(i%5 == 0){
            printf("%i Buzz\n", i);

		}  
    }
    return 0;
}

#ifndef TESTING
int main(void)
{
    fizzbuzz(20);

    return 0;
}
#endif
