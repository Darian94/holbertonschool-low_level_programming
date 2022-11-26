#include "main.h"

/**
 * append_text_to_file - writes content at the end of a file
 * @filename: name of the file
 * @text_content: text to write in the file
 * Return: 1 on success -1 if it fails
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int len, fd, w;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		return (1);

	len = _strlen(text_content);
	w = write(fd, text_content, len);
	if (w == -1)
		return (-1);

	close(fd);
	return (1);
}
/**
 * _strlen - function than retunr the length of a text string
 * @s: pointer to the adress of the string
 * Return: all elements of the string
 */

int _strlen(char *s)
{
	int n = 0;

	while (s[n] != '\0')
		n++;
	return (n);
}
