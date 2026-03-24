#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// num_list_len은 배열 num_list의 길이입니다.
int solution(int num_list[], size_t num_list_len) {
    int answer = 0;
    
    for (size_t i = 0; i < num_list_len; i++) {
        int num = num_list[i];
        
        while (num > 1) {
            // 짝수, 홀수 상관없이 2로 나눈 몫을 취하면 문제의 조건을 충족
            num /= 2;
            
            answer++;
        }
    }
    return answer;
}