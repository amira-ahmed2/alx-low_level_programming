#include "main.h"

/**
 * create_file - that creates a file.
 * @filename: the file name
 * @text_content: the strings
 * Return: the number
 */
int create_file(const char *filename, char *text_content)
{
int f;
ssize_t b = 0;
ssize_t lenth = strlen(text_content);

if (!filename)
return (-1);

f = open(filename, O_WRONLY | O_CREAT | O_TRUNC | S_IRUSR | S_IWUSR);
if (f == -1)
return (-1);

if (lenth)
b = write(f, text_content, lenth);

close(f);
return (b == lenth ? 1 : -1);
}
