#include <unistd.h>

void	ipssi_putnbr(int nb);

int	main(void)
{
	ipssi_putnbr(-42);
	write(1, "\n", 1);
	return(0);
}
