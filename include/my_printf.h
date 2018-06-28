/*
** my.h for my in /home/benjamin.g/delivery/PSU_2016_my_printf/include
**
** Made by Benjamin GAYMAY
** Login   <benjamin.g@epitech.net>
**
** Started on  Mon Nov 14 09:36:02 2016 Benjamin GAYMAY
** Last update Mon Mar 20 15:58:15 2017 Benjamin GAYMAY
*/

#ifndef MY_PRINTF_H_
# define MY_PRINTF_H_

#include <stdarg.h>

/*
** my_printf.c
*/
int	my_printf(char *s, ...);
int	my_type(char *type_list, char *s, int i, va_list ap);
int	my_flag(char *flag_list, char *s, int i, va_list ap);

/*
** hexa.c
*/
void	my_hexa(int num, int lower_or_upper);
int	my_hexa_arg_upper(va_list ap);
int	my_hexa_arg_lower(va_list ap);
void	my_hexa_pointer(long int num);
int	my_hexa_pointer_arg(va_list ap);

/*
** octal_bin.c
*/
int	my_oct_arg(va_list ap);
int	my_bin_arg(va_list ap);
void	my_oct(int num);

/*
** my_putchar.c
*/
void	my_putchar_printf(char c);
int	my_putchar_arg(va_list ap);
int	my_aff_modulo_arg(va_list ap);
int	my_aff_atsign_arg(va_list ap);

/*
** my_put_nbr.c
*/
int	my_put_nbr_arg(va_list ap);
int	my_put_nbr_base(int num, int base, int lower_or_upper);

/*
** my_put_nbr_unsigned.c
*/
void	my_put_unsigned_int(unsigned int n);
int	my_put_unsigned_int_arg(va_list ap);
void	my_put_nbr_base_unsigned(unsigned int n, unsigned int base, int l_o_u);

/*
** my_putstr.c
*/
int	my_putstr_printf(char *str);
char	*my_revstr_printf(char *str);
int	my_putstr_arg(va_list ap);
void	my_putstr_oct(char *str);
int	my_putstr_oct_arg(va_list ap);

/*
** my_strlen.c
*/
int	my_intlen(int nb);

/*
** flag.c
*/
int	my_hash(va_list ap, char *s, int i);
int	my_plus(va_list ap, char *s, int i);
int	my_space(va_list ap, char *s, int i);

#endif /* !MY_PRINTF_H_ */
