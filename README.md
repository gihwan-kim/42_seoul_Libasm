# 42_seoul_Libasm
This project is about assembly language


# Introduction
```
An assembly (or assembler) language, often abbreviated asm, is a low-level programming
language for a computer, or other programmable device, in which there is a very strong
(but often not one-to-one) correspondence between the language and the architecture’s
machine code instructions. Each assembly language is specific to a particular computer
architecture. In contrast, most high-level programming languages are generally portable
across multiple architectures but require interpreting or compiling. Assembly language
may also be called symbolic machine code.


assembly (assembler, asm) 언어는 컴퓨터, 프로그램적인 기기의 low-level 프로그래밍언어이다.
각 어셈블리 언어는 특정 컴퓨터의 아키텍쳐에 따라 한정된다.
대부분의 high-level 언어들은 일반적으로 여러 플랫폼의 아키텍쳐에 적용되지만 인터프리팅이나 컴파일링의 작업이 따로 필요하다.
```

# Common Instructions
```
• Your functions should not quit unexpectedly (segmentation fault, bus error, double
free, etc) apart from undefined behaviors. If this happens, your project will be
considered non functional and you will receive a 0 during the evaluation.
  : 함수들의 경우 알수없는 에러로 인해 종료되면 안된다.

• Your Makefile must at least contain the rules $(NAME), all, clean, fclean and
re. And must recompile/relink only necessary files.
  : Makefile 은 $(NAME), all, clean, fclean, re 기능을 가져야하며
  : 필요한 파일들만 recomplie/relink 해야한다.

• To turn in bonuses to your project, you must include a rule bonus to your Makefile,
which will add all the various headers, librairies or functions that are forbidden on
the main part of the project. Bonuses must be in a different file _bonus.{c/h}.
Mandatory and bonus part evaluation is done separately.
  : 보너스가지 제출하려면 Makefile 에서 bonus 를 추가해주어야한다
  : bonus ㅁ여령어는 헤더, 라이브러리, 함수들을 추가한다. _bonus 라고 파일명에 붙여줄 것
  : Mandatory, bonus 는 분리해서 평가할 것
  
• We encourage you to create test programs for your project even though this work
won’t have to be submitted and won’t be graded. It will give you a chance
to easily test your work and your peers’ work. You will find those tests especially
useful during your defence. Indeed, during defence, you are free to use your tests
and/or the tests of the peer you are evaluating.
  : 테스트 프로그램을 생성해서 평가해보기

• Submit your work to your assigned git repository. Only the work in the git repository will be graded. If Deepthought is assigned to grade your work, it will be done
after your peer-evaluations. If an error happens in any section of your work during
Deepthought’s grading, the evaluation will stop.
  : 할당된 깃 저장소에 제출
  : 깃 저장소의 내용들만 평가받는다.

• You must write 64 bits ASM. Beware of the "calling convention"
  : 64 비트 ASM 을 작성?
  : "calling convention" 에 주의
  
• You can’t do inline ASM, you must do ’.s’ files.
  : 인라인 어셈블리를 사용하면 안됨.
  : .s 파일을 사용
  
• You must compile your assembly code with nasm.
  : nasm 과 함께 어셈블리코드를 컴파일할 것
  
• You must use the Intel syntax, not the AT&T.
  : 인텔 문법을 사용하고 AT&T 는 사용하지말것
  
```


# Mandatory part
```
• The library must be called libasm.a.
• You must submit a main that will test your functions and that will compile with
your library to show that it’s functional.
• You must rewrite the following functions in asm:
◦ ft_strlen (man 3 strlen)
◦ ft_strcpy (man 3 strcpy)
◦ ft_strcmp (man 3 strcmp)
◦ ft_write (man 2 write)
◦ ft_read (man 2 read)
◦ ft_strdup (man 3 strdup, you can call to malloc)
• You must check for errors during syscalls and properly set them when needed
• Your code must set the variable errno properly.
• For that, you are allowed to call the extern ___error.
```
