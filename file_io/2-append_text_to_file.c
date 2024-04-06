#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * append_text_to_file - Ajoute du texte a la fin d'un fichier.
 * @filename: Le nom du fichier auquel ajouter le texte.
 * @text_content: La chaîne decaractes trmné par NUL a aj ala fin du file.
 *
 * Return: 1 en cas de succès, -1 en cas d'échec.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int length = 0;
	ssize_t bytes_written;

	/* Retourne -1 si le nom de fichier est NULL */
	if (filename == NULL)
		return (-1);

	/* Si text_contt NULL, retun 1 indqt que le file exist mais ya rien a ajt */
	if (text_content == NULL)
		return (1);

	/* Ouvre le fileen mode écriture seule avec le mode d'aut actie */
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1); /* echec de l'ouverture ou permissions insuffisantes */

	/* Calcule la longueur de text_content */
	length = 0;
	while (text_content[length] != '\0')
		length++;

	/* ecrit text_content à la fin du fichier */
	bytes_written = write(fd, text_content, length);
	if (bytes_written == -1)
	{
		close(fd);
		return (-1); /* echec de l'écriture*/
	}

	/* Ferme le descripteur de fichier */
	close(fd);

	/* Retourne 1 en cas de succès*/
	return (1);
}
