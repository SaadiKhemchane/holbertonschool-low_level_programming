#include <stdlib.h>
/* Pour la fonction strdup */
#include <string.h>
#include "dog.h"

/**
 * _strdup - function to copy a string
 *
 * @str: The destination of the copy
 * Return: Success
 */

char *_strdup(char *str)
{
	char *tmp;
	int i;
	int len = 0;

	if (str == NULL)
		return (NULL);
	while (str[len] != '\0')
		len++;
	tmp = malloc((len + 1) * sizeof(*tmp));
	if (tmp == NULL)
		return (NULL);
	for (i = 0 ; i < len ; i++)
		tmp[i] = str[i];
	tmp[len] = '\0';

	return (tmp);
}


/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog (Success), NULL otherwise
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	/* Allouer la mémoire pour la structure */
	dog_t *dog = malloc(sizeof(dog_t));

	if (dog == NULL)
	{
		return (NULL);
	}

	/* Utiliser strdup pour copier les chaînes de caractères */
	dog->name = _strdup(name);
	dog->owner = _strdup(owner);

	/* Vérifier si l'allocation de mémoire a réussi */
	if (dog->name == NULL || dog->owner == NULL)
	{
		/* Libérer la mémoire allouée en cas d'échec */
		free(dog->name);
		free(dog->owner);
		free(dog);
		return (NULL);
	}

	/* Initialiser les autres champs de la structure */
	dog->age = age;

	/* Retourner le pointeur vers la nouvelle structure */
	return (dog);
}
