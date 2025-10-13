#include <unistd.h>

void	ipssi_putstr(char *str);

int	main(void)
{
	char	*msg = "Ouoh!\n";
	ipssi_putstr(msg);
	return (0);
}
