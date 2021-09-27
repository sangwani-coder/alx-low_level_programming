
/**
 *_memset - fill memory with constant byte.
 *@s: pointer to memeory.
 *@b: constant byte to fill memory.
 *@n: size of bytes.
 *
 * Return: poniter to memory area s.
 */
void *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
