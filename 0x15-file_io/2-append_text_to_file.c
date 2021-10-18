#include "main.h"

/**
 * append_text_to_file - add text to a file
 *@filename: name of the file
 *@text_content: a NULL terminated string to be added to filename
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t i, opn, wrt;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i];)
			i++;
	}

	/* open and write */
	opn = open(filename, O_WRONLY | O_APPEND);
	wrt = write(opn, text_content, i);

	if (opn == -1 || wrt == -1)
	{
		return (-1);
	}
	close(opn);

	return (1);
}

