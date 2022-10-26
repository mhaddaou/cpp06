# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhaddaou < mhaddaou@student.1337.ma>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/25 15:06:14 by mhaddaou          #+#    #+#              #
#    Updated: 2022/10/25 23:46:59 by mhaddaou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = cast
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = src/main.cpp src/Conversion.cpp
CC = c++
HEADER = include/Conversion.hpp
RM = rm -rf


%.o: %.cpp
	$(CC) $(FLAGS) -c -o $@ $<

OBJ = $(SRC:%.cpp=%.o)

all: ${NAME}

${NAME} : ${OBJ} ${HEADER}
	${CC} ${FLAGS} ${OBJ} -o ${NAME}  

clean:
	${RM} ${OBJ}
	
fclean: clean
	${RM} ${NAME}

re : fclean all