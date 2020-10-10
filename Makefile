NAME = libasm.a

NA = nasm
ASM_SRC = \
			ft_strlen.s
ASM_DIR = ./srcs
ASM_LIST = $(addprefix $(ASM_DIR)/, $(ASM_SRC))
NA_FLAG = -f macho64

# macro 치환 : 이미 지정한 매크로 ASM_SRC 에서 .s 를 .o 로 바꾸어 OBJS 로 지정
OJBS = $(ASM_LIST:%.s=%.o)

LIBASM_TEST = libasm_test


.o :
	$(NA) $(NA_FLAG) $(ASM_LIST)

$(NAME) : $(OBJS)
	cat $(ASM_LIST)
	ar rc $(NAME) $(OBJS)

$(LIBASM_TEST) :
	gcc -L./includes/

all : $(NAME)

fclean : clean all

clean : 
	rm -f ./srcs/*.o $(NAME)

re : fclean all