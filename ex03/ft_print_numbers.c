#include <unistd.h>

void	print_number(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	int	i;

	i = 0;
	while (i <= 9)
	{
		print_number(i + '0');
		i++;
	}
}


int main(void) {
    ft_print_numbers();

}


    