#include "search_algos.h"
/**
 * binary_search - a function
 * @array: parameter
 * @size: parameter
 * @value: parameter
 */
int binary_search(int *array, size_t size, int value)
{
    size_t left = 0;
    size_t right = size - 1;
    size_t mid = 0;
    size_t i;
    
    if (array == NULL || size == 0)
    {
        return(-1);
    }

    while (left <= right)
    {
        printf("Searching in array: ");
        for (i = left; i <= right; i++)
        {
            if (i < right)
            {
                printf("%d, ", array[i]);
            }
            else
            {
                printf("%d", array[i]);
            }
        }
        printf("\n");
        mid = left + (right - left) / 2;
        if (array[mid] == value)
        {
            return(mid);
        }
        else if (array[mid] < value)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }

    }
    return (-1);
}
