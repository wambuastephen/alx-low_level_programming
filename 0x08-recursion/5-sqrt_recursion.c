#include "main.h"

/**
 * find_sqrt - Helper function to find the square root using binary search.
 * @n: The number to calculate the square root of.
 * @start: The starting point of the search range.
 * @end: The ending point of the search range.
 *
 * Return:The square root of n, or -1 if n does not have a natural square root.
 */
int find_sqrt(int n, int start, int end);

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to calculate the square root of.
 *
 * Return:The square root of n, or -1 if n does not have a natural square root.
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (find_sqrt(n, 1, n));
}

/**
 * find_sqrt - Helper function to find the square root using binary search.
 * @n: The number to calculate the square root of.
 * @start: The starting point of the search range.
 * @end: The ending point of the search range.
 *
 * Return:The square root of n, or -1 if n does not have a natural square root.
 */
int find_sqrt(int n, int start, int end)
{
int mid;

if (start <= end)
{
mid = (start + end) / 2;

if (mid *mid == n)
return (mid);

if (mid *mid > n)
return (find_sqrt(n, start, mid - 1));

return (find_sqrt(n, mid + 1, end));
}

return (-1);
}

