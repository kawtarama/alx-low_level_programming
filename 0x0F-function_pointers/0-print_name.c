#include "function_pointers.h"
#include <stdlib.h>
/**
* print_name - a function that prints a name
* @name: string
* @f: pointer to function
**/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}

---

vi 1-array_iterator.c

#include "function_pointers.h"
/**
* array_iterator - executes a func given as a param on array elem
* @array: array of integer
* @size: size of array
* @action: pointer to a function
**/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
