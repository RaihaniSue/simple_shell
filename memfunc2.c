#include "shell.h"
/**
 * bfree - entry point
 * @ptr: ptr
 * Return: 1 on success 0 failure
 */
int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}
