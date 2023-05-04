#include"main.h"
int clear_bit(unsigned long int *n, unsigned int index)
{
    if (index >= sizeof(unsigned long int) * 8)
        return -1;

    // Use a mask to clear the bit at the given index
    unsigned long int mask = ~(1UL << index);
    *n &= mask;

    return 1;
}
