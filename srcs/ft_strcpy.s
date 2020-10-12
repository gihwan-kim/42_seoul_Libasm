                global  _ft_strcpy                  ; global : _ft_strcpy 를 링커에게 알려 외부에서도 호출되도록한다.
                                                    ; char *strcpy(char * restrict dst, const char * restrict src);
                                                    ; dst(= rdi), src(= rsi)

                section .text
_ft_strcpy  :   
                mov     rax, rdi                    ; rax(ret)  <- rdi(dst)
                mov     rdx, 0x0                    ; i = 0;


check       :
                cmp     BYTE[rsi + rdx], 0x0
                jne     change                      ; src[i] != 0
                je      end                         ; src[i] == 0

change      :
                mov     rcx, [rsi + rdx]            ; tmp = src[i]
                mov     [rdi + rdx], rcx            ; dst[i] = src[i]
                inc     rdx                         ; i++

end         :
                ret