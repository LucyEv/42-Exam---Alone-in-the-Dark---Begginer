#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *s)
{
int res;
res = 0;
while (s[res] != '\0')
	{
		res++;
	}
return (res);
}

void ft_write_ch(char c){
write(1, &c, 1);

}

void search_and_replace(char *s, char letter_to_find, char letter_to_replace)
{
int i;
i = 0;
int l;
l = ft_strlen(s);
char current_letter;
while (i < l)
{
 current_letter = s[i];
 if (current_letter == letter_to_find)
	ft_write_ch(letter_to_replace);
 else
	ft_write_ch(current_letter);
 i++;
}
}

int main(int argc, char **argv)
{
 int i;
 i = 0;
 
if (argc != 4)
{
	write(1, "\n", 1);
	return (0);
}
	search_and_replace (argv[1], argv[2][0], argv[3][0]);	
	write(1, "\n", 1);
	return (0);
}

