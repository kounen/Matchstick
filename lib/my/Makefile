##
## EPITECH PROJECT, 2020
## MY_LIBRARY
## File description:
## Makefile
##

NAME	=	libmy.a

CC		=	gcc

RM		=	rm -rf

SRCS	=	./binary_nbr.c \
	  		./hexa_nbr.c \
	  		./integer_nbr.c \
	  		./my_atoi.c \
	  		./my_printf.c \
	  		./my_put_nbr.c \
	  		./my_putchar.c \
	  		./my_putstr.c \
	  		./my_revstr.c \
	  		./my_strlen.c \
	  		./octal_nbr.c \
	  		./print_pointer.c \
			./my_strlim.c \
			./my_itoa.c \
	  		./s_str.c \
			./my_strcmp.c \
			./my_strcat.c \
			./my_strdup.c \
			./my_print_error.c \
			./my_str_isnum.c \
			./get_next_line.c \
	  		./switch_letter.c \
			./my_strcpy.c \
			./my_show_word_array.c \
	  		./unit_size.c

OBJS	= 	$(SRCS:.c=.o)

HEADER	= 	my.h

CFLAGS = 	-I ./include/
CFLAGS += 	-Wall -Wextra

all		: 	$(NAME)

$(NAME)	:	$(OBJS)
	 		ar rc $(NAME) $(OBJS)
			ranlib $(NAME)
			cp my.h ../../include/
			cp $(NAME) ../

clean	:
			$(RM) $(OBJS)

fclean	:	clean
			$(RM) $(NAME)
			$(RM) ../$(NAME)

re		:	fclean all

.PHONY	:	all clean fclean re
