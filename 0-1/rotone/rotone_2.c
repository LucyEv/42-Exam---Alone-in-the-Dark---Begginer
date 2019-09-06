#include <unistd.h>
#include <stdio.h>

int	ft_plus(int x)
{
	return(x + 1);
}


int	ft_apply_fun(int y,int (*func)(int))
{
	return((*func)(y));
}


int     ft_strlen(char *str)
{       
        int i;
        i = 0;
        while (str[i] != '\0')
        {       
                i++;
        }
        return(i);
}


char	transform(char letter, int k)
{
	int	number;
	char	new_letter;
	char	ascii_of_first_letter;
	int	new_number;

	if (letter >= 'a' && letter <= 'z')
	{
		ascii_of_first_letter='a';
	}
	else if (letter >= 'A' && letter <= 'Z')
	{
		ascii_of_first_letter='A';
	}			
	else
		return(letter);

	number = letter - ascii_of_first_letter;
	new_number = (number + k) % 26;
	new_letter = new_number + ascii_of_first_letter;
	return(new_letter);
}

void	apply_transform(char *string1, char (* func)(char, int), int k)
{
	int	i;

	i = 0;
	int l;
	l = ft_strlen(string1);
	char	current_letter;
	char	transformed_letter;
	while (i < l)
	{
		current_letter = string1[i];
		transformed_letter = (*func)(current_letter, k);
		write(1, &transformed_letter, 1);
		i++;
	}	
	write(1, "\n", 1);
}

 int main(int argc, char **argv)
{
	if (argc == 2)
	{
		apply_transform(argv[1], transform, 1);
	}
	write(1, "\n", 1);
	return(0);
}
