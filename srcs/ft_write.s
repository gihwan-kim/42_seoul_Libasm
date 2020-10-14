                global _ft_write        
                                    ; ssize_t write(int fd, const void *buf, size_t count);
                                    ; O : 출력된 바이트 수
                                    ; X : -1, errno 설정

                section .text
                extern  _write
                                    ; rdi = fd
                                    ; rsi = buf
                                    ; rdx = count
_ft_write   :
                mov rax, 0x2000004  ; write
                syscall

