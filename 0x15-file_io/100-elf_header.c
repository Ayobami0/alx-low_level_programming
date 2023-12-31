#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdint.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <elf.h>

/**
 * print_error - Prints an error message to stderr and exits.
 * @message: The error message to display.
 */
void print_error(const char *message)
{
	write(STDERR_FILENO, "Error: ", 7);
	write(STDERR_FILENO, message, strlen(message));
	write(STDERR_FILENO, "\n", 1);
	exit(98);
}
/**
 * print_ident - Prints the ELF header identification bytes.
 * @ident: Pointer to the identification bytes array.
 */
void print_ident(const unsigned char *ident)
{
	int i;

	for (i = 0; i < EI_NIDENT; ++i)
		printf("%02x ", ident[i]);
	printf("\n");
}
/**
 * print_class - Prints the ELF header class.
 * @class: The class value to print.
 */
void print_class(uint8_t class)
{
	if (class == ELFCLASS32)
		printf("ELF32\n");
	else if (class == ELFCLASS64)
		printf("ELF64\n");
	else
		printf("Invalid\n");
}
/**
 * print_data - Prints the ELF header data encoding.
 * @data: The data encoding value to print.
 */
void print_data(uint8_t data)
{
	if (data == ELFDATA2LSB)
		printf("2's complement, little-endian\n");
	else if (data == ELFDATA2MSB)
		printf("2's complement, big-endian\n");
	else
		printf("Invalid\n");
}
/**
 * print_osabi - Prints the ELF header OS/ABI.
 * @osabi: The OS/ABI value to print.
 */
void print_osabi(uint8_t osabi)
{
	if (osabi == ELFOSABI_SYSV)
		printf("UNIX - System V\n");
	else if (osabi == ELFOSABI_LINUX)
		printf("UNIX - Linux\n");
	else
		printf("Other\n");
}
/**
 * print_type - Prints the ELF header type.
 * @type: The type value to print.
 */
void print_type(uint16_t type)
{
	if (type == ET_NONE)
		printf("NONE (No file type)\n");
	else if (type == ET_REL)
		printf("REL (Relocatable file)\n");
	else if (type == ET_EXEC)
		printf("EXEC (Executable file)\n");
	else if (type == ET_DYN)
		printf("DYN (Shared object file)\n");
	else if (type == ET_CORE)
		printf("CORE (Core file)\n");
	else
		printf("Other\n");
}
/**
 * display_elf_header - Displays information from the ELF header.
 * @filename: The path to the ELF file.
 */
void display_elf_header(const char *filename)
{
	int fd;
	Elf64_Ehdr header;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		print_error("Failed to open file");

	if (read(fd, &header, sizeof(header)) != sizeof(header))
		print_error("Failed to read ELF header");

	if (header.e_ident[EI_MAG0] != ELFMAG0 ||
		header.e_ident[EI_MAG1] != ELFMAG1 ||
		header.e_ident[EI_MAG2] != ELFMAG2 ||
		header.e_ident[EI_MAG3] != ELFMAG3)
		print_error("Not a valid ELF file");

	printf("ELF Header:\n");
	printf("  Magic:   ");
	print_ident(header.e_ident);
	printf("  Class:                             ");
	print_class(header.e_ident[EI_CLASS]);
	printf("  Data:                              ");
	print_data(header.e_ident[EI_DATA]);
	printf("  Version:                           %d\n",
		header.e_ident[EI_VERSION]);
	printf("  OS/ABI:                            ");
	print_osabi(header.e_ident[EI_OSABI]);
	printf("  ABI Version:                       %d\n",
		header.e_ident[EI_ABIVERSION]);
	printf("  Type:                              ");
	print_type(header.e_type);
	printf("  Entry point address:               0x%lx\n",
		(unsigned long)header.e_entry);

	close(fd);
}
/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 * Return: 0 on success, 1 on incorrect usage.
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		write(STDERR_FILENO, "Usage: ", 7);
		write(STDERR_FILENO, argv[0], strlen(argv[0]));
		write(STDERR_FILENO, " elf_filename\n", 14);
		return (1);
	}

	display_elf_header(argv[1]);

	return (0);
}
