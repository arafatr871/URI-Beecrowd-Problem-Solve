/* 1848 - Counting Crow */

#include <stdio.h>
#include <string.h>

int main()
{
    int n = 0; // Sum for current result
    int count = 0; // Count of "caw caw" occurrences
    char ch[10]; // Input for blink or scream

    while (count < 3) // We need 3 results
    {
        scanf("%s", ch); // Read a line of input

        if (strcmp(ch, "caw") == 0) // Check for "caw caw"
        {
            scanf("%s", ch); // Read the second part of "caw caw"
            if (strcmp(ch, "caw") == 0) 
            {
                printf("%d\n", n); // Print the result
                n = 0; // Reset the sum for the next result
                count++; // Increment the "caw caw" counter
            }
        } 
        else 
        {
            // Calculate binary value from blink pattern
            int value = 0;
            if (ch[0] == '*') value += 4; // Leftmost eye (4)
            if (ch[1] == '*') value += 2; // Middle eye (2)
            if (ch[2] == '*') value += 1; // Rightmost eye (1)
            n += value; // Add the binary value to the sum
        }
    }

    return 0;
}
