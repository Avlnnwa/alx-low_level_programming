#include <stdio.h>
#include <stdlib.h>
#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

void check_elf(unsigned char *e_ident);
void close_elf(int elf);
void print_header_info(Elf64_Ehdr *header);


/**
 * check_elf - This checks if file is an ELF file.
 * @e_ident: A pointer to an array of ELF magic numbers.
 * Description: If file is not ELf exit code 98.
 */

void check_elf(unsigned char *e_ident)
{
int index;
for (index = 0; index < 4; index++)
{
	if (e_ident[index] != 127 &&
			e_ident[index] != 'E' &&
			e_ident[index] != 'L' &&
			e_ident[index] != 'F')
	{
		dprintf(STDERR_FILENO, "Error: Not an Elf file\n");
		exit(98);
	}
}
}

/**
 * close_elf - Close an ELF file.
 * @elf: The file desciptor of the ELF file.
 * Descriptor: If the file can't be closed - exit(98).
 */

void close_elf(int elf)
{
if (close(elf) == -1)
{
	dprint(STDERR_FILENO,
			"Error: Can't close fd %d\n", elf);
	exit(98);
}
}

/**
 * print_header_info - Prints info in ELF header.
 * @header: A pointer to the ELF header.
 */

void print_header_info(Elf64_Ehdr *header)
{
printf("ELF header:\n");
printf(" Magic: ");
for (int index = 0; index < EI_NIDENT; index++)
{
	printf("%02x", header->e_ident[index]);
	if (index == EI_NIDENT - 1)
		printf("\n");
	else
		printf(" ");
}
printf(" Class:          ");
switch (header->e_ident[EI_CLASS])
{
	case ELFCLASSNONE:
		printf("none\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %x>\n", header->e_ident[EI_CLASS]);
}
}

/**
 * main - This displays info contained in the
 * Elf header at the start of an ELF file.
 * @argc: Number of arguments supplied to the program.
 * @argv: Array of pointers to the arguments.
 * Return: 0 on success.
 * Description: exit code at 98 if file not ELF.
 */

int main(int argc, char *argv[])
{
int fd;
Elf64_Ehdr header;

if (argc != 2)
{
dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0]);
exit(98);
}

fd = open(argv[1], O_RDONLY);
if (fd == -1)
{
dprintf(STDERR_FILENO, "Error: can't read file %s\n", argv[1]);
exit(98);
}

if (read(fd, &header, sizeof(Elf64_Ehdr)) == -1)
{
dprintf(STDERR_FILENO, "Error: can't read file %s\n", argv[1]);
close_elf(fd);
exit(98);
}

check_elf(header.e_ident);
print_header_info(&header);
close_elf(fd);
return (0);

}
