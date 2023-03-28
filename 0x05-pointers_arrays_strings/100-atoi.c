#include <stdio.h>
#include"main.h"
/*
 * _atoi - Convert a string to an integer.
 * @s: The pointer to convert
 *
 * Return: A integer
 */
int _atoi(char *s)
{
        int isneg;
        int cont;
        int l;
        int io;
        int numfound;
        int index;
        int count;
        int c;
        int number;
        int n;

        c = 0;
        isneg = 0;
        numfound = 0;
        cont = 0;
        count = 0;
        while (s[c] != '\0')
        {
                if (s[c] == '-')
                        isneg = 1;
                else if (s[c] == '+')
                        isneg = 0;
                if (s[c] > 47 && s[c] < 58)
                {
                        if (! numfound)
                        {
                                numfound = 1;
                                cont = 1;
                                index = c;
                                count++;
                        }
                        else 
                        if (cont)
                                count++;
                }
                else
                {
                        cont = 0;
                }
                c++;
        }
        if (numfound)
        {
            l = count;
            io = index;
                while (index < io + count)
                {
                        n = s[index] - '0';
                        for (c = 0; c < l - 1; c++)
                        {
                                n *= 10;
                        }
                        l--;
                        number += n;
                        index++;
                }
                if (isneg)
                        number *= -1;
                return (number);
        }
        else
        {
                return (0);
        }

}
