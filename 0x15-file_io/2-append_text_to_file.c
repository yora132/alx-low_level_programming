#include "main.h"

/**
 * append_text_to_file - function the appends text at the end of a file.
 * @filename:pointer to a file name
 * @text_content: text to be written
 * Return:1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fp;
	ssize_t len;

	if (filename == NULL)
		return (-1);
	fp = open(filename, O_WRONLY | O_APPEND);

	if (fp == -1)
		return (-1);

	if (text_content != NULL)
		len = write(fp, text_content, strlen(text_content));

	close(fp);

	if (len == -1)
		return (-1);

	return (1);
}
