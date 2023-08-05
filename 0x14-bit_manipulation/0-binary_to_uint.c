#include "main.h"

/**
 * binary_to_uint- changes a binary no. to an unsigned int
 * @c : pointer that contains binary no.
 *
 * @Return: returns converted no.
 */

unsigned int binary_to_uint(const char *c)
{
        int a;
        unsigned int b = 0;

        if (!c)
                return(0);

        for (a = 0; c[a]; a++)
        {
                if (c[a] < '0' || c[a] > '1')
                        return (0);
                b = 2 * b + (c[a] - '0');
        }

        return (b);

}
