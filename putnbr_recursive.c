#include <unistd.h>
#include <limits.h>

const char	*g_base10 = "0123456789";

int	my_abs(int num)
{
	if (num >= 0)
		return (num);
	else
		return (-num);
}

void	ft_putnbr(int num)
{
	if (my_abs(num / 10) == 0)
	{
		if (num < 0)
			write(1, "-", 1);
		write(1, g_base10 + my_abs(num), 1);
	}
	else
	{
		ft_putnbr(num / 10);
		write (1, g_base10 + my_abs(num % 10), 1);
	}
}

int	main(void)
{
	ft_putnbr(INT_MIN);
}