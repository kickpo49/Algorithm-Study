def solution(sides):
    a = min(sides)
    b = max(sides)
    
    answer = 0
    # Case 1: 기존에 주어진 두 변 중 큰 값(b)이 가장 긴 변인 경우
    # b < a + x 조건을 만족하는 x 범위: (b - a) < x <= b
    # 정수 x의 개수는 b - (b - a) = a개
    count1 = a
    # Case 2: 새로 정할 변(x)이 가장 긴 변인 경우
    # x < a + b 조건을 만족하는 x 범위: b < x < (a + b)
    # 정수 x의 개수는 (a + b) - b - 1 = a - 1개
    count2 = a - 1
    
    answer = count1 + count2
    return answer