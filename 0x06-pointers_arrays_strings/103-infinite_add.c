#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/* infinite_add - adds two numbers , @r: buffer to store result.*/
/*@s1 & @s2: are first and second number.@size_r is size of buffer.*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int len1 = 0, len2 = 0, max_len, sum, carry = 0, i;
char *rev_n1, *rev_n2, *result;
while (n1[len1] != '\0')
len1++;
while (n2[len2] != '\0')
len2++;
max_len = len1 >= len2 ? len1 : len2;
if (size_r <= max_len + 1)
return (0);
rev_n1 = malloc((max_len + 1) * sizeof(char));
rev_n2 = malloc((max_len + 1) * sizeof(char));
result = malloc((max_len + 2) * sizeof(char));
if (rev_n1 == NULL || rev_n2 == NULL || result == NULL)
return (0);
for (i = 0; i < max_len + 1; i++)
{
rev_n1[i] = (i < len1) ? n1[len1 - i - 1] - '0' : 0;
rev_n2[i] = (i < len2) ? n2[len2 - i - 1] - '0' : 0;
sum = rev_n1[i] + rev_n2[i] + carry;
carry = sum / 10;
result[i] = sum % 10 + '0';
}
if (carry != 0)
result[i++] = carry + '0';
result[i] = '\0';
for (i = 0; i < max_len + 1; i++)
r[i] = result[max_len - i];
r[i] = '\0';
free(rev_n1);
free(rev_n2);
free(result);
return (r);
}

