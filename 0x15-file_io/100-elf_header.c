#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include "main.h"

void display_error(const char *message)
{
	write(STDERR_FILENO, "Error: ", 7);
	write(STDERR_FILENO, message, strlen(message));
	write(STDERR_FILENO, "\n", 1);
	exit(98);
}

void display_elf_header_info(const ElfHeader *header)
{
	char buf[256]; // Buffer for string formatting
	int offset = 0;

	offset = snprintf(buf, sizeof(buf), "ELF Header:\n");
	write(STDOUT_FILENO, buf, offset);

	offset = snprintf(buf, sizeof(buf), "  Magic:   ");
	for (int i = 0; i < 16; i++)
	{
		offset += snprintf(buf + offset, sizeof(buf) - offset, "%02x ", header->e_ident[i]);
	}
	offset += snprintf(buf + offset, sizeof(buf) - offset, "\n");
	write(STDOUT_FILENO, buf, offset);

	offset = snprintf(buf, sizeof(buf), "  Class:                             ELF%d\n", header->e_ident[4] == 1 ? 32 : 64);
	write(STDOUT_FILENO, buf, offset);

	offset = snprintf(buf, sizeof(buf), "  Data:                              2's complement, %s endian\n", header->e_ident[5] == 1 ? "little" : "big");
	write(STDOUT_FILENO, buf, offset);

	// ... Display other fields similarly ...
}

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		display_error("Usage: elf_header elf_filename");
	}

	const char *filename = argv[1];

	int fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		display_error(strerror(errno));
	}

	ElfHeader elf_header;

	if (read(fd, &elf_header, sizeof(ElfHeader)) != sizeof(ElfHeader))
	{
		close(fd);
		display_error("Failed to read ELF header");
	}

	if (memcmp(elf_header.e_ident, "\x7F"
																 "ELF",
						 4) != 0)
	{
		close(fd);
		display_error("Not an ELF file");
	}

	display_elf_header_info(&elf_header);

	close(fd);
	return 0;
}
