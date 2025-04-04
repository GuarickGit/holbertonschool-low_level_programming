#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 * @filename: Name of the file to read
 * @letters: Number of letters to read and print
 *
 * Return: The actual number of letters it could read and print,
 * or 0 if it fails (file can't be opened/read, write fails, etc.)
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd; /* fd = file descriptor (convention) */
	char *buffer; /* Tampon pour stocker le contenu lu */
	ssize_t bytes_read; /* Nombre d'octets lus depuis le fichier */
	ssize_t bytes_written; /* Nombre d'octets écrits sur la sortie standard */

	/* Vérifie si le pointeur filename est NULL (aucun fichier passé) */
	if (filename == NULL)
		return (0);
	/* Ouvre le fichier en lecture seule */
	fd = open(filename, O_RDONLY);
	if (fd == -1) /* Si l'ouverture échoue, retourne 0 */
		return (0);
	/* Alloue un tampon pour stocker les données lues */
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL) /* Échec de malloc */
	{
		close(fd); /* Ferme le fichier ouvert */
		return (0);
	}
	/* Lit le contenu du fichier dans le tampon */
	bytes_read = read(fd, buffer, letters);
	if (bytes_read == -1) /* Échec de la lecture */
	{
		free(buffer); /* Free le tampon */
		close(fd); /* Ferme le fichier ouvert */
		return (0);
	}
	/* Écrit le contenu lu sur la sortie standard */
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		free(buffer); /* Échec de l'écriture, ou tout n'a pas été écrit */
		close(fd);
		return (0);
	}
	/* Free la mémoire allouée et ferme le fichier */
	free(buffer);
	close(fd);
	/* Retourne le nombre de lettres effectivement écrites */
	return (bytes_written);
}
