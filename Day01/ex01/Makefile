NAME = Zombie

FLAGE = g++ -Wall -Wextra -Werror
HEADER = Zombie.hpp
SRC = main.cpp
SRC += zombieHorde.cpp
SRC += Zombie.cpp



all: $(NAME)

$(NAME):$(HEADER) $(SRC)
		$(FLAGE) $(SRC) -o $(NAME)



clean:
	rm -rf $(NAME)

fclean :clean

re:	clean all
