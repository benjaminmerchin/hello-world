#include <unistd.h>

void	ft_putchar(char c)
{
	char b;

	b = c + '0';
	write(1, &b, 1);
}




void	ft_print_comb2()
{
	int a;
	int b;

	a = 0;
	while (a < 99)
	{
		b = a + 1;
		while (b < 100)
		{
			ft_putchar(a / 10);
			ft_putchar(a % 10);
			write(1, " ", 1);
			ft_putchar(b / 10);
			ft_putchar(b % 10);
			if (a != 98 || b != 99)
			{
				write(1, ", ", 2);
			}
			b++;
		}
		a++;
	}
}


int	 main()
{
	ft_print_comb2();
	return(0);
}
