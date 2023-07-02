#include "main.h"

/**
 * main - entry
 * @argc: argument count
 * @argv: the arguments
 * Return: 0 Success (Always)
 */
int main(int argc, char *argv[])
{
FILE *file;
char *file_name;

if (argc != 2)
{
printf("Usage: factors <file>\n");
return (1);
}

file_name = argv[1];
file = fopen(file_name, "r");
if (file == NULL)
{
printf("File not found\n");
return (1);
}

processfile(file);

return (0);
}
