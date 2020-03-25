#include <unistd.h>
#include <stdio.h>

void ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
	printf("%d\n",*********nbr);
}



int main()
{
	int a;
	int *nb1;
	int **nb2;
	int ***nb3;
	int ****nb4;
	int *****nb5;
	int ******nb6;
	int *******nb7;
	int ********nb8;
	int *********nb9;

	a = 41;
	nb1 = &a;
	nb2 = &nb1;
	nb3 = &nb2;
	nb4 = &nb3;
	nb5 = &nb4;
	nb6 = &nb5;
	nb7 = &nb6;
	nb8 = &nb7;
	nb9 = &nb8;
	printf("%d\n",*********nb9);
	ft_ultimate_ft(nb9);
	return(0);
}
