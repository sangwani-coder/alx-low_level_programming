#include "main.h"

/**
 * create_file - create a file
 *@filename: name of the file to be created
 *@text_content: a NULL terminated string to write to filename
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int i, opn, wrt;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i];)
			i++;
	}

	/* open and write */
	opn = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wrt = write(opn, text_content, i);

	if (opn == -1 || wrt == -1)
	{
		return (-1);
	}
	close(opn);

	return (1);
}

