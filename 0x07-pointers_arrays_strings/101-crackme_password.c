#include <stdio.h>

/**
 * getPassword - create a password for the crackme2 file.
 * Return: a string that matche the password.
 * main - call the fucntion getPassword and print the string.
 * Return: none.
 */

char *getPassword()
{
	return ("jennieandjayloveasm=");
}

int main(void)
{
	char *password;

	password = getPassword();

	printf("%s", password);

	return (0);
}
