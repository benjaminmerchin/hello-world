#include <unistd.h>
#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
	int i;
	int j;

	i = *a;
	j = *b;
	*a = i / j;
	*b = i % j;
}

int main()
{
	int i;
	int j;
	int *a;
	int *b;
	
	i = 2;
	j = 3;
	a = &i;
	b = &j;
	printf("%d\n", *a);
	printf("%d\n", *b);
	ft_ultimate_div_mod(a, b);
	printf("%d\n", *a);
	printf("%d\n", *b);
	return(0);
}
