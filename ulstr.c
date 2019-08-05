#include <unistd.h>
#include <stdio.h>

int	ft_lowcase(char sym)
{	
	if (sym >='a' && sym <='z')
	return(1);
	return(0);
}

int	ft_uppercase(char sym)
{
	if (sym >='A' && sym <='Z')
	return(1);
	return(0);
}

char	ft_switch_case(char sym)
{
	char res;
	char interval = 'a' - 'A';
	if (ft_lowcase(sym))
	{	 
		res = sym - interval;
		return(res);
	}
	if (ft_uppercase(sym)) 
	{
		res = sym + interval;
		return(res);
	}
	return(sym);
}

int	ft_strlen(char *s)
{
	int i;
	i = 0;
	while(s[i] != '\0')
	i++;
	return(i);
}

void ulstr(char *s)
{
	int i;
	i = 0;
	int l;
	l = ft_strlen(s);
	char transformed;
	char sym;
	while (i < l)
	{
		sym = s[i];
		transformed = ft_switch_case(sym);
		write(1, &transformed, 1);
		i++;		
	}
	write(1, "\n", 1);
}

int main(int argc, char **argv)
{
        if (argc == 2)
	        {
		ulstr(argv[1]);
	        return (0);
		}
	else 
		{        
		write(1, "\n", 1);
	        return (0);
		}
}
