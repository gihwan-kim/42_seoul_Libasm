                global _ft_strdup
                                        ; char *strdup(const char *str);
                                        ; str 복제후 해당 포인터 리턴
                section .text
                extern  _malloc
                extern  _ft_strcpy
                extern  _ft_strlen
                extern ___error

_ft_strdup  :
                cmp     rdi, 0x0        ; str check
                je      error
                call    _ft_strlen      ; call, rax = ft_strlen(rdi)
                inc     rax
                push    rdi             ; save str
                mov     rdi, rax        ; rdi = str size
                call    _malloc         ; allocate memory
                cmp     rax, 0x0        ; check malloc
                je      malloc_err
                mov     rsi, rax        ; rdi(=new str)
                pop     rdi             ; rsi(= str)
                call    _ft_strcpy      ; ft_strcpy(rdi, rsi)
                ret

error       :
                mov     rax, 0x0
                ret

malloc_err  :
                call    ___error
                mov     BYTE[rax], 12      ; ENOMEM - 12, Cannot allocate memory
                ret
