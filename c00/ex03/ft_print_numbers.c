#include <unistd.h>

void	ft_print_numbers(void)
{
	int digits;

	digits = 49;
	while (digits < 58)
	{
		write(1, &digits, 1);
		++digits;
	}
}

int main () {
    ft_print_numbers();
    return 0;
}
