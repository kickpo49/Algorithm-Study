def solution(str_list, ex):
    answer = ''
    for s in str_list:
        # 1. 만약 ex가 s에 포함되어 있지 않다면
        if ex not in s:
            # 2. answer 뒤에 해당 문자열을 이어 붙입니다.
            answer += s
    return answer