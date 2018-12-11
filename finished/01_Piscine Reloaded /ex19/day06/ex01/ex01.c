#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int argc, const char *argv[])
{
	int i;

	i = 0;
	while(argv[0][i++] != '\0')
	{
		ft_putchar(argv[0][i]);
	}
	ft_putchar('\0');
}
