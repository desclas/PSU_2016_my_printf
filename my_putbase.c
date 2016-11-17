/*
** my_putbase.c for  in /home/desclas/printf
** 
** Made by mathias descoins
** Login   <desclas@epitech.net>
** 
** Started on  Wed Nov 16 17:56:18 2016 mathias descoins
** Last update Thu Nov 17 15:19:14 2016 mathias descoins
*/

#include "./include/my.h"

void base2(unsigned int nb, char *result, int i)
{
  i = 0;
  while (nb != 0)
    {
      result[i] = nb % 2 + 48;
      nb /= 2;
      i += 1;
    }
}
void base8(unsigned int nb, char *result, int i)
{
  i = 0;
  while (nb != 0)
    {
      result[i] = nb % 8 + 48;
      nb /= 8;
      i += 1;
    }
}

void base16(unsigned int nb, char *result, int i)
{
  i = 0;
  while (nb > 0)
    {
      result[i] = nb % 16 + 48;
      if (result[i] > 57)
	result[i] += 39;
      nb /= 16;
      i += 1;
    }
}

void my_putbase(unsigned int nb, int base)
{
  char *result;
  int check;
  int i;

  i = 0;
  check = nb;
  while (check < base)
    {
      check /= base;
      i += 1;
    }
  result = malloc(sizeof(char) * i + 2);
  if (base == 16)
    base16(nb, result, i);
  if (base == 8)
    base8(nb, result, i);
  if (base == 2)
    base2(nb, result, i);
  my_revstr(result);
  my_putstr(result);
  free(result);
}
