#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdint.h>

void display_elf_header(const char *filename);
int main(int argc, char *argv[]);

/**
 * struct Elf64_Ehdr - ELF header structure
 * @e_ident: ELF identification array
 * @e_type: ELF object file type
 * @e_machine: Architecture
 * @e_version: Object file version
 * @e_entry: Entry point address
 * @e_phoff: Program header offset
 * @e_shoff: Section header offset
 * @e_flags: Processor-specific flags
 * @e_ehsize: ELF header size
 * @e_phentsize: Size of program header entry
 * @e_phnum: Number of program header entries
 * @e_shentsize: Size of section header entry
 * @e_shnum: Number of section header entries
 * @e_shstrndx: Index of section header string table
 */
typedef struct Elf64_Ehdr
{
	unsigned char e_ident[16];
	uint16_t e_type;
	uint16_t e_machine;
	uint32_t e_version;
	uint64_t e_entry;
	uint64_t e_phoff;
	uint64_t e_shoff;
	uint32_t e_flags;
	uint16_t e_ehsize;
	uint16_t e_phentsize;
	uint16_t e_phnum;
	uint16_t e_shentsize;
	uint16_t e_shnum;
	uint16_t e_shstrndx;
} Elf64_Ehdr;

/**
 * display_elf_header - Display information from ELF header
 * @filename: Name of the ELF file
 */
void display_elf_header(const char *filename)
{
	Elf64_Ehdr header;
	int fd, i;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		fprintf(stderr, "Error opening file: %s\n", filename);
		exit(98);
	}

	if (read(fd, &header, sizeof(header)) != sizeof(header))
	{
		fprintf(stderr, "Error reading ELF header from file: %s\n", filename);
		close(fd);
		exit(98);
	}

	printf("ELF Header:\n");
	printf("    Magic:    ");
	for (i = 0; i < 16; i++)
	{
		printf("%02x ", header.e_ident[i]);
	}
	printf("\n");
	printf("    Class:    %s\n", (header.e_ident[4] == 1) ? "ELF32" : "ELF64");
	printf("    Data:     %s\n", (header.e_ident[5] == 1) ? "2's complement, little endian" : "2's complement, big endian");
	printf("    Version:  %u (current)\n", header.e_version);
	printf("    OS/ABI:   ");
	switch (header.e_ident[7])
	{
		case 0: printf("UNIX - System V\n"); break;
		case 6: printf("UNIX - Solaris\n"); break;
		case 7: printf("UNIX - NetBSD\n"); break;
		case 53: printf("<unknown: 53>\n"); break;
		default: printf("<unknown>\n"); break;
	}
	printf("    ABI Version:  %u\n", header.e_ident[8]);
	printf("    Type:    ");
	switch (header.e_type)
	{
		case 1: printf("EXEC (Executable file)\n"); break;
		case 3: printf("DYN (Shared object file)\n"); break;
		default: printf("<unknown>\n"); break;
	}
	printf("    Entry point address:    0x%lx\n", header.e_entry);

	close(fd);
}

/**
 * main - Entry point of the program
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		return (98);
	}

	display_elf_header(argv[1]);

	return (0);
}
