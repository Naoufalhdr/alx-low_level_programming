#include <stdio.h>
#include <stdint.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * print_magic - prints the magic bytes of the ELF header.
 * @magic: an array containing the magic bytes.
 */
void print_magic(unsigned char magic[16])
{
	int i;

	printf("  Magic:   ");
	for (i = 0; i < 16; i++)
	{
		if (i != 15)
			printf("%02x ", magic[i]);
		else
			printf("%02x", magic[i]);
	}
	printf("\n");
}

/**
 * print_class - Prints the class field of the ELF header.
 * @elf_class: The class field value.
 */
void print_class(unsigned char elf_class)
{
	printf("  %-35s", "Class:");
	if (elf_class == 1)
		printf("ELF32\n");
	else if (elf_class == 2)
		printf("ELF64\n");
	else
		printf("none\n");
}

/**
 * print_data - Prints the data field of the ELF header.
 * @elf_data: The data field value.
 */
void print_data(unsigned char elf_data)
{
	printf("  %-35s", "Data:");
	if (elf_data == 1)
		printf("2's complement, little endian\n");
	else if (elf_data == 2)
		printf("2's complement, big endian\n");
	else
		printf("<unknown : %x>\n", elf_data);
}

/**
 * print_version - Prints the version field of the ELF header.
 * @elf_version: The version field value.
 */
void print_version(unsigned char elf_version)
{
	printf("  %-35s", "Version:");
	printf("%d (current)\n", elf_version);
}

/**
 * print_os_abi - Prints the OS/ABI field of the ELF header.
 * @elf_os_abi: The OS/ABI field value.
 */
void print_os_abi(unsigned char elf_os_abi)
{
	printf("  %-35s", "OS/ABI:");
	if (elf_os_abi == 0)
		printf("UNIX - System V\n");
	else if (elf_os_abi == 1)
		printf("UNIX - HP-UX\n");
	else if (elf_os_abi == 2)
		printf("UNIX - NetBSD\n");
	else if (elf_os_abi == 3)
		printf("UNIX - Linux\n");
	else if (elf_os_abi == 4)
		printf("UNIX - GNU Hurd\n");
	else if (elf_os_abi == 5)
		printf("UNIX - Solaris\n");
	else if (elf_os_abi == 6)
		printf("UNIX - AIX\n");
	else if (elf_os_abi == 7)
		printf("UNIX - IRIX\n");
	else if (elf_os_abi == 8)
		printf("UNIX - FreeBSD\n");
	else if (elf_os_abi == 9)
		printf("UNIX - OpenBSD\n");
	else if (elf_os_abi == 10)
		printf("UNIX - OpenVMS\n");
	else if (elf_os_abi == 11)
		printf("UNIX - NonStop Kernel\n");
	else if (elf_os_abi == 12)
		printf("UNIX - AROS\n");
	else if (elf_os_abi == 13)
		printf("UNIX - Fenix OS\n");
	else if (elf_os_abi == 14)
		printf("UNIX - CloudABI\n");
	else if (elf_os_abi == 15)
		printf("UNIX - OpenVOS\n");
	else
		printf("<unknown: %x>\n", elf_os_abi);
}

/**
 * print_abi_version - Prints the ABI version field of the ELF header.
 * @elf_abi_version: The ABI version field value.
 */
void print_abi_version(unsigned char elf_abi_version)
{
	printf("  %-35s", "ABI Version:");
	printf("%d\n", elf_abi_version);
}

/**
 * print_type - Prints the type field of the ELF header.
 * @elf_type: The type field value.
 */
void print_type(unsigned char elf_type)
{
	printf("  %-35s", "Type:");
	if (elf_type == 0)
		printf("NONE (None)\n");
	else if (elf_type == 1)
		printf("REL (Relocatable file)\n");
	else if (elf_type == 2)
		printf("EXEC (Executable file)\n");
	else if (elf_type == 3)
		printf("DYN (Shared object file)\n");
	else if (elf_type == 4)
		printf("CORE (Core file)\n");
	else
		printf("<unknown: %x>\n", elf_type);
}

/**
 * main - displays the information contained in the ELF header at
 *        the start of an ELF file.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings representing the command-line arguments.
 * Return: 0 on success, 1 on error.
 */
int main(int argc, char *argv[])
{
	int file, i;
	unsigned char elf_header[64];
	uint64_t entry_point = 0;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		return (1);
	}
	file = open(argv[1], O_RDONLY);
	if (file == -1)
	{
		perror("Error opening file");
		return (1);
	}
	if (read(file, elf_header, sizeof(elf_header)) != sizeof(elf_header))
	{
		perror("Error reading ELF header");
		close(file);
		return (1);
	}
	printf("ELF Header:\n");
	print_magic(elf_header);
	print_class(elf_header[4]);
	print_data(elf_header[5]);
	print_version(elf_header[6]);
	print_os_abi(elf_header[7]);
	print_abi_version(elf_header[8]);
	print_type(elf_header[16]);
	for (i = 0; i < 8; i++)
		entry_point |= ((uint64_t)elf_header[0x18 + i]) << (i * 8);
	printf("  %-35s", "Entry point address:");
	printf("0x%lx\n", entry_point);
	close(file);
	return (0);
}
