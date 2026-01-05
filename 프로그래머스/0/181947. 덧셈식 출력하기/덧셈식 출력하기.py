a, b = map(int, input().strip().split(' '))

# 파이썬의 f-string(Formatted String Literals)은 문자열 안에 변수나 계산 결과를 아주 직관적이고 간결하게 삽입할 수 있게 해주는 기능
# 문자열 앞에 접두사 f 또는 F를 붙이고, 삽입하고 싶은 변수나 식을 중괄호 { } 안에 넣습니다.
print(f"{a} + {b} = {a + b}")