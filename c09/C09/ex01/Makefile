SRCS	= ./srcs/ft_putchar.c \
	  	  ./srcs/ft_swap.c    \
	      ./srcs/ft_putstr.c  \
	  	  ./srcs/ft_strlen.c  \
	  	  ./srcs/ft_strcmp.c
OBJS 	= $(SRCS:.c=.o)
HEAD 	= ./includes/
NAME 	= libft.a
AR 		= ar -rcs
RM 		= rm -f
CC 		= cc
CFLAGS  = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS) 
	$(AR) $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c -I $(HEAD) $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
