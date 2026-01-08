# Python3
# def solution(myString):
#     answer = ''
#     for char in myString:
#         if char < 'l':
#             answer += 'l'
#         else:
#             answer += char
#     return answer

def solution(myString):
    for char in myString:
        if char < 'l':
            myString = myString.replace(char, 'l')
    return myString

# JavaScript
# function solution(myString) {
#     // [a-k]는 a부터 k까지의 모든 문자를 의미합니다.
#     return myString.replace(/[a-k]/g, 'l');
# }