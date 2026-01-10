# def solution(myString, pat):

#     # A와 B를 서로 교환 (임시 문자 사용)
#     myString = myString.replace("A", "C")
#     myString = myString.replace("B", "A")
#     myString = myString.replace("C", "B")
#     # 변환된 문자열에 pat이 포함되어 있는지 확인
#     if pat in myString:
#         return 1
#     else:
#         return 0
    
def solution(myString, pat):
    return int(pat in myString.translate(str.maketrans("AB", "BA")))