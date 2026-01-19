#include <stddef.h>

int ft_atoi(const char *str)
{
    int x;
    int y;

    x = 1;
    y = 0;
	while (*str == '\t' || *str == '\n' || *str == '\v'
		|| *str == '\f' || *str == '\r' || *str == ' ')
        str++;
    if (*str == '-')
    {
        x = x * -1;
        str++;
    }
    else if (*str == '+')
        str++;

	while (*str >= '0' && *str <= '9')
	{
		y = (y * 10);
		y = y + (*str - '0');
		str++;
	}

    return (y * x);
}
