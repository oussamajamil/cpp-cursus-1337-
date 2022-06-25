NAME = ClapTrap

FLAG = c++  -Wall -Wextra -Werror
HEADER = ClapTrap.hpp\
		ScavTrap.hpp\
		FragTrap.hpp

SRC = ClapTrap.cpp \
	main.cpp\
	ScavTrap.cpp\
	FragTrap.cpp

$(NAME):$(SRC) $(HEADER)
	$(FLAG) $(SRC) -o $(NAME)

all:$(NAME)

clean:
	rm -rf $(NAME)
fclean :clean

re: fclean all
