#include "main.h"

/**
 * _strlen - Write a function that returns the length of a string
 *
 * @s: value it points
 * Return: returns length
 */
int _strlen(char *s)
{
int cont;

for (cont = 0; *s != '\0'; s++)
cont++;

return (cont);
}

/**
 * create_file - that creates a file.
 * @filename: the file name
 * @text_content: the strings
 * Return: the number
 */
int create_file(const char *filename, char *text_content)
{
        int f;
        int b = 0, lenth = _strlen(text_content);

        if (!filename)
        {
                /* code */
                return (-1);
        }

        f = open(filename, O_WRONLY | O_CREAT | O_TRUNC | S_IRUSR | S_IWUSR);
        if (f == -1)
        {
                /* code */
                return (-1);
        }
        if (lenth)
        {
                /* code */
                b = write(f, text_content, lenth);
        }
        close(f);
        return (b == lenth ? 1 : -1);
}
