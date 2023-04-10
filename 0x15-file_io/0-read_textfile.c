#include "main.h"

/**
 * read_textfile - read the file
 * @filename:the name of file
 * @letters:size that will bw read
 * Return:number of read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t num_read, num_write;
	char *buffer;
	int fp;

	if (!filename)
		return (0);

	fp = open(filename, O_RDONLY);

	if (fp == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));

	if (!buffer)
	{
		return (0);
	}

	num_read = read(fp, buffer, letters);
	num_write = write(STDOUT_FILENO, buffer, num_read);

	close(fp);

	free(buffer);

	return (num_write);
}
