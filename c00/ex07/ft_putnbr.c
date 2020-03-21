#include <unistd.h>

void	ft_putchar(char c)
{
	c = c + '0';
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int psg;
	
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
		ft_putnbr(nb);
	}
	else
	{
		if (nb > 10)
		{
			psg = nb / 10;
			ft_putnbr(psg);
		}
		ft_putchar(nb % 10);
	}
}

int	main()
{
	int nb;

	nb = -1;
	ft_putnbr(nb);
	return(0);
}
