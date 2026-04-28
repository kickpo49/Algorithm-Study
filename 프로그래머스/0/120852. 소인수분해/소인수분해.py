def solution(n):
    answer = []
    div = 2
    
    while div <= n:
        if n % div == 0:
            if div not in answer:
                answer.append(div)
            
            n //= div
        else:
            div += 1
    
    return answer