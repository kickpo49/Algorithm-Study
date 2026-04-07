#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// array_len은 배열 array의 길이입니다.
int solution(int array[], size_t array_len, int n) {
    int answer = array[0];  // 초기값: 배열의 첫 번째 원소로 설정
    
    for (size_t i = 1; i < array_len; i++) {
        // 현재 answer와 n의 거리
        int current_diff = abs(answer - n);
        // 새로운 후보(array[i]와 n의 거리)
        int new_diff = abs(array[i] - n);
        
        if (new_diff < current_diff) {
            // 새 후보가 n에 더 가까우면 교체
            answer = array[i];
        } else if (new_diff ==  current_diff) {
            // 거리가 같으면 더 작은 수를 선택
            if (array[i] < answer) {
                answer = array[i];
            }
        }
    }
    return answer;
}