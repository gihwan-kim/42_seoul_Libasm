                global _ft_strlen

                section .text                ; code 
_ft_strlen  :   
                mov     rax, 0x0                ; i = 0

compare     :   
                cmp     BYTE[rdi + rax], 0x0  ; rdi == str argument
                jne     ok                   ; if str[i] != 0
                je      end                  ; if str[i] == 0x0, calcuating str length is fnished

end         :   
                ret

ok          :   
                inc     rax                  ; i++
                jmp     compare              ; back to the compare