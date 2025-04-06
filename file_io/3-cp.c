#include "main.h"

int open_file_from(char *filename)
{
	int fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	return (fd);
}

int open_file_to(char *filename)
{
	int fd = open(filename, O_WRONLY | O_TRUNC);

	if (fd == -1)
	{
		fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0664);
		if (fd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
			exit(99);
		}
	}
	return (fd);
}

void safe_close(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

int main(int argc, char *argv[])
{
	int fd_from, fd_to, r, w, total;
	char buf[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	fd_from = open_file_from(argv[1]);
	fd_to = open_file_to(argv[2]);

	while ((r = read(fd_from, buf, 1024)) > 0)
	{
		total = 0;
		while (total < r)
		{
			w = write(fd_to, buf + total, r - total);
			if (w == -1)
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]),
				safe_close(fd_from), safe_close(fd_to), exit(99);
			total += w;
		}
	}
	if (r == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]),
		safe_close(fd_from), safe_close(fd_to), exit(98);

	safe_close(fd_from);
	safe_close(fd_to);
	return (0);
}
