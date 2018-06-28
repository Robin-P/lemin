/*
** my_put_nbr_unsigned.c for my_put_nbr_unsigned in /home/benjamin.g/delivery/PSU_2016_my_printf
** 
** Made by Benjamin GAYMAY
** Login   <benjamin.g@epitech.net>
** 
** Started on  Fri Nov 18 14:24:40 2016 Benjamin GAYMAY
** Last update Mon Mar 20 16:00:54 2017 Benjamin GAYMAY
*/

#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include "my_printf.h"

int	my_put_unsigned_int_arg(va_list ap)
{
  my_put_unsigned_int(va_arg(ap, unsigned int));
  return (0);
}

void	my_put_unsigned_int(unsigned int n)
{
  if (n < 10)
    my_putchar_printf(n + '0');
  if (n > 9)
    {
      my_put_unsigned_int(n / 10);
      my_put_unsigned_int(n % 10);
    }
}

void	my_put_nbr_base_unsigned(unsigned int n, unsigned int base, int l_o_u)
{
  if (n < base)
    {
      if (base > 10)
	{
	  if (n > 9)
	    my_putchar_printf(n + l_o_u);
	  else
	    my_putchar_printf(n + '0');
	}
      else
	my_putchar_printf(n + '0');
    }
  if (n > base - 1)
    {
      my_put_nbr_base(n / base, base, l_o_u);
      my_put_nbr_base(n % base, base, l_o_u);
    }
}
