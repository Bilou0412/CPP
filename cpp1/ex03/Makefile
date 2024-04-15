NAME   	=	Reference_et_Pointeur
SRC_DIR	=	cpp
OBJ_DIR	=	obj

SRC	=	main.cpp \
		cpp/HumanA.class.cpp
		cpp/HumanB.class.cpp
		cpp/Weapon.class.cpp

OBJ	=	$(patsubst $(SRC_DIR)/%.cpp,$(OBJ_DIR)/%.o,$(SRC))

RM	=	rm -rf
CXX	=	c++
FLAGS	=	-I./hpp -Wall -Wextra -Werror -std=c++98

$(NAME):	$(OBJ)
	$(CXX) $(FLAGS) $^ -o $@

$(OBJ_DIR)/%.o:	$(SRC_DIR)/%.cpp | $(OBJ_DIR)
	$(CXX) $(FLAGS) -c $< -o $@

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

all:	$(NAME)

clean:
	$(RM) $(OBJ_DIR)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re