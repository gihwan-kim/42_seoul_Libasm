                global _ft_write        
                                        ; ssize_t write(int fd, const void *buf, size_t count);
                                        ; O : 출력된 바이트 수
                                        ; X : -1, errno 설정

                section .text
                extern  ___error
                                        ; rdi = fd
                                        ; rsi = buf
                                        ; rdx = count
_ft_write   :
                mov     rax, 0x2000004  ; write
                                        ; write 는 unix 클래스 시스템콜이기 때문에
                                        ; 유닉스 시스템 번호 2000000 에 wirte 콜번호를 추가키기 
                syscall                 ; 설정한 system call 을 실행
                jc      error           ; syscall 결과가 error 일 경우 
                ret

error    :
                push    rax             ; syscall return  값 백업
                mov     rdi, rax
                call    ___error        ; ___error 호출
                pop     rdi             ;
                mov     [rax], rdi      ;
                mov     rax, -1         ;
                ret
