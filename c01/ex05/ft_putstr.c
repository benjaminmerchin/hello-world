#include <unistd.h>
#include <stdio.h>

void ft_putstr(char *str)
{
	int a;
	
	a = 0;
	while(a > -1)
	{
		if(*(str + a) == 0)
			break;
		write(1, str + a, 1);
		a++;
	}
}

int main()
{
	char *str;
	str = "YoloQWERTYUIOP";

	printf("%s\n", str);
	ft_putstr(str);
	return(0);
}
