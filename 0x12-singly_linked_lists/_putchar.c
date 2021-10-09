#include <unistd.h>
/**
 *_putchar - writes the character c too stdout
 *@c: the character to print
 *
 * Retur: on success 1
 * On error, -1 returned, and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
