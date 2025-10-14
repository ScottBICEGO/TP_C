#include <unistd.h>

int	ipssi_strlen(char *str);

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
	char	*msg = "Hello IPSSI";
	int		len;

	len = ipssi_strlen(msg);
	ipssi_putnbr(len);
	write(1, "\n", 1);
	return (0);
}
