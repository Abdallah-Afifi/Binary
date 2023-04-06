#include <stdio.h>
#include <stdlib.h>

#define INT_BITS (32)

int main()
{
    unsigned int input;
    unsigned int result = 0;
    unsigned int i; // loop counter

    printf("\nEnter the unsigned Number: ");
    if (1 != scanf("%u", &input))
    { // scanf failed
        perror("scanf failed");
        exit(EXIT_FAILURE);
    }

    // implied else, scanf successful

    for (i = 0; i < INT_BITS; i++)
    {
        result <<= 1;
        result |= input & 1;
        input >>= 1;
    } // end for

    fprintf(stdout, "%u\n", result);

    return(0);
}
