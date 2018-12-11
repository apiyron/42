#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int argc, const char *argv[])
{
	int i;
	int j;

	while (argc-- > 1)
	{
		j = 0;
		while (argv[argc][j] != '\0')
		{
			ft_putchar(argv[argc][j]);
			j++;
		}
		ft_putchar('\n');
	}
}
