#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - read a text file and to POSIX standard out
 *@filename: the text file
 *@letters: the number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t opn, rd, wrt;
	char *buff;

	if (filename == NULL)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	/* open */
	opn = open(filename, O_RDONLY);
	rd = read(opn, buff, letters);
	wrt = write(STDOUT_FILENO, buff, rd);

	if (opn == -1 || rd == -1 || wrt == -1)
	{
		free(buff);
		return (0);
	}
	free(buff);
	close(opn);

	return (wrt);
}

