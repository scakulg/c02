#include <stdio.h>

char *ft_strlowcase(char *str)
{
	int	count;

	count = 0;
	while(str[count] >= 65 && str[count] <= 90)
	{
		str[count] += 32;
		count++;
	}
	return(str);
}

int	main()
{
	char	c[] = "ITSMYLIFE";

	printf("%s", ft_strlowcase(c));
	return (0);
}
