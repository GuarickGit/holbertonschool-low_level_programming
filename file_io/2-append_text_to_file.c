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
 * append_text_to_file - Appends text at the end of a file
 * @filename: Name of the file to append to
 * @text_content: NULL-terminated string to add at the end of the file
 *
 * Description:
 * Does not create the file if it does not exist.
 * If text_content is NULL, the function does nothing but returns 1
 * if the file exists and is accessible.
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd; /* file descriptor (convention) */
	int bytes_written; /* Nombre d'octets écrits sur la sortie standard */

	/* Vérifie si le pointeur filename est NULL (aucun fichier passé) */
	if (filename == NULL)
		return (-1);

	/**
	 * Ouvre le fichier en mode écriture seule et ajout à la fin (append).
	 * Ne crée pas le fichier s'il n'existe pas.
	 */

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1) /* Échec d'ouverture du fichier */
		return (-1);

	/**
	 * Si le contenu est NULL, on ne modifie pas le fichier,
	 * mais comme il existe et qu'on a pu l'ouvrir → succès
	 */
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	/* Écrit le contenu à la fin du fichier */
	bytes_written = write(fd, text_content, _strlen(text_content));

	if (bytes_written == -1) /* Échec de l'écriture */
	{
		close(fd);
		return (-1);
	}

	close(fd); /* Ferme le fichier */
	return (1); /* Retourne 1 si success */
}
