# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jeshin <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/10 10:43:26 by jeshin            #+#    #+#              #
#    Updated: 2023/09/11 10:31:58 by jeshin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#아카이브
AR = ar 
ARFLAGS = rc

#컴파일
CC = gcc
CFLAGS = -Wall -Wextra -Werror

#헤더파일 경로
INCLUDE = -I ./includes

#생성할 라이브러리 파일
NAME = libft.a

#오브젝트파일과 소스파일 경로
OBJS_DIR = ./srcs
SRCS_DIR = ./srcs

#소스파일과 오브젝트파일
#notdir : not directory. wildcard : 함수로 해당조건에 맞는 것만 뽑음.
#:.c를 .o로 치환

SRCS = $(notdir $(wildcard $(SRCS_DIR)/ *.c))
OBJS = $(SRCS : .c = .o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(AR) $(ARFLAGS) $@ $(OBJS_DIR) $^

$(OBJS_DIR)/%.o : $(SRC_DIR)/%.cc
	$(CC) $(CFLAGS) -c $< -o $@ 

#$(OBJS) : $(SRCS)
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@  

########################################
clean : 
	rm -f $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.Phony : aall clean fclean re
########################################
$(warning ##########SRCS ERROR  $(SRCS))
$(warning ##########OBJS ERROR $(OBJS))
