#include "sort.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * @array: The array to be sorted.
 * @size: The size of the array to be sorted.
 * @value:
 * return: -1 if not found
*/

int binary_search(int *array, size_t size, int value)
{
    if (array == NULL)
        return (-1);

    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        printf("Searching in subarray: ");
        for (int i = left; i <= right; i++) {
            printf("%d ", array[i]);
        }
        printf("\n");

        if (array[mid] == value)
            return mid;
        else if (array[mid] < value)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return (-1);
}
