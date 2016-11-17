/*
** my_revstr.c for  in /home/desclas
** 
** Made by mathias descoins
** Login   <desclas@epitech.net>
** 
** Started on  Tue Oct 25 08:59:01 2016 mathias descoins
** Last update Wed Nov 16 18:11:04 2016 mathias descoins
*/

#include "./include/my.h"

char    *my_revstr(char *str)
{
  char  stock;
  char  *str_ini;
  char  *str_return;

  str_return = str;
  str_ini = str;
  while (*str != '\0')
    str = str + 1;
  str = str - 1;
  while (str >= str_ini)
    {
      stock = *str_ini;
      *str_ini = *str;
      *str = stock;
      str_ini = str_ini + 1;
      str = str - 1;
    }
  return (str_return);
}
