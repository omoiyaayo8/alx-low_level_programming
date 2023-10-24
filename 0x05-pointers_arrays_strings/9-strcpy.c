#include "main.h"
/**
* _strcpy - Copy paste string
*@dest: destination
*@src: source
*Return: dest
*/
char *_strcpy(char *dest, char *src)
{
int a = 0;
while (*(src + a) != '\0')
{
*(dest + a) = *(src + a);
a++;
}
*(dest + a) = '\0';
return (dest);
}
