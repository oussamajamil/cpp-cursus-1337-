NAME = "exuc"


FLAGE = g++ -Wall -Wextra -Werror
SRC = main.cpp




all: $(NAME)

$(NAME):$(HEADER) $(SRC)
		$(FLAGE) $(SRC) -o $(NAME)



clean:
	rm -rf $(NAME)

fclean :clean

re:	clean all

