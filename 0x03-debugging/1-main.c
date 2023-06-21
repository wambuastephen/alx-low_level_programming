#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This function demonstrates the avoidance of an infinite loop.
 * It prints a message indicating the possibility of an infinite loop,
 * then includes a commented-out loop section to showcase the prevention
 * of the loop, and finally prints a message to indicate that the loop
 * has been successfully avoided.
 *Description: \\o/\nouput should be in newline after infinite loop is avoided
 * Return: Always 0 (success)
 */

int main(void)
{
int i;
printf("Infinite loop incoming :(\n");

i = 0;
/**
 * Commented-out loop section
 * This section is commented out to prevent the execution of an infinite loop.
 * If uncommented, it would cause the program to continuously execute
 * the putchar(i) statement as long as the value of i is less than 10.
 *
 *while (i < 10)
 *{
 *putchar(i);
 *}
*\\o/\n shows infinite loop is avoided and output should be followed by newline
*/
printf("Infinite loop avoided! \\o/\n");
return (0);
}
