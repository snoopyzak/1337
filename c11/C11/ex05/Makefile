#variables

SRCS 		= 	ft_putnbr.c		\
	   			ft_atoi.c		\
				ft_div_zero.c	\
				ft_mod_zero.c	\
				ft_operation.c	\
	  		 	main.c
RM 	 		= rm -f
CC			= cc
CFLAGS		= -Wall -Wextra -Werror
NAME		= do-op

#rules

all: $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:
	$(RM) $(NAME)

fclean: clean

re: fclean all
