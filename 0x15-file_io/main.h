#ifndef MAIN_H
#define MAIN_H

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);


typedef struct header_types
{
	int type;
	char *msg;
} Hdr_t;

void mannage_error(char *msg, int code);
void isElfFile(unsigned char *e_ident);
void mannage_magic(Elf64_Ehdr *header);
void mannage_class(Elf64_Ehdr *header);
void mannage_data(Elf64_Ehdr *header);
void mannage_version(Elf64_Ehdr *header);
void mannage_os_abi(Elf64_Ehdr *header);
void mannage_type(Elf64_Ehdr *header);

void struct_iterator(Hdr_t *h_t, int size, Elf64_Ehdr *header, char *title, int flag);
void type_iterator(Hdr_t *h_t, int size, Elf64_Ehdr *header, char *title);
#endif
