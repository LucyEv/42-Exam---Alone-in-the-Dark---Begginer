#include <unistd.h>


int	main(void)
{
	char counter;

	counter = 'a';
	while(counter <= 'z')
	{
		if (counter % 2)
			write(1, &counter, 1);
		else
			{
			char temp = counter + 'A' - 'a';
			write(1,&temp,1);
			}
		counter++;
	}  
	write(1, "\n", 1);
	return (0);
}
