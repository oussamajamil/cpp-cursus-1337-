NAME = Animal
FLAG = c++  -Wall -Wextra -Werror

HEADER =Cat.hpp\
		Dog.hpp\
		Animal.hpp\
		Brain.hpp\


SRC =Cat.cpp\
	Dog.cpp\
	Animal.cpp\
	main.cpp\
	Brain.cpp

$(NAME):$(SRC) $(HEADER)
	$(FLAG) $(SRC) -o $(NAME)

all:$(NAME)

clean:
	rm -rf $(NAME)
fclean :clean

re: fclean all
