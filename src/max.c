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
    int max_int = numbers[0];

    for (int i = 0; i < size; i++)
    {
        if (max_int < numbers[i + 1])
        {
            max_int = numbers[i + 1];
        }
    }
    assert(size < 0);
    return max_int;
}
