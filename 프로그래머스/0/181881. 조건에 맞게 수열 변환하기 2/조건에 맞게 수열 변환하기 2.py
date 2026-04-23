def solution(arr):
    answer = 0
    for num in arr:
        count = 0   # 현재 원소가 안정 될 때까지 몇 번 변하는지 저장
        
        while (num >= 50 and num % 2 == 0) or (num < 50 and num % 2 == 1):
            if num >= 50 and num % 2 == 0:
                num //= 2  # // 몫만 구하는 연산자
            else:
                num = num * 2 + 1
                
            count += 1
        
        if count > answer:
            answer = count
    return answer