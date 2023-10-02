#include "main.h"

/**
 * read_textfile - that reads a text file and prints it to
 * @filename: the file name
 * @letters: the strings
 * Return: the number of read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int f;
ssize_t bs;
	char buff[READ_BUF_SIZE * 4];

	if (!filename || !letters)
	return (0);

	f = open(filename, O_RDONLY);
	if (f == -1)
	return (0);
	
	bs = read(f, &buff[0], letters);
	bs = write(STDOUT_FILENO, &buff[0], bs);
	close(f);
	return (bs);
}
