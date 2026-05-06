def solution(bin1, bin2):
    # int(문자열, 2)를 사용하여 2진수 문자열을 10진수 정수로 변환
    num1 = int(bin1, 2)
    num2 = int(bin2, 2)
    
    total_sum = num1 + num2
    
    # bin() 함수를 사용하여 10진수 합계를 다시 2진수 문자열로 변환
    # 이때 결과는 '0b101'처럼 앞에 '0b'가 붙으므로, [2:] 슬라이싱으로 이를 제거
    answer = bin(total_sum)[2:]
    
    return answer