#include "holberton.h"
#include <stdlib.h>
/**
 *create_array- creates an array of chars, and initializes it with a specific char.
 * @size: size of array
 * @c: the specific char that is intialized in array
 *
 * Return: pointer to the array.
 */
char* create_array(unsigned int size, char c)
{
    char *ar;
    int i = 0;

    if (size == 0)
    {
        return (NULL);
    }
    
    ar = malloc(size * sizeof(char));
    
     if (ar == NULL)
        return(NULL);

    for (i = 0; i < size; i++)
    {
        ar[i] = c;
    }
    return (ar);
}
