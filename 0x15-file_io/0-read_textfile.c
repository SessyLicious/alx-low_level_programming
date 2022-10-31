#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the
 *           function should read and print.
 * Return: If the function fails or filename is NULL - 0.
 *         O/w - the actual number of bytes the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int op;
	ssize_t rd, wr;
	char *buffer;

	if (!filename)
		return (0);
	op = open(filename, O_RDONLY);
	if (op == -1)
		return (0);
	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);
	rd = read(op, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, rd);
	close(op);
	free(buffer);
	return (wr);
}
