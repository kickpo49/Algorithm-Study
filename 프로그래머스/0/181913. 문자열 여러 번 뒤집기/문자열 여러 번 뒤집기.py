def solution(my_string, queries):
    chars = list(my_string)
    
    for s, e in queries:
        # Python 슬라이싱에서 끝 인덱스는 포함되지 않음 > e + 1을 사용
        # [::-1]은 해당 구간을 역순으로 뒤집음
        chars[s:e + 1] = chars[s:e + 1][::-1]
        
    return ''.join(chars)