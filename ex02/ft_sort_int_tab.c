#include <stdio.h>

int ft_str_is_alpha(char *str)
{
	int	count;

	count = 0;
	if (str != 0)
	{
		while(str[count] != '\0')
		{
			if((str[count] >= 65 && str[count] <= 90) || (str[count] >= 97 && str[count] <= 122))
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
	
	printf ("%d",ft_str_is_alpha("a"));
	
	return (0);
}
