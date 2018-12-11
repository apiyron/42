#include <string.h>
#include <stdio.h>

char	*ft_strdup(char *src);


int		main(int argc, char** argv)
{
	char str[] = "LypP5gjzI3idfQqgbVN69x0IpNR5Wm6QPhuvLk7SSdfbW9sYqZ";
	char *p1;
	char *p2;
	p1 = strdup(str);
	p2 = ft_strdup(str);
	printf("Dublicat: %s\n", p1);
	printf("Dublicat: %s\n", p2);
	return (0);
}
