#include <unistd.h>

void	ipssi_swap(int *a, int *b);

void	ipssi_putnbr(int n)
{
	char c;

	if (n >= 10)
		ipssi_putnbr(n / 10);
	c = n % 10 + '0';
	write(1, &c, 1);
}

int	main(void)
{
	int x = 5;
	int y = 10;

	ipssi_swap(&x, &y);

	ipssi_putnbr(x);
	write(1, "\n", 1);
	ipssi_putnbr(y);
	write(1, "\n", 1);

	return (0);
}
