#include "main.h"

/**
 * _strlen - Return the length of a string
 *
 * @s: pointer to the string
 *
 * Return: the length of a string
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * create_file - Creates a file and writes a string to it
 * @filename: Name of the file to create
 * @text_content: NULL-terminated string to write to the file
 *
 * Description:
 * Creates a file with rw------- permissions. If the file already exists,
 * it is truncated. If text_content is NULL, an empty file is created.
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd; /* file descriptor (convention) */
	int bytes_written; /* Nombre d'octets écrits sur la sortie standard */

	/* Vérifie si le pointeur filename est NULL (aucun fichier passé) */
	if (filename == NULL)
		return (-1);

	/**
	 * Ouvre (ou crée) le fichier avec les flags :
	 * - O_CREAT : créer si n'existe pas
	 * - O_WRONLY : écriture seule
	 * - O_TRUNC : vider le fichier s'il existe
	 * Les permissions sont fixées à 0600 : rw-------
	 */

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	/* Si aucun contenu, on retourne 1 après avoir créé un fichier vide */
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	/* Écrit le contenu dans le fichier */
	bytes_written = write(fd, text_content, _strlen(text_content));

	/* Si l'écriture échoue, retourne -1 après avoir fermé le fichier */
	if (bytes_written == -1)
	{
		close(fd);
		return (-1);
	}

	/* Ferme le fichier */
	close(fd);
	return (1); /* Retourne 1 si success */
}
