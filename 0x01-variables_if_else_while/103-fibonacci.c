#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Finds and prints the sum of the even-valued terms
 * in the Fibonacci sequence, not exceeding 4,000,000
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int k = 1, m = 2, fib_sum = 0, sum = 0;
while (m <= 4000000)
{
if (m % 2 == 0)
sum += m;
fib_sum = k + m;
k = m;
m = fib_sum;
}
printf("%d\n", sum);
return (0);
}

