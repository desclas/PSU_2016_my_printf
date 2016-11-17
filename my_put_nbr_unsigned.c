/*
** my_put_nbr.c for CPool_Day03 in /home/lucas/workspace/pool/CPool_Day03
** 
** Made by fabre lucas
** Login   <lucas@epitech.net>
** 
** Started on  Wed Oct  5 14:08:56 2016 fabre lucas
** Last update Wed Nov 16 18:10:14 2016 mathias descoins
*/

#include "./include/my.h"

int get_digit_unsigned(unsigned int nb, unsigned int digit)
{
  unsigned int	i;

  i = 0;
  while (i < digit)
    {
      nb = (int)nb / 10;
      i = i + 1;
    }
  return (nb % 10);
}

int my_put_nbr_unsigned(const unsigned int nb)
{
  unsigned int	digit;
  unsigned int	rest;
  unsigned int	i;
  unsigned int	to_disp;
  
  to_disp = nb;
  if (nb < 0)
    {
      my_putchar('-');
      to_disp = to_disp - (2 * to_disp);
    }
  rest = to_disp;
  i = 0;
  while (rest >= 10)
    {
      rest /= 10;
      i = i + 1;
    }
  while (i >= 0)
    {
      digit = get_digit_unsigned(to_disp, i);
      my_putchar(digit + 48);
      i = i - 1;
    }
  return (0);
}
