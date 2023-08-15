#include <stdio.h>
#include "dog.h"

/**
 * _strlen - function returns length of sting
 * @s: evaluated string
 * Return: length of string
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * _strcpy - functiom that copies a string
 * @dest: dest string
 * @src: source of copy
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i, len1;

	len1 = 0;

	while (src[len1] != '\0')
	{
		len1++;
	}
	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - function that creates a new dog
 * @name: pointer to char
 * @age: float variable
 * @owner: pointer to char
 * Return: dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int l1, l2;

	l1 = _strlen(name);
	l2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (l1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (l2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}

	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
