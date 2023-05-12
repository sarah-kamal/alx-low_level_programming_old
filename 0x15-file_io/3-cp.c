#include"main.h"
int main(int argc, char **argv)
{
	int fp0, fp1;
	char buffer[1024];
	ssize_t r, w;

	(void)argv;
	if (argc != 3)
	{
		write(STDERR_FILENO, "Usage: cp file_from file_to\n", strlen("Usage: cp file_from file_to\n"));
		exit(97);
	}
	fp0 = open(argv[1], O_RDONLY);
	if (fp0 == -1)
	{
		write(STDERR_FILENO, "Error: Can't read from file ", strlen("Error: Can't read from file "));
		write(STDERR_FILENO, argv[1], strlen(argv[1]));
		write(STDERR_FILENO, "\n", 1);
		exit(98);
	}
	fp1 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC);
	if (fp1 == -1)
	{
		 write(STDERR_FILENO, "Error: Can't write to ", strlen("Error: Can't write to "));
		 write(STDERR_FILENO, argv[2], strlen(argv[2]));
		 write(STDERR_FILENO, "\n", 1);
	 	 exit(99);
	}
	r = read(fp0, buffer, 1024);
	if (r == -1)
	{
		write(STDERR_FILENO, "Error: Can't read from file ", strlen("Error: Can't read from file "));
		write(STDERR_FILENO, argv[1], strlen(argv[1]));
		write(STDERR_FILENO, "\n", 1);
 		exit(98);
	}
	w = write(fp1, buffer, r);
	if (w == -1)
	{
		 write(STDERR_FILENO, "Error: Can't write to ", strlen("Error: Can't write to "));
		 write(STDERR_FILENO, argv[2], strlen(argv[2]));
		 write(STDERR_FILENO, "\n", 1);
		 exit(99);
	}
	if (close(fp1) == -1)
	{
        	dprintf(STDERR_FILENO,"Error: Can't close fd %d\n",fp1);
		exit(100);
	}
	if (close(fp0) == -1)
	{
		dprintf(STDERR_FILENO,"Error: Can't close fd %d\n",fp1);
		exit(100);
	}
	return (0);
}
