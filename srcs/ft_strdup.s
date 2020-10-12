                global _ft_strdup
                                        ; char *strdup(const char *str);
                                        ; str 복제후 해당 포인터 리턴
                section     .txt
                extern      _mallc
                extern      _ft_strcpy
                extern      _ft_strlen

_ft_strdup  :
                push        rdi         ; rdi = str
                call        _ft_strlen  ; call

1. 다른 함수에 argument 를 전달하는 방법은?
2. 함수를 호출하고 나서 다시 어떻게 돌아오지?
3. 호출한 함수의 리턴값은 어떻게 받아오지?
4. 레지스터와 메모리의 저장방식의 차이점은?