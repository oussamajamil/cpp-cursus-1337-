NAME = Convert
FLAG = c++  -Wall -Wextra -Werror -std=c++98
HEADER =header.hpp

SRC = content.cpp\
	main.cpp

$(NAME):$(SRC) $(HEADER)
	$(FLAG) $(SRC) -o $(NAME)

all:$(NAME)

clean:
	rm -rf $(NAME)
fclean :clean

re: fclean all

