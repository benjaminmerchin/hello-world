#include <unistd.h>

void ft_print_reverse_alphabet()
{
	char c;
	char *ptr;

	ptr = &c;
	c = 'a';
	while(c <= 'z')
	{
		write(1, ptr, 1);
		c++;
	}
}

int main()
{
	ft_print_reverse_alphabet();
	return(0);
}
