NAME = Bureaucrat
FLAG = c++  -Wall -Wextra -Werror
HEADER =Bureaucrat.hpp

SRC = Bureaucrat.cpp\
	main.cpp

$(NAME):$(SRC) $(HEADER)
	$(FLAG) $(SRC) -o $(NAME)

all:$(NAME)

clean:
	rm -rf $(NAME)
fclean :clean

re: fclean all
