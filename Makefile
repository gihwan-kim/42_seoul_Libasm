NAME = libasm.a

# NASM = nasm
AS = nasm
ASM_SRC = \
			ft_strlen.s \
			ft_strcpy.s \
			ft_strcmp.s \
			ft_strdup.s \
			ft_write.s
ASM_DIR = ./srcs/
ASM_LIST = $(addprefix $(ASM_DIR), $(ASM_SRC))
# NA_FLAG = -f macho64
ASFLAGS = -fmacho64

# macro 치환 : 이미 지정한 매크로 ASM_SRC 에서 .s 를 .o 로 바꾸어 OBJS 로 지정
OBJS_LIST = $(ASM_LIST:%.s=%.o)

LIBASM_TEST = test
LIB = -lasm -L./
INC = -I ./includes

.SUFFIXES : .s .o

## libasm.a 생성
# .s -> .o -> libasm.a
$(NAME) : $(OBJS_LIST)
	ar rc $(NAME) $(OBJS_LIST)

## test 파일 생성
# gcc -o : output file 이름 결정
$(LIBASM_TEST) : ./srcs/main.c
	gcc $(LIB) ./srcs/main.c $(INC) -o $(LIBASM_TEST)

all : $(NAME)

fclean : clean all

clean : 
	rm -f ./srcs/*.o $(NAME) a.out $(LIBASM_TEST) 

re : fclean all