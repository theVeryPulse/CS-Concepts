#include <limits.h>
#include <unistd.h>

const char  *g_base_10 = "0123456789";

int abs_val(int num)
{
    if (num < 0)
        return (-num);
    else
        return (num);
}

void    ft_putnbr(int nb)
{
    char    rev_ary[20];
    int     i;
    int     sign;

    i = 0;
    if (nb >= 0)
        sign = 1;
    else
        sign = -1;
    while (nb / 10 != 0)
    {
        rev_ary[i++] = g_base_10[abs_val(nb % 10)];
        nb /= 10;
    }
    rev_ary[i] = g_base_10[abs_val(nb % 10)];
    if (sign == -1)
        write(1, "-", 1);
    while (i >= 0 && rev_ary[i])
        write(1, rev_ary + (i--), 1);
}

int main(void)
{
    ft_putnbr(INT_MIN);
    write(1, "\n", 1);
    ft_putnbr(INT_MAX);
    write(1, "\n", 1);
    ft_putnbr(0);
    write(1, "\n", 1);
    ft_putnbr(-1);
    write(1, "\n", 1);
    ft_putnbr(1);
}
