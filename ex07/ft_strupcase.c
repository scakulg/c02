#include <stdio.h>

char *ft_strupcase(char *str)
{
	int	count;

	count = 0;
	while(str[count] >= 65 && str[count] <= 122)
	{
		str[count] -= 32;
		count++;
	}
	return(str);
}

int	main()
{
	char	c[] = "itsmylife";

	printf("%s", ft_strupcase(c));
	return (0);
}
