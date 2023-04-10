#include "main.h"

/**
 * create_file - function to create file
 * @filename:pointer to file name
 * @text_content:contet to be written
 * Return:1 on success, -1 on failure 
 */

int create_file(const char *filename, char *text_content)
{
	size_t len;
	int fp;
	ssize_t ret;
	if (filename == NULL)
		return (-1);

	fp = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSER);

	if (fp == -1)
		return -1;

	if (text_content != NULL)
	{
		len = strlen(text_content);
		ret = write(fp, text_content, len);

		if (ret == -1)
		{
			close (fp);
			return (-1);
		}
	}

	close(fp);
	return (1);
}
