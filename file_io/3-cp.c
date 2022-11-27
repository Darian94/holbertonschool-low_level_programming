#include "main.h"

/**
 * main - program that copies the content of a file to another file
 * @argc: argument counter
 * @argv: argument vector
 * Return: 1 is success and -1 on failure
 * In 22 line, i put 2 instead of STDERR_FILENO because i pass caracter permiss
 */

int main(int argc, char *argv[])
{
	int fd_old, fd_new, r, w;
	char *buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	if (!argv[1])
		dprintf(STDERR_FILENO, "Error: Can't read from file \n"), exit(98);
	fd_old = open(argv[1], O_RDONLY);
	if (fd_old == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_new = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fd_new == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	r = read(fd_old, buffer, 1024);
	while (r != 0)
	{
		if (r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		w = write(fd_new, buffer, r);
		if (w == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
		r = read(fd_old, buffer, 1024);
	}
	if ((close(fd_old)) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_old), exit(100);
	if ((close(fd_new)) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_new), exit(100);
	return (0);
}
