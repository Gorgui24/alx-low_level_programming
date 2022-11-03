#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - i/O
 * @filename: pointer parameter
 * @letters: int parameter
 * Return: return int
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *flux;

	if (filename == NULL)
		return (0);
	flux = malloc(sizeof(char) * letters);
	if (flux == NULL)
		return (0);
	o = open(filename, O_RDONLY);
	r = read(o, flux, letters);
	w = write(STDOUT_FILENO, flux, r);
	if (o == -1 || r == -1 || w == -1)
	{
		free(flux);
		return (0);
	}
	free(flux);
	close(o);
	return (w);
}
