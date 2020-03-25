#include <unistd.h>
#include <stdio.h>

void ft_swap(int *a, int *b)
{
	int k;
	int *c;

	c = &k;
	*c = *a;
	*a = *b;
	*b = *c;
}

int main()
{
	int i;
	int j;
	int *a;
	int *b;
	
	i = 8;
	j = 18;
	a = &i;
	b = &j;
	
	printf("%d\n",*a);
	printf("%d\n",*b);
	ft_swap(a, b);
	printf("%d\n",*a);
	printf("%d\n",*b);
	return(0);
}
