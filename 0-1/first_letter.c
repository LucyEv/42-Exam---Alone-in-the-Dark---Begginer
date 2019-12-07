#include <unistd.h>
#include <stdio.h>

int ft_lowcase(char c)
{
	if (c >='a' && c <='z')
		return(1);
        else 
		return(0);
}

int ft_uppercase(char c)
{
        if (c >='A' && c <='Z')
                return(1);
        else 
                return(0);
}

int ft_index(char c)
{
	if (ft_lowcase(c))
		return(c - 96);
	if (ft_uppercase(c))
		return(c - 64);
}

void ft_print_multiple(char c, int qty)
{
	int i;
	i = 0;
	while (i < qty)
	{	
		write(1, &c, 1);
		i++;
	}
}

int ft_strlen(char *s) 
{
	int i=0;
while(s[i] != '\0')
	i++;
return (i);
}

int	main()
{
	char *s="Alex";
	int len = ft_strlen(s);
	int i;
	i = 0; 
	char letter;
	int ind;
	ind = 0;
	while (i < len)
	{
		letter = s[i];
		ind = ft_index(letter);
		ft_print_multiple(letter, ind);
	i++;
	}
	return(0);
}
