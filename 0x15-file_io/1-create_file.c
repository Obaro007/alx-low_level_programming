#include "main.h"
#include <string.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * create_file - The program creates a file
 * @filename: The file to create
 * @text_content: A NULL terminated string to write to the file
 *
 * Return: 1 on success or -1 if it fails
 */
int create_file(const char *filename, char *text_content)
{
	int fd, write_fil;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content)
		write_fil = write(fd, text_content, strlen(text_content));

	if (write_fil == -1)
	{
		close(fd);
		return (0);
	}

	close(fd);

	return (1);
}
