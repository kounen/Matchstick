##
## EPITECH PROJECT, 2020
## CPE_matchstick_2019
## File description:
## Makefile
##

NAME	=	matchstick

CC		=	gcc

RM		=	rm -f

SRCS	=	./

OBJS	=	$(SRCS:.c=.o)

CFLAGS	=	-I ./include/
CFLAGS	+=	-Wall -Wextra -g3

LDFLAGS =	-L ./lib/my/ -lmy

all		:	$(NAME)

$(NAME)	:	$(OBJS)
			make -C ./lib/my/
			$(CC) $(OBJS) -o $(NAME) $(CFLAGS) $(LDFLAGS)

clean	:
			$(RM) $(OBJS)
			make clean -C ./lib/my/

fclean	:	clean
			$(RM) $(NAME)
			make fclean -C ./lib/my/

re		:	fclean all

.PHONY	:	all clean fclean re
