#include <stdio.h>

/*
    Your fizzbuzz implementation should initialize a counter, then
    iterate n times. If the ith iteration is divisible by 3, print
    "Fizz". If it's divisible by 5, print "Buzz". If it's divisible
    by both 3 and 5, print "FizzBuzz". Increment the counter variable
    every time that nothing gets printed and return the counter.
    Don't forget to include newlines '\n' in your printf statements!
*/

// initialize a counter i=0
// checks n times
// increment a counter everytime it passes check

// If ith iteration divisible by 3, print "Fizz\n"
// divisible by 5, print "Buzz\n"
// divisible by both 3 and 5, print "FizzBuzz\n"

// i++ every time that nothing gets printed and return counter

//Run in the terminal: gcc -Wall -Wextra -o fizzbuzz fizzbuzz.c then
//Type ./fizzbuzz

int fizzbuzz(int n)
{
    // int n;

    for(int i=0; i<10; i++) {
        printf("%i is Fizz", i);
        
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
