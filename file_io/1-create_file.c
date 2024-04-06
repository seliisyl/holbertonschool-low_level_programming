#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - Crée un fichier avec le contenu spécifié.
 * @filename: Le nom du fichier à créer.
 * @text_content: Le contenu à écrire dans le fichier.
 *
 * Return: 1 en cas de succès, -1 en cas d'erreur.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, bytes_written, length = 0;
	/* Vérifie si le nom de fichier est NUL*/
	if (filename == NULL)
		return (-1);
	/* Calcule la longueur du contenu texte */
	if (text_content != NULL)
	{
		while (text_content[length] != '\0')
			length++;
	}
	/* Ouvre le fichier en mode écriture, le ree s'il n'existe pas, */
	/* le tronque s'il existe dé */
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	/* Crée le fichier ou le tronque s'il existedeja*/
	if (fd == -1)
		return (-1);

	/* Ecrit le contenu dans le fichier */
	if (text_content != NULL)
	{
		bytes_written = write(fd, text_content, length);
		/* ecrit le contenu dans le fichier */
		if (bytes_written == -1)
		{
			close(fd);
			return (-1);
		}
	}
	/* Ferme le fichier et retourne 1 pour indiquer le succè */
	close(fd);
	return (1);
}
