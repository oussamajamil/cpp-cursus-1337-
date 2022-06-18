NAME = FIXED
HEADER = Fixed.hpp
SRC = Fixed.cpp
SRC += main.cpp
FLAGE = c++ -Wall -Wextra -Werror

$(NAME) : $(SRC) $(HEADER)
		$(FLAGE) $(SRC) -o $(NAME)


all: $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re :fclean all
