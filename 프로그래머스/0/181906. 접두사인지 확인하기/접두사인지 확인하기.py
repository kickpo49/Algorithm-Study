# Python3 startswith() 메서드
# def solution(my_string, is_prefix):
#     if my_string.startswith(is_prefix):
#         return 1
#     else:
#         return 0
    
def solution(my_string, is_prefix):
    # is_prefix의 길이만큼 my_string의 앞부분을 잘라서 비교
    if my_string[:len(is_prefix)] == is_prefix:
        return 1
    else:
        return 0
    
# JavaScript
# function solution(my_string, is_prefix) {
#     // is_prefix의 길이만큼 my_string의 앞부분을 잘라서 비교
#     if (my_string.slice(0, is_prefix.length) === is_prefix) {
#         return 1;
#     } else {
#         return 0;
#     }
# }