#include "main.h"

/**
 * append_text_to_file - that appends text at the end of a file
 * @filename: the file name
 * @text_content: the strings
 * Return: the number
 */
int append_text_to_file(const char *filename, char *text_content)
{
		int f;
		ssize_t b = 0, lenth = strlen(text_content);

		if (!filename)
			return (-1);

		f = open(filename, O_WRONLY | O_APPEND);
		if (f == -1)
			return (-1);

		if (lenth)
			b = write(f, text_content, lenth);

		close(f);
		return (b == lenth ? 1 : -1);
}
