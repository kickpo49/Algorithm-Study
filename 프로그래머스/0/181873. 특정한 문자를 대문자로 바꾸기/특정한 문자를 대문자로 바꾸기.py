# def solution(my_string, alp):
#     answer = ''
#     for char in my_string:
#         if char == alp:
#             answer += char.upper()
#         else:
#             answer += char
#     return answer

def solution(my_string, alp):
    return my_string.replace(alp, alp.upper())

# JavaScript
# function solution(my_string, alp) {
#     let answer = '';
    
#     // 문자열의 각 문자(char)를 하나씩 순회
#     for (let char of my_string) {
#         if (char === alp) {
#             answer += char.toUpperCase(); // 대문자로 변환
#         } else {
#             answer += char;
#         }
#     }
    
#     return answer;
# }

# function solution(my_string, alp) {
#     // alp에 해당하는 모든 문자를 alp를 대문자로 바꾼 값으로 교체
#     return my_string.replaceAll(alp, alp.toUpperCase());
# }