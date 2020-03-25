#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
	int a;

	a = 0;
	while(a > -8000)
	{
		if(*(str + a) == 0)
			break;
		a++;
	}
	return(a);
}

int main()
{
	char *str;

	str = "Hello";
	ft_strlen(str);
	return(0);
}
