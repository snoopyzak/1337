#variables

SRCS 		= 		ft_putnbr.c \
	   				ft_atoi.c   \
	  		 		main.c
RM 	 		= rm -f
CC			= cc
CFLAGS		= -Wall -Wextra -Werror
NAME		= do_op

#rules

all: $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:
	$(RM) $(NAME)

fclean: clean

re: fclean all
