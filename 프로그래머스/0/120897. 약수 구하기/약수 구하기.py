def solution(n):
    answer = []
    for num in range(1, n+1):
        if n % num == 0:
            answer.append(num)
    return answer

# JavaScript
# function solution(n) {
#     const answer = [];
#     for (let num = 1; num <= n; num++) {
#         if (n % num === 0) {
#             answer.push(num);
#         }
#     }
#     return answer;
# }