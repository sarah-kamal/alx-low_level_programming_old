#include<stdlib.h>
#include<stddef.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
int create_file(const char *filename, char *text_content);
ssize_t read_textfile(const char *filename, size_t letters);
