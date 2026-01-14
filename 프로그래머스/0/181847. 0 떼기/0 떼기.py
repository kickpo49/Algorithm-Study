# 문자열을 **숫자형(Integer)**으로 변환했다가 다시 문자열로 변환
# def solution(n_str):
#     answer = str(int(n_str))
#     return answer

# 반복문과 슬라이싱 활용
def solution(n_str):
    # '0'이 아닌 숫자가 처음으로 나오는 위치(인덱스)를 찾습니다.
    for i in range(len(n_str)):
        if n_str[i] != '0':
            # 해당 위치부터 끝까지 슬라이싱해서 반환합니다.
            return n_str[i:]
            
    # 만약 모든 문자가 '0'이었다면 문제 조건에 따라 처리 (예: "0")
    return "0"

# 내장 함수 (lstrip) 활용
# def solution(n_str):
#     # 왼쪽(left)에서 '0'들을 모두 제거(strip)합니다.
#     answer = n_str.lstrip('0')
    
#     return answer