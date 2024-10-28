#include "func.h"

//https://dzone.com/articles/how-to-read-file-into-char-array-in-c

const char* LoadFromFile(char Path[])
{
	FILE* file;

	char* buffer = nullptr;
	int buffer_size = 0;
	int i = 0;

	
	file = fopen(Path, "r");

	if (file == NULL)
	{
		std::cout << "Error: Failer to open file " << Path << std::endl;
		return;
	}

	int symb;

	while ((symb = fgetc(file)) != EOF)
	{
		if (i >= buffer_size)
		{
			buffer_size += 1000;
			realloc(buffer, buffer_size);
			if (buffer == NULL || buffer == nullptr)
			{
				std::cout << "Error: memory allocation failed" << std::endl;
				return;
			}
		}

		buffer[i] = symb;
		++i;
	}
	fclose(file);
	return buffer;
}