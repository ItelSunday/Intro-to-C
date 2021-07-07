#include <stdio.h>
#include <stdlib.h>

/*
    Given a character array s (as a pointer), return the number of 
    characters in the string.
    
    Do not just use the `strlen` function from the standard libary.
*/

//---------RUN IN THE TERMINAL-----------//
// gcc -Wall -Wextra -o strings strings.c then,
// ./strings
//---------------------------------------//

//Add a counter

int string_length(char *s)
{
    int counter = 0;
    while (s[counter] != '\0') //loop through the string array s, 
    //if the current letter inside the string array is not /0, 
    //then keep going to the next letter
    {
        counter +=1; //we increment counter because we use it to access different
        // items inside of the string array
    }

    return counter;
    
}
/*
    Write a function that reverses the order of string s and outputs 
    the reversed string to the input array rv. The rv array will have 
    enough space for the reversed string. Don't forget to terminate 
    the reversed string with a null character. Return the rv array.
*/
char *reverse_string(char *rv, char *s)
{
    int length = string_length(s);
    int counter = 0;
    //Traversing string from end

    for (int i = length-1; i >= 0; i--){
        rv[counter] = s[i];
        counter++;
    }
    return rv;

}

#ifndef TESTING
int main(void)
{
    char quote1[] = "Don't forget to be awesome";
    char quote2[] = "a man a plan a canal panama";

    char rv[512];

    printf("The string 'Don't forget to be awesome' has %d characters.\n", string_length(quote1));
    printf("The string 'a man a plan a canal panama' reversed is: '%s'\n", reverse_string(rv, quote2));

    return 0;
}
#endif
    
