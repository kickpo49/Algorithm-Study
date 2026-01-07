# Python3
def solution(arr, k):
    answer = []
    for num in arr:
        if k % 2:  # k가 홀수면
            answer.append(num * k)
        else:      # k가 짝수면
            answer.append(num + k)
    return answer

# Java
# class Solution {
#     public int[] solution(int[] arr, int k) {
#         int[] answer = new int[arr.length];
        
#         for (int i = 0; i < arr.length; i++) {
#             if (k % 2 == 1) {  // k가 홀수면
#                 answer[i] = arr[i] * k;
#             } else {            // k가 짝수면
#                 answer[i] = arr[i] + k;
#             }
#         }
        
#         return answer;
#     }
# }

# JavaScript
# function solution(arr, k) {
#     const answer = [];
    
#     for (let num of arr) {
#         if (k % 2) {  // k가 홀수면
#             answer.push(num * k);
#         } else {      // k가 짝수면
#             answer.push(num + k);
#         }
#     }
    
#     return answer;
# }