##
## Makefile for  in /home/desclas/printf
## 
## Made by mathias descoins
## Login   <desclas@epitech.net>
## 
## Started on  Thu Nov 17 15:14:30 2016 mathias descoins
## Last update Thu Nov 17 15:23:59 2016 mathias descoins
##

SRC     =       my_printf.c		\
		my_putbase.c		\
		my_put_nbr.c		\
		my_put_nbr_unsigned.c	\
		my_put_str.c		\
		my_revstr.c

OBJ     =       $(SRC:.c=.o)

NAME    =       libmy.a

all: $(NAME)

$(NAME):        $(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:     fclean all

