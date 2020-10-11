                global _ft_strcmp.s
                                            ; int strcmp(const char *s1, const char *s2);
                                            ; s1 - s2
                                            ; s1 > s2 : +
                                            ; s1 < s2 : -
                                            ; s1 = s2 : 0
                                            ; rdi(= s1) rsi(= s2)
                section .text

_ft_strcmp  :
                cmp     s1, s2              ;
                