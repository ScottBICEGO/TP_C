#include <unistd.h>

void	ipssi_ft(int *nbr);

void	ipssi_putnbr(int n)
{
	char	c;

	if (n >= 10)
		ipssi_putnbr(n / 10);
	c = n % 10 + '0';
	write(1, &c, 1);
}

int	main(void)
{
	int	number;

	number = 0;
	ipssi_ft(&number);
	ipssi_putnbr(number);
	write(1, "\n", 1);
	return (0);
}

	
