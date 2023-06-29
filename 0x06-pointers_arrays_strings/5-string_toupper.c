#include "main.h"
/**
 * string_toupper - function which changes all lowwercase letters
 * of a string to uppercase
 * Description: changes lowwercase to upper
 * @str: the string to be changed.
 * Return:a pointer to changed string (str) should be returned.
 */
char *string_toupper(char *str)
{
int index = 0;
while (str[index])
{
if (str[index] >= 'a' && str[index] <= 'z')
str[index] -= 32;
index++;
}
return (str);
}
