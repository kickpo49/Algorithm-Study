# Python3
def solution(n):
    answer = []
    
    while n != 1:
        answer.append(n)
        
        if n % 2 == 0:
            n = n // 2
        else:
            n = 3 * n + 1
    answer.append(1)
    return answer

# JavaScript
# function solution(n) {
#     const answer = [];
    
#     while (n !== 1) {
#         answer.push(n);
        
#         if (n % 2 === 0) {
#             n = n / 2;
#         } else {
#             n = 3 * n + 1;
#         }
#     }
    
#     answer.push(1);  // 마지막 1 추가
#     return answer;
# }

# Java
# import java.util.*;

# class Solution {
#     public ArrayList<Integer> solution(int n) {
#         ArrayList<Integer> answer = new ArrayList<>();
        
#         while (n != 1) {
#             answer.add(n);
            
#             if (n % 2 == 0) {
#                 n = n / 2;
#             } else {
#                 n = 3 * n + 1;
#             }
#         }
        
#         answer.add(1);
#         return answer;
#     }
# }