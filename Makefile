NAME = push_swap

CC	=	@gcc -fsanitize=address -g3

CFLAGS	=	-Wall -Wextra -Werror

LFLAGS	=  -lncurses -lft -L ./libft

HEADER	=	-I include

RM	=	@rm -rf

SRCS =	srcs/calculs_inter.c \
			srcs/ft_do.c \
			srcs/insertion_half.c \
			srcs/logictisl.c \
			srcs/choose_sort_stack.c \
			srcs/ft_do_second.c \
			srcs/instructions_second.c \
			srcs/push_swap.c \
			srcs/errors.c \
			srcs/ft_pretri.c \
			srcs/instructions_third.c \
			srcs/srcs.c \
			srcs/Instructions.c \
			srcs/first_coor.c \
			srcs/ft_sort_5_and_less.c \
			srcs/inter_inside.c \

OBJS	=	$(SRCS:.c=.o)

%.o:	%.c
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME) 

$(NAME):	$(OBJS)
		make -s -C ./libft
		gcc $(CFLAGS) $(HEADER) ./libft/libft.a -o $(NAME) $(SRCS) $(LFLAGS)
	
clean:
		$(RM) $(OBJS)
		@make clean -C libft

fclean:	clean
		$(RM) $(NAME)
		@make fclean -C libft

re: fclean all

.PHONY: all clean fclean re