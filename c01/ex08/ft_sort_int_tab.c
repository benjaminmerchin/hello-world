#include <unistd.h>
#include <stdio.h>

void ft_sort_int_tab(int *tab, int size)
{
	int backup[size];
	int a;
	int b;
	int place_min;
	
	a = 0;
	while (a < size)
	{
		backup[a] = tab[a];
		printf("%d\n", backup[a]);
		a++;
	}
	printf("\n");
	a = 0;
	while (a < size)
	{
		b = a;
		place_min = a;
		while (b < size)
		{
			if (tab[place_min] < tab[b])
				place_min = b;
			b++;
		}
		tab[a] = backup[place_min];
		tab[place_min] = backup[a];
		backup[a] = tab[a];
		backup[place_min] = tab[place_min];
		a++;
	}
	a = -1;
	while (a++ < size - 1)
	{
		tab[a] = backup[size - a - 1];
		printf("%d\n", tab[a]);
	}
}




int main()
{
	int tab[5] = {1, 9, 3, 4, 5};
	int size;
	
	size = 5;
	ft_sort_int_tab(tab, size);
	return(0);
}
