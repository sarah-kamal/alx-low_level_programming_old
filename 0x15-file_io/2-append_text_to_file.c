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
	int r, fd;
	ssize_t w;
	FILE *ptr;

	if (filename == NULL)
	{
		return (-1);
	}
	if (access(filename, W_OK) != 0)
		return (-1)
	ptr = open(filename, "a");
	if (!ptr)
		return (-1);
	fd=fileno(file);
	if (fd == -1)
		return (-1);
	r = strlen(text_content);
	w = write(fd, text_content, r);
	if (r != w)
	{
		return (-1);
	}
	return (1);
}


