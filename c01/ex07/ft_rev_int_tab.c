#include <unistd.h>
#include <stdio.h>

void ft_rev_int_tab(int *tab, int size)
{
	int backup[size];
	int a;
	
	a = 0;
	while (a < size)
	{
		backup[a] = tab[a];
		printf("%d\n", backup[a]);
		a++;
	}
	printf("\n");
	a = -1;
	while (a++ < size - 1)
	{
		tab[a] = backup[size - a - 1];
		printf("%d\n", tab[a]);
	}
}




int main()
{
	int tab[5] = {1, 2, 3, 4, 5};
	int size;
	
	size = 5;
	ft_rev_int_tab(tab, size);
	return(0);
}
