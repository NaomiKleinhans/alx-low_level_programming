#include <stdio.h>
#include <stdint.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

// ELF header structure
typedef struct {
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
} ElfHeader;

// Error handling and display
void display_error(const char *message) {
    fprintf(stderr, "Error: %s\n", message);
    exit(98);
}

// Function to display ELF header information
void display_elf_header_info(const ElfHeader *header) {
    printf("Magic: ");
    for (int i = 0; i < 16; i++)
        printf("%02x ", header->e_ident[i]);
    printf("\n");

    printf("Class: %u-bit\n", header->e_ident[4] == 1 ? 32 : 64);

    printf("Data: %s\n", header->e_ident[5] == 1 ? "Little Endian" : "Big Endian");

    printf("Version: %u\n", header->e_ident[6]);

    printf("OS/ABI: %u\n", header->e_ident[7]);

    printf("ABI Version: %u\n", header->e_ident[8]);

    printf("Type: %u\n", header->e_type);

    printf("Entry point address: 0x%lx\n", (unsigned long)header->e_entry);
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        display_error("Usage: elf_header elf_filename");
    }

    const char *filename = argv[1];

    int fd = open(filename, O_RDONLY);
    if (fd == -1) {
        display_error(strerror(errno));
    }

    ElfHeader elf_header;

    // Read ELF header
    if (read(fd, &elf_header, sizeof(ElfHeader)) != sizeof(ElfHeader)) {
        close(fd);
        display_error("Failed to read ELF header");
    }

    // Verify if the file is an ELF file
    if (memcmp(elf_header.e_ident, "\x7F""ELF", 4) != 0) {
        close(fd);
        display_error("Not an ELF file");
    }

    // Display ELF header information
    display_elf_header_info(&elf_header);

    close(fd);
    return 0;
}
