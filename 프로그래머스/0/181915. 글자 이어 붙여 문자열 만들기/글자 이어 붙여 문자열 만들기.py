# def solution(my_string, index_list):
#     answer = ''
#     for i in index_list:
#         answer += my_string[i]
#     return answer

def solution(my_string, index_list):
    return ''.join(my_string[i] for i in index_list)

# JavaScript
# function solution(my_string, index_list) {
#     let answer = '';
#     for (let i of index_list) {
#         answer += my_string[i];
#     }
#     return answer;
# }

# function solution(my_string, index_list) {
#     return index_list.map(i => my_string[i]).join('');
# }

# Java
# class Solution {
#     public String solution(String my_string, int[] index_list) {
#         String answer = "";
#         for (int i : index_list) {
#             answer += my_string.charAt(i);
#         }
#         return answer;
#     }
# }