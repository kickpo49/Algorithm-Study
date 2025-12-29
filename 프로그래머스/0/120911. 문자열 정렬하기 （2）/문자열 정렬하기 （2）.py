# Python3
def solution(my_string):
    answer = ''
    answer = "".join(sorted(my_string.lower()))
    return answer

# JavaScript
# function solution(my_string) {
#     return my_string
#         .toLowerCase()    // 소문자로 변환
#         .split('')        // 한 글자씩 나누어 배열 생성
#         .sort()           // 알파벳 순 정렬
#         .join('');        // 배열을 다시 문자열로 결합
# }