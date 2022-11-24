#include "main.h"

/**
 * read_textfike - reads a text file and prints
 * @filename - name of the file to read
 * @letters: number of character to print
 * Return: on success the number of characyers printed, -1 or 0 if it fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, r, w;
	char *txt = NULL;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	txt = malloc(sizeof(char) * letters);
	if (txt == NULL)
		return (0);
	r = read(fd, txt, letters);
	if (r == -1)
		return (0);
	w = write(STDOUT_FILENO, txt, r);
	if (w == -1)
		return (0);
	free(txt);
	close(fd);
	return (w);
}
