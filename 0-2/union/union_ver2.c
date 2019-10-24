#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int i;
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return(i);
}

int	is_it_new(char letter, char *old_string)
{
	
	
	int i;
	i = 0;
	int l;
	l = ft_strlen(old_string);
	char current_letter1;
	while(i < l)
	{
		current_letter1 = old_string[i];
		if (current_letter1 == letter)
		return (0);
		i++;
	}
	return (1);
}

char *add_to_the_end(char * s, char c)
{
	int i=0;
	while( s[i])
		i++;
	s[i]=c;
	s[i+1]=0;
	return s;
}

void init(char* s, int qty)
{
	while(qty>0) s[--qty]=0;
}

char *ft_concat(char *s1, char *s2)
{
 int l1;
 l1 = ft_strlen(s1);
 int l2;
 l2 = ft_strlen(s2);
 char * res;
 res = malloc((l1 + l2 + 1)*sizeof(char));
 
 int i = 0;
 while(i < l1)
	{	
		char c1 = *s1;
		res[i] = c1;
		s1++;
		i++;
	}		
 

while(i < (l1 + l2))
	{
		char c2 = *s2;
		res[i] = c2;
		s2++;
		i++;
	}				

 res[i]=0;
 return res;
}

void no_dubl(char * string1)
{
	char res[1000];
	init (res,1000);
	int i;
	int l;
	l = ft_strlen(string1);
	char current_letter;
	while (i < l)
	{
		current_letter = string1[i];
		if (is_it_new(current_letter, res)){
			add_to_the_end(res, current_letter);
			write(1, &current_letter, 1);
			}
		i++;
	}
	return ;
}

int main(int argc, char **argv)
{
	if (argc != 3)
		write(1, "\n", 1);
	else
	{
	char* s1 = argv[1];
	char* s2 = argv[2];
	char *s3;
	s3 = ft_concat(s1, s2);
	no_dubl(s3);
	}
	write(1, "\n", 1);
}
