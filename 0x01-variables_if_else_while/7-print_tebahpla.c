#include <stdio.h>

int main(void)
{
    char letter = 'z';  // start with 'z', the last letter of the alphabet
    
    while (letter >= 'a') {
        putchar(letter);  // print the current letter
        letter--;         // move to the previous letter
    }
    
    putchar('\n');        // print a new line character
    
    return 0;
}
