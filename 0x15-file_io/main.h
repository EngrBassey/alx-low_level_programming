#ifndef MAIN_H
#define MAIN_H

#include <elf.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
char *_malloc(char *n);
void _close(int file);
void get_info1(unsigned char *ehdr);
void get_info2(unsigned char *ehdr);
void get_info3(unsigned char *ehdr);
void get_info4(unsigned int e_type,
		unsigned long int e_entry, unsigned char *ehdr);
void check_elf(unsigned char *ehdr);
void check_elf(unsigned char *ehdr);
#endif
