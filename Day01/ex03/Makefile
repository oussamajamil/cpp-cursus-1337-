NAME = weapon

FLAGE = g++ -Wall -Wextra -Werror

HEADERS = HumanA.hpp
HEADERS += HumanB.hpp
HEADERS += Weapon.hpp

SRC = HumanA.cpp
SRC += HumanB.cpp
SRC += Weapon.cpp


all: $(NAME)

$(NAME):$(HEADERS) $(SRC)
		$(FLAGE) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)
fclean: clean
re: fclean all
