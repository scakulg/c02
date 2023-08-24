#include <stdio.h>

int ft_str_is_uppercase(char *str)
{
	int	count;

	count = 0;
	if (str != 0)
	{
		while(str[count] != '\0')
		{
			count++;
			if(str[count] >= 65 && str[count] <= 90)
				return(1);
			else
				return(0);
		}
	}
	return (1);
}

int	main()
{

	printf ("%d",ft_str_is_uppercase("372645298736547"));

	return (0);
}
