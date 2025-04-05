#include "main.h"

/**
 * open_file_from - Opens a file for reading
 * @filename: Name of the file to open
 *
 * Return: File descriptor on success, exits with 98 on failure
 */
int open_file_from(char *filename)
{
	int fd;

	/* Ouverture du fichier en lecture seule */
	fd = open(filename, O_RDONLY);

	/* Vérifie si l'ouverture a échoué */
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}

	return (fd);
}

/**
 * open_file_to - Opens (or creates) a file for writing, with truncation
 * @filename: Name of the file to open or create
 *
 * Return: File descriptor on success, exits with 99 on failure
 */
int open_file_to(char *filename)
{
	/*
	 * Ouvre le fichier en écriture,
	 * crée s'il n'existe pas,
	 * et le vide s'il existe
	 */
	int fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0664);

	/* Vérifie si l'ouverture ou la création a échoué */
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}

	return (fd);
}

/**
 * safe_close - Closes a file descriptor and handles errors
 * @fd: The file descriptor to close
 */
void safe_close(int fd)
{
	/* Ferme le fichier et vérifie si l'opération a échoué */
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Entry point of the cp program
 * @argc: Number of arguments
 * @argv: Array of argument strings
 *
 * Description:
 * Copies the content of one file (file_from) to another (file_to).
 * Uses a buffer of 1024 bytes, handles all error cases with specific
 * exit codes (97 to 100) and prints to stderr using dprintf.
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	int bytes_read, bytes_written;
	char buffer[1024]; /* Tampon pour stocker les données lues */

	if (argc != 3) /* Vérif que le programme a reçu exactement deux arguments */
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	/* Ouvre le fichier source pour lecture */
	fd_from = open_file_from(argv[1]);
	/* Ouvre (ou crée) le fichier destination pour écriture */
	fd_to = open_file_to(argv[2]);
	/* Lit depuis file_from et écrit dans file_to par blocs de 1024 octets */
	bytes_read = read(fd_from, buffer, 1024);
	while (bytes_read > 0)
	{
		/* Écrit dans le fichier de destination */
		bytes_written = write(fd_to, buffer, bytes_read);
		/* Vérifie si l'écriture a échoué ou a été partielle */
		if (bytes_written == -1 || bytes_written != bytes_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			safe_close(fd_from);
			safe_close(fd_to);
			exit(99);
		}
		/* Relit les 1024 prochains octets */
		bytes_read = read(fd_from, buffer, 1024);
	}
	if (bytes_read == -1) /* Vérifie si la dernière lecture a échoué */
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		safe_close(fd_from);
		safe_close(fd_to);
		exit(98);
	}
	safe_close(fd_from); /* Ferme 'fd_from' proprement */
	safe_close(fd_to); /* Ferme 'fd_to' proprement */
	return (0); /* Success */
}

/*
 * STDERR_FILENO (valeur 2) est la sortie d'erreur standard.
 * Contrairement à STDOUT (sortie normale), elle n'est pas affectée
 * par une redirection (ex: ./cp f1 f2 > out.txt).
 * C'est utile pour afficher les messages d'erreur même quand la sortie
 * normale est capturée.
 */

