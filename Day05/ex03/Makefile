NAME = Form
FLAG = c++  -Wall -Wextra -Werror
HEADER =Bureaucrat.hpp\
		Form.hpp\
		PresidentialPardonForm.hpp\
		RobotomyRequestForm.hpp\
		ShrubberyCreationForm.hpp\
		Intern.hpp




SRC = Bureaucrat.cpp\
	Form.cpp\
	main.cpp\
	PresidentialPardonForm.cpp\
	RobotomyRequestForm.cpp\
	ShrubberyCreationForm.cpp\
	Intern.cpp

$(NAME):$(SRC) $(HEADER)
	$(FLAG) $(SRC) -o $(NAME)

all:$(NAME)

clean:
	rm -rf $(NAME)
fclean :clean

re: fclean all
