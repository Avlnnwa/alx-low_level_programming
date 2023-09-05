#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

/**
 * print_elf_info - Display ELF header information.
 * @header: Pointer to the ELF header structure.
 */

void print_elf_info(Elf64_Ehdr *header);
int main(int argc, char *argv[])
{
int fd;
Elf64_Ehdr header;

if (argc != 2)
{
	dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0]);
	return (98);
}
fd = open(argv[1], O_RDONLY);
if (fd == -1)
{
	dprintf(STDERR_FILENO, "Error: Cannot open file %s\n", argv[1]);
	return (98);
}
if (read(fd, &header, sizeof(header)) != sizeof(header) ||
		header.e_ident[EI_MAG0] != ELFMAG0 ||
		header.e_ident[EI_MAG1] != ELFMAG1 ||
		header.e_ident[EI_MAG2] != ELFMAG2 ||
		header.e_ident[EI_MAG3] != ELFMAG3)
{
	dprintf(STDERR_FILENO, "Error: Not an ELF file: %s\n", argv[1]);
	close(fd);
	return (98);
}
print_elf_info(&header);
close(fd);
return (0);

}

void print_elf_info(Elf64_Ehdr *header)
{
	printf("Magic:   ");
	for (int i = 0; i < EI_NIDENT; i++)
		printf("%02x ", header->e_ident[i]);
	printf("\n");

	printf("Class:   %s\n", header->e_ident[EI_CLASS] == ELFCLASS64 ?
			"ELF64" : "ELF32");
	printf("Data:    %s\n", header->e_ident[EI_DATA] == ELFDATA2LSB ?
			"2's complement, little endian" : "Unknown");
	printf("Version: %d (current)\n", header->e_ident[EI_VERSION]);
	printf("OS/ABI:  %d\n", header->e_ident[EI_OSABI]);
	printf("ABI Version: %d\n", header->e_ident[EI_ABIVERSION]);
	printf("Type:    %d\n", header->e_type);
	printf("Entry point address: 0x%lx\n", (unsigned long)header->e_entry);
}
