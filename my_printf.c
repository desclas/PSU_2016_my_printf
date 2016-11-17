/*
** my_printf.c for  in /home/desclas
** 
** Made by mathias descoins
** Login   <desclas@epitech.net>
** 
** Started on  Tue Nov 15 14:32:28 2016 mathias descoins
** Last update Thu Nov 17 16:08:53 2016 mathias descoins
*/

#include "./include/my.h"

void my_wile(char *result, int i)
{
  while (result[i] == 103)
    {
      result[i] == 48;
      i += 1;
      if (result[i] < 48)
	result[i] = 48;
      result[i] += 1;
      if (result[i] == 58)
	result[i] == 97;
    }
}

void my_put_adresse(char *str)
{
  int i;

  i = str;
  write(1, "0x", 2);
  my_putbase(i, 16);
}

void except(char c)
{
  my_putchar('%');
  my_putchar(c);
}

void check(char c, va_list list, char d)
{
  if (c == 'S')
    my_putstr2(va_arg(list, char*));
  if (c == 'b')
    my_putbase(va_arg(list, unsigned int), 2);
  if (c == 'c')
    my_putchar(va_arg(list, int));
  if (c == 'd' || c == 'i')
    my_put_nbr(va_arg(list, int));
  if (c == 'u')
    my_put_nbr_unsigned(va_arg(list, unsigned int));
  if (c == 'o')
    my_putbase(va_arg(list, unsigned int), 8);
  if (c == 'x' || c == 'X')
    my_putbase(va_arg(list, unsigned int), 16);
  if (c == 'p')
    my_put_adresse(va_arg(list, char*));
  if (c == 's')
    my_putstr(va_arg(list, char*));
  if (c == 'h' && d == 'd')
    my_put_nbr(va_arg(list, int));
  if (c != 'S' && c != 'b' && c != 'c' && c != 'd' && c != 'i' && c != 'X' &&
      c != 'u' && c != 'o' && c != 'x' && c != 'p' && c != 's' && c != 'h')
    except(c);
}

void my_printf(char *str, ...)
{
  int i;
  va_list list;

  i = 0;
  va_start(list, str);
  while (str[i] != '\0')
    {
      if (str[i] == 37)
	{
	  i += 1;
	  check(str[i], list, str[i + 1]);
	  if (str[i] == 'h' && str[i + 1] == 'd')
	    i += 1;
	}
      else
	my_putchar(str[i]);
      i += 1;
    }
}
