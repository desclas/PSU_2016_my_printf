/*
** my.h for  in /home/desclas/printf/include
** 
** Made by mathias descoins
** Login   <desclas@epitech.net>
** 
** Started on  Wed Nov 16 18:02:55 2016 mathias descoins
** Last update Thu Nov 17 15:29:36 2016 mathias descoins
*/

#ifndef MY_H_
# define MY_H_

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

void my_wile(char *result, int i);
void my_put_adresse(char *str);
void check(char c, va_list list, char d);
void my_printf(char *str, ...);
void base2(unsigned int nb, char *result, int i);
void base8(unsigned int nb, char *result, int i);
void base16(unsigned int nb, char *result, int i);
void my_putbase(unsigned int nb, int base);
void my_putchar(char c);
int get_digit(int nb, int digit);
int my_put_nbr(const int nb);
int get_digit_unsigned(unsigned int nb, unsigned int digit);
int my_put_nbr_unsigned(const unsigned int nb);
void my_putstr(char *str);
void check_str(int i, int check, char *str);
void my_putstr2(char *str);
char    *my_revstr(char *str);
void except(char c);

#endif /* !MY_H_ */
