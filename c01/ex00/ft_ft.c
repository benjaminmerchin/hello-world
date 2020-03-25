#include <unistd.h>
#include <stdio.h>

void ft_ft(int *nbr)
{
	*nbr = 42;
	printf("%d\n",*nbr);
}



int main()
{
	int a;
	int *nbr;

	a = 41;
	nbr = &a;
	printf("%d\n",a);
	ft_ft(nbr);
	return(0);
}
