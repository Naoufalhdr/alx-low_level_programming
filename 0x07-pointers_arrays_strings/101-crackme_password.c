#include <stdio.h>

/**
 * getPassword - create a password for the crackme2 file.
 * Return: a string that matche the password.
 */

char *getPassword()
{
	return ("abc123");
}

/**
 * main - call the fucntion getPassword and print the string.
 * Return: none.
 */

int main(void)
{
	char *password;

	password = getPassword();

	printf("%s", password);

	return (0);
}
