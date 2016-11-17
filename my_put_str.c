/*
** my_put.c for  in /home/desclas/printf
** 
** Made by mathias descoins
** Login   <desclas@epitech.net>
** 
** Started on  Wed Nov 16 17:52:16 2016 mathias descoins
** Last update Thu Nov 17 14:30:48 2016 mathias descoins
*/

#include "./include/my.h"

void my_putstr(char *str)
{
  int i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i += 1;
    }
}

void check_str(int i, int check, char *str)
{
  check = str[i];
  if (check > 15)
    {
      check -= 16;
      write(1, "01", 2);
      if (check > 9)
	{
	  check -= 10;
	  my_putchar(65 + check);
	}
      else
	my_putchar(48 + check);
    }
  else
    {
      write(1, "00", 2);
      if (check > 9)
	{
	  check -= 10;
	  my_putchar(65 + check);
	}
      else
	my_putchar(48 + check);
    }
}

void my_putstr2(char *str)
{
  int i;
  int check;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] < 32)
	{
	  my_putchar('\\');
	  check_str(i, check, str);
	}
      else if (str[i] == 127)
	my_putstr("07F");
      else
	my_putchar(str[i]);
      i += 1;
    }
}
