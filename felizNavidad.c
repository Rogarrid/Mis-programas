#include <unistd.h>
#include <stdio.h>

int convertInt(char *string)
{
	int	counter;
	int	convert_int;

	counter = 0;
	convert_int = 0;
	while (string[counter] != '\0')
	{
		while (string[counter] == ',')
			counter++;
		while (string[counter] != '\0' && string[counter] >= '0'
			&& string[counter] <= '9')
		{
			convert_int *= 10;
			convert_int += string[counter] - '0';
			counter++;
		}
		return (convert_int);
	}
}

int	main(int argc, char **argv)
{
	int	counter;
	int	number;

	counter = 0;
	if (argc > 0)
	{
		while (argv[counter])
		{
			number = convertInt(argv[counter]);
			write (1, &number, 1);
			counter++;
		}
	}
	write (1, &"\n", 1);
	return (0);
}
