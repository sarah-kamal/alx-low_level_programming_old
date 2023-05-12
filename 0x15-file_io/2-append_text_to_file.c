#include"main.h"
/**
 * append_text_to_file - Appends text content to a file.
 *
 * @filename: The name of the file.
 * @text_content: The text content to be appended.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t w, r;

	if (filename == NULL)
	{
		return (-1);
	}
	if (access(filename, W_OK) != 0)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	r = strlen(text_content);
	w = write(fd, text_content, r);
	if (w == -1)
	{
		return (-1);
	}
	return (1);
}


