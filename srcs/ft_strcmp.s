                global _ft_strcmp
                                                    ; int strcmp(const char *s1, const char *s2);
                                                    ; s1 - s2
                                                    ; s1 > s2 : +
                                                    ; s1 < s2 : -
                                                    ; s1 = s2 : 0
                                                    ; rdi(= s1) rsi(= s2)
                                                    ; rdi, rsi, rdx, rcx, r8, r9
                section .text

_ft_strcmp  :
                mov     rdx, 0x0                    ; i = 0

while_loop  :
                mov     rcx, [rsi + rdx]
                cmp     [rdi + rdx], rcx    ; s1[i] - s2[i]
                jl      s1_is_bigger        ; if s1[i] > s2[i] 
                jg      s1_is_lower         ; if s1[i] < s2[i] 
                je      s1_s2_same          ; if s1[i] = s2[i] 

s1_is_bigger:   
                mov     rax, 0x1                    ; return 1
                ret

s1_is_lower :   
                mov     rax, 0xFFFFFFFF             ; return -1
                ret

s1_s2_same  :
				inc     rdx                         ; i++
                cmp     BYTE [rdi + rdx], 0x0       ; s1[i] == 0 ?
                je      loop_end
                cmp     BYTE [rsi + rdx], 0x0            ; s2[i] == 0 ?
                je      loop_end
                jne     while_loop

loop_end    :
                mov     rax, 0x0                    ; return 0
                ret
