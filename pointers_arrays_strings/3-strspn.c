#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to be scanned
 * @accept: string containing the characters to match
 * Return: number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
int i, j, flag;

i = 0;
while (s[i] != '\0')
{
j = 0;
flag = 0;
while (accept[j] != '\0')
{
if (s[i] == accept[j])
{
flag = 1;
break;
}
j++;
}
if (flag == 0)
{
break;
}
i++;
}
return (i);
}
