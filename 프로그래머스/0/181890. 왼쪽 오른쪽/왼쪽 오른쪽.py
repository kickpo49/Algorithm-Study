def solution(str_list):
    answer = []
    
    # "l"과 "r"의 인덱스를 각각 찾기 (-1은 존재하지 않음을 의미)
    l_index = -1
    r_index = -1
    
    for i, s in enumerate(str_list):
        if s == "l" and l_index == -1:  # 처음 등장하는 "l"의 인덱스 저장
            l_index = i
        if s == "r" and r_index == -1:  # 처음 등장하는 "r"의 인덱스 저장
            r_index = i
    
    # "l"도 "r"도 없는 경우 → 빈 리스트 반환
    if l_index == -1 and r_index == -1:
        return []
    
    # "r"은 없고 "l"만 있는 경우 → "l" 기준 왼쪽
    if r_index == -1:
        return str_list[:l_index]
    
    # "l"은 없고 "r"만 있는 경우 → "r" 기준 오른쪽
    if l_index == -1:
        return str_list[r_index + 1:]
    
    # 둘 다 있는 경우 → 먼저 나오는 쪽 기준으로 처리
    if l_index < r_index:
        # "l"이 먼저 등장 → "l" 기준 왼쪽 (l_index 미포함)
        answer = str_list[:l_index]
    else:
        # "r"이 먼저 등장 → "r" 기준 오른쪽 (r_index 미포함)
        answer = str_list[r_index + 1:]
    
    return answer