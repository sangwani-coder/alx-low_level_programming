#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * main = Copy the content of a file_1 to file_2
 * @argc: The number of arguments supplied to the program
 * @argv: Array of pointers to the arguments
 *
 * Return: on Success 0.
 *
 * Description: If the number of arguments is incorrect - exit code 97.
 *	If file_from cannot be read or doesn't exist - exit code 98.
 *	If file_to can not be written to - exit code 99.
 *	If file_to of file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int from, to, rd, wrt;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_to from_to\n");
		exit(97);
	}

	buff = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	rd = read(from, buff, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}

		wrt = write(to, buff, rd);
		if (to == -1 || wrt == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}
		rd = read(from, buff, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	} while (rd > 0);

	free(buff);
	close_file(from);
	close_file(to);

	return (0);
}

/**
 *create_buffer - Allocates 1024 bytes for a buffer
 *@file: The name of the file buffer storig chars
 *
 *Return: A pointer to the newly-allocated buffer
 */
char *create_buffer(char *file)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buff);

}

/**
 *close_file - close the file descriptors
 *@fd: The file descriptor to be closed
 */
void close_file(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}

}

