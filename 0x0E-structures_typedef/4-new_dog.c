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

	while (*s++)
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
	int a = 0;
	int b = 0;

	while (*(src + a) != '\0')
	{
		a++;
	}
	for (; b < a; b++)
	{
		dest[b] = src[b];
	}
	dest[a] = '\0';

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

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}

	dog->name = _strcpy(dog->name, name);
	dog->owner = _strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
