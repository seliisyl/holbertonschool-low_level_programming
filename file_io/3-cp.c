#include <stdio.h>
#include <unistd.h>
#include <errno.h>
#include <stdlib.h>
#include <fcntl.h>
#include "main.h"

#define BUF_SIZE 1024

int __exit(int error, const char *s, int fd)
{
	if (error == 97)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	}
	else if (error == 98)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", s);
	}
	else if (error == 99)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", s);
	}
	else if (error == 100)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	}
	exit(error);
}

int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t bytes_read = 0, bytes_written = 0;
	char buf[BUF_SIZE];
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
	{
		__exit(97, NULL, 0);
	}

	fd_from = open(argv[1], O_RDONLY);

	if (fd_from == -1)
	{
		__exit(98, argv[1], 0);
	}

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (fd_to == -1)
	{
		__exit(99, argv[2], 0);
	}

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (fd_to == -1)
	{
		__exit(99, argv[2], 0);
	}

	while ((bytes_read = read(fd_from, buf, BUF_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buf, bytes_read);
		if (bytes_written != bytes_read)
		{
			__exit(99, argv[2], 0);
		}
	}

	if (bytes_read == -1)
	{
		__exit(98, argv[1], 0);
	}

	if (close(fd_from) == -1)
	{
		__exit(100, argv[1], fd_from);
	}
	if (close(fd_to) == -1)
	{
		__exit(100, argv[2], fd_to);
	}
	return (0);
}
