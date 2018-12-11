#include <stdio.h>

int		ft_count_if(char **tab, int (*f)(char*));

int		ft_checkstr(char *str)
{
	//Simple Test Function that finds the length of string.
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	if (i > 5) //If string length is greater than 5 it will return 1.
		return (1);
	else
		return (0);
}

int		ft_haschar(char *str)
{
	int i;
	char c = 'a';
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i++] == c)
			return (1);
	}
	return (0);
}

int		main(void)
{
	char *tab[8] = {"", "a", "ab", "abc", "abcd", "bcdef","bcdefg", 0};
	char *tab2[6] = {"", "b", "atr", "aued", "apols", 0};
	char *tab3[5] = {"ABC", "BCE", "ADE", "EFG", 0};
	char *tab4[5] = {"ABCEFG", "BCE", "ADE", "EFG", 0};
	char *tab5[5] = {"ABCAAAA", "BxexddCE", "ADE", "EFGHIGHHHHHH", 0};
	for (int i = 0; tab5[i] != '\0'; i++)
		printf("%s, ",tab5[i]);
	printf("\n");
	printf("Test1: Expected:%d Result:%d\n", 3, ft_count_if(tab5, &ft_checkstr));

	for (int i = 0; tab4[i] != '\0'; i++)
		printf("%s, ",tab4[i]);
	printf("\n");
	printf("Test2: Expected:%d Result:%d\n", 1, ft_count_if(tab4, &ft_checkstr));

	for (int i = 0; tab[i] != '\0'; i++)
		printf("%s, ",tab[i]);
	printf("\n");
	printf("Test3: Expected:%d Result:%d\n", 4, ft_count_if(tab, &ft_haschar));

	for (int i = 0; tab2[i] != '\0'; i++)
		printf("%s, ",tab2[i]);
	printf("\n");
	printf("Test4: Expected:%d Result:%d\n", 3, ft_count_if(tab2, &ft_haschar));

	for (int i = 0; tab3[i] != '\0'; i++)
		printf("%s, ",tab3[i]);
	printf("\n");
	printf("Test5: Expected:%d Result:%d\n", 0,ft_count_if(tab3, &ft_checkstr));

	for (int i = 0; tab2[i] != '\0'; i++)
		printf("%s, ",tab2[i]);
	printf("\n");
	printf("Test6: Expected:%d Result %d\n", 0,ft_count_if(tab2, &ft_checkstr));

	for (int i = 0; tab3[i] != '\0'; i++)
		printf("%s, ",tab3[i]);
	printf("\n");
	printf("Test7: Expected:%d Result:%d\n", 0,ft_count_if(tab3, &ft_checkstr));

	return (0);
}