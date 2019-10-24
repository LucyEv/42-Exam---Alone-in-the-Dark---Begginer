/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 11:36:13 by exam              #+#    #+#             */
/*   Updated: 2018/08/17 13:35:45 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>

void ft_putchar(char c) 
{
	write (1, &c, 1);
}

int content(char *str, char c, int max)
{
	while (*str && max-- != 0)
	{
		if(*str == c)
			return (1);
		str++;
	}
	return (0);
}

void	inter(char *str, char *str2)
{
	int index;

	index = 0;
	while (str[index])
	{
		if(content(str2, str[index], -1))
			if (index == 0 || content (str, str[index], index) == 0)
		ft_putchar (str[index]);
			index++;
	}
	ft_putchar('\n');
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		inter(argv[1], argv[2]);
	else 
		ft_putchar('\n');
	return (0);
}
