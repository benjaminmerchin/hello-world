#include <unistd.h>
#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int main()
{
	int d;
	int m;
	int *div;
	int *mod;

	d = 4;
	m = 5;
	div = &d;
	mod = &m;
	printf("%d\n", *div);
	printf("%d\n", *mod);
	ft_div_mod(8, 5, div, mod);
	printf("%d\n", *div);
	printf("%d\n", *mod);
	return(0);
}
