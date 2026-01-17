
NAME = fixed

CXXFLAGS = -Wall -Wextra -Werror -std=c++98
COM = c++
SRC = main.cpp Fixed.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

%.o: %.cpp Fixed.hpp
	$(COM) $(CXXFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(COM) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean