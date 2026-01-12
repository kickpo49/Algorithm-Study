# def solution(arr, delete_list):
#     answer = []
#     for num in arr:
#         if num not in delete_list:
#             anwser = answer.append(num)
#     return answer

def solution(arr, delete_list):
    # arr에 있는 num들 중에서 delete_list에 없는 것만 모은 리스트
    return [num for num in arr if num not in delete_list]

# JavaScript
# function solution(arr, delete_list) {
#     // arr의 요소(num) 중 delete_list에 포함되지 않은 것만 필터링
#     return arr.filter(num => !delete_list.includes(num));
# }