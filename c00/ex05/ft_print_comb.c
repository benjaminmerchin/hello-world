#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(char a, char b, char c)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
	if ( a != '7' || b != '8' || c != '9' )
	{
		write(1, ",", 1);
		write(1, " ", 1);
	}
}

void	ft_print_comb2()
{
	char a;
	char b;
	char c;

	a = '0';
	b = '1';
	c = '2';
	while ( a != b && a != c && a <= '7' )
	{
		b = a + 1;
		while ( b <= '8' )
		{
			c = b + 1;
			while ( c <= '9')
			{
				ft_print(a, b, c);
				c++;
			} 
			b++;
		}
		a++;
	}
}



int	main()
{
	ft_print_comb2();
	return(0);
}
