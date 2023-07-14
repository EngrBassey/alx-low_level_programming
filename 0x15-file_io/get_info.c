#include "main.h"

/**
 * get_info1 - print info magic and class
 * @ehdr: input
 */
void get_info1(unsigned char *ehdr)
{
	int i = 0;

	printf("  Magic:   ");
	for (; i < EI_NIDENT; i++)
	{
		printf("%02x", ehdr[i]);
		if (i == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
	printf("  Class:                             ");
	switch (ehdr[EI_CLASS])
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
			printf("<unknow: %x>\n", ehdr[EI_CLASS]);
	}
}
