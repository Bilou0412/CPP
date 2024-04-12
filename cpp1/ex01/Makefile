NAME   	=	PhoneBook
SRC_DIR	=	cpp
OBJ_DIR	=	obj

SRC	=	cpp/Zombie.class.cpp \
        cpp/randomChump.cpp \
		cpp/newZombie.cpp \
		cpp/ZombieHorde.cpp \ 
		main.cpp \

OBJ	=	$(patsubst $(SRC_DIR)/%.cpp,$(OBJ_DIR)/%.o,$(SRC))

RM	=	rm -rf
CC	=	g++
FLAGS	=	-I./hpp -Wall -Wextra -Werror -std=c++98

$(NAME):	$(OBJ)
	$(CC) $(FLAGS) $^ -o $@

$(OBJ_DIR)/%.o:	$(SRC_DIR)/%.cpp | $(OBJ_DIR)
	$(CC) $(FLAGS) -c $< -o $@

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

all:	$(NAME)

clean:
	$(RM) $(OBJ_DIR)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re