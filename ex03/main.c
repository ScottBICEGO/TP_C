#include <unistd.h>

void	ipssi_ultimate_ft(int *********nbr);

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
	int number;
	int *p1 = &number;
	int **p2 = &p1;
	int ***p3 = &p2;
	int ****p4 = &p3;
	int *****p5 = &p4;
	int ******p6 = &p5;
	int *******p7 = &p6;
	int ********p8 = &p7;
	int *********p9 = &p8;

	ipssi_ultimate_ft(p9);
	ipssi_putnbr(number);
	write(1, "\n", 1);
	return (0);
}
