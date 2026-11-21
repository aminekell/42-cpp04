NAME = Animal

SRC = Animal.cpp Cat.cpp   main.cpp Dog.cpp  WrongCat.cpp WrongAnimal.cpp

HEDERS = Animal.hpp Cat.hpp Dog.hpp  WrongCat.hpp WrongAnimal.hpp

OBJ = $(SRC:.cpp=.o)

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98 

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp $(HEDERS)
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all
