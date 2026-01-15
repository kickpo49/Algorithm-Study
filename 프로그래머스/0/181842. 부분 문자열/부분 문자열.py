# Python3
def solution(str1, str2):
    if str1 in str2:
        return 1 
    else:
        return 0

# JavaScript
# function solution(str1, str2) {
#     // str2가 str1을 포함하고 있는지 확인
#     // 포함하면 true -> 1, 포함하지 않으면 false -> 0 반환
#     return str2.includes(str1) ? 1 : 0;
# }