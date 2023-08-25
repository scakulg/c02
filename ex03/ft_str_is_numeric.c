#include <stdio.h>

int		ft_str_is_numeric(char *str)

{
	int count;

	count = 0;
	if(str != 0)
	{	
		while (str[count] != '\0')
		{
			if (str[count] >= 48 && str[count] <= 57)
				return(1);
			else
				return(0);
			count++;
		}
	}
	return (1);
}

int	main()
{
	printf("%d", ft_str_is_numeric("9"));
}
