#ifndef MyHeaderFile
#define MyHeaderFile

#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

void _putchar(char ch);
ssize_t read_textfile(const char *filename, size_t letters);
#endif
