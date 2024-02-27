#include "main.h"
/**
 **_strncpy - Write a function that copies a string.
* @n:bytes from src
 *@dest:string to apppend by src
 *@src: string to append by test
 * Return: addres of dest
*/
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}
for (; i < n; i++)
{
dest[i] = '\0';
}
return (dest);
}
