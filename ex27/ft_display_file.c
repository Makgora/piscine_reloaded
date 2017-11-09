#include <unistd.h>

int	open_file(int argc, char **argv)
{
	int	fd;

	fd = -1;
	if (argc == 1)
		write(2, "File name missing.", 18);
	else if (argc > 2)
		write(2, "Too many arguments.", 19);
	else
	{
		fd = open(argv[1], O_RONLY);
		if (fd == -1)
			write(2, "Can't open file.", 16);
	}
	return (fd);
}

void	print_file(int fd)
{

}

int	main(int argc, char **argv)
{
	int	fd;

	fd = open_file(argc, argv);
	if (fd != -1)
	{
		
	}
	return (0);
}
