#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int count;

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] >= 'A' && str[count] <= 'Z')
			str[count] += 32;
		if (str[count] >= 'a' && str[count] <= 'z')
		{
			if (!(str[count - 1] >= 'a' && str[count - 1] <= 'z'))
			{
				if (!(str[count - 1] >= '0' && str[count - 1] <= '9'))
				{
					if (!(str[count - 1] <= 'Z' && str[count - 1] >= 'A'))
					{
						str[count] -= 32;
					}
				}
			}
		}
		count++;
	}
	return (str);
}

int	main()
{
	char	s[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s\n", ft_strcapitalize(s));
	return (0);
}
