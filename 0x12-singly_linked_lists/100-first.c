#include "lists.h"

void  _constructor(void) __attribute__ ((constructor));

/**
 * _constructor - excutes before main()
 *
 * Return: void
 */

void _constructor(void)
{
	printf("you are beat! and yet, you must allow.\n"
		"i bore my house upon my back!\n");
}
