# Makefile

NAME = Tic-Tac-Toe

SRCS = morpion.c 

all :  $(NAME)

$(NAME): $(SRCS)
	gcc $(SRCS) -o $(NAME)

fclean: 
	rm -f $(NAME)

re: fclean all