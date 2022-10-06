#include "main.h"
#include <stdlib.h>

/**
 * _realloc -  Function reallocates a memory block using malloc and free
 * @ptr: Is a pointer to the memory previously allocated with a call
 * to malloc: malloc(old_size)
 * @old_size: is the size, in bytes, of the allocated space for ptr
 * @new_size: is the new size, in bytes of the new memory block
 * Description: The contents will be copied to the newly allocated space, in
 * the range from the start of ptr up to the minimum of the old and new sizes
 * If new_size > old_size, the “added” memory should not be initialized
 * If new_size == old_size do not do anything and return ptr
 * If ptr is NULL, then the call is equivalent to malloc(new_size),
 * for all values of old_size and new_size
 * If new_size is equal to zero, and ptr is not NULL, then the call is
 * equivalent to free(ptr). Return NULL. Free ptr when it makes sense
 *
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *clone, *relloc;
	unsigned int i;

	if (ptr != NULL)
		clone = ptr;
	else
		{
			return (malloc(new_size));
		}

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)

		free(ptr);
		return (0);

	relloc = malloc(new_size);

	if (relloc == NULL)
		return (0);

	for (i = 0; i < (old_size || i < new_size); i++)

		*(relloc + i) = clone[i];

	free(ptr);

	return (relloc);
}
