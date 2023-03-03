#include "main.h"

/**
 * _strcat - appends src to the dest string
 * @author: muhabeid
 * @dest: string to append by src
 * @src: string to append to dest
 *
 * Return: address of dest
 */

char *_strcat(char *dest, char *src)
{
	int length, j;

	length = 0;
	while (dest[length] != '\0')
	{
		length++;
	}
	for (j = 0; src[j] != '\0'; j++, length++)
	{
		dest[length] = src[j];
	}
	dest[length] = '\0';
	return (dest);
}
