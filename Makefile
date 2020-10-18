NAME = libasm.a

# NASM = nasm
AS = nasm
ASM_SRC = \
			ft_strlen.s \
			ft_strcpy.s \
			ft_strcmp.s \
			ft_strdup.s \
			ft_write.s \
			ft_read.s
ASM_DIR = ./srcs/
ASM_LIST = $(addprefix $(ASM_DIR), $(ASM_SRC))
# NA_FLAG = -f macho64
ASFLAGS = -fmacho64

# macro 치환 : 이미 지정한 매크로 ASM_SRC 에서 .s 를 .o 로 바꾸어 OBJS 로 지정
OBJS_LIST = $(ASM_LIST:%.s=%.o)

LIBASM_TEST = test
LIB = -lasm -L./result
INC = -I ./includes

# 파일의 확장자를 보고 적절한 규칙을 수행하도록 설정
.SUFFIXES : .s .o

## libasm.a 생성
# .s -> .o -> libasm.a
$(NAME) : $(OBJS_LIST)
	ar rc $(NAME) $(OBJS_LIST)
	mv $(NAME) ./result
	mv ./srcs/*.o ./obj

## test 파일 생성
# gcc -o : output file 이름 결정
$(LIBASM_TEST) : ./srcs/main.c
	gcc $(LIB) ./srcs/main.c $(INC) -o $(LIBASM_TEST)
	mv $(LIBASM_TEST) ./result

all : $(NAME)

fclean : clean all

clean : 
	rm -f ./obj/*.o ./result/$(NAME) a.out ./result/$(LIBASM_TEST) 

re : fclean all

testStart :
	./result/test