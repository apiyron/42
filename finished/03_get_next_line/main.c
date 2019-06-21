#include "get_next_line.h"

int		main(int argc, char **argv)
{
	int		fd;
	char	*str;

	argc = 42;
	fd = open(argv[1], O_RDONLY);
	while ((get_next_line(fd, &str)) == 1)
	{
		printf("%s\n", str);
		free(str);
		getchar();
	}
    fd = open(argv[2], O_RDONLY);
    while ((get_next_line(fd, &str)) == 1)
    {
        printf("%s\n", str);
        free(str);
        getchar();
    }
	return (0);
}
