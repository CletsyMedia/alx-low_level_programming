#include "search_algos.h"
#include <stdio.h>

/**
 * print_range - Print the range of values being searched.
 * @array: The array being searched.
 * @start: The starting index of the range.
 * @end: The ending index of the range.
 */
void print_range(int *array, size_t start, size_t end)
{
    printf("Searching in array: ");
    for (size_t i = start; i <= end; i++)
    {
        printf("%d", array[i]);
        if (i != end)
            printf(", ");
    }
    printf("\n");
}

/**
 * exponential_search - Searches for a value in a sorted array of integers
 * using the Exponential search algorithm.
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 * Return: The index where the value is located, or -1 if not found.
 */
int exponential_search(int *array, size_t size, int value)
{
    if (array == NULL)
        return -1;

    if (size == 0)
        return -1;

    size_t bound = 1;
    while (bound < size && array[bound] < value)
    {
        printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
        bound *= 2;
    }

    size_t start = bound / 2;
    size_t end = (bound < size) ? bound : size - 1;
    printf("Value found between indexes [%lu] and [%lu]\n", start, end);
    print_range(array, start, end);

    while (start <= end)
    {
        size_t mid = (start + end) / 2;

        if (array[mid] == value)
            return mid;
        else if (array[mid] < value)
        {
            printf("Searching in array: ");
            print_range(array, mid + 1, end);
            start = mid + 1;
        }
        else
        {
            printf("Searching in array: ");
            print_range(array, start, mid - 1);
            end = mid - 1;
        }
    }

    return (-1);
}
