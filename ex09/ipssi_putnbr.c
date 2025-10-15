#include <unistd.h>

void	ipssi_putchar(char c)
{
	write(1, &c, 1);
}

void	ipssi_putnbr(int nb)
{
	char	c;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ipssi_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
		ipssi_putnbr(nb / 10);
	c = nb % 10 + '0';
	ipssi_putchar(c);
}
