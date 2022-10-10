#include <stdio.h>
#include <assert.h>

int max(int *numbers, int size)
{
    // Excercise 2
    // Implement your code below...
    // Preconditions
    // it has to be array of unkown size and values
    // then find the maxiumum value in the array.
    // if it 0 or less, assert.

    // finding maximum value
    for (int i = 0; i < size; i++)
    {
        if (*numbers < *(numbers + i))
        {
            *numbers = *(numbers + i);
        }
    }
    assert(size < 0);
    return -1;
}
