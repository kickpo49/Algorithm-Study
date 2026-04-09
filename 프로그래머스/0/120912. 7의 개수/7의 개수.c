#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// array_len은 배열 array의 길이입니다.
int solution(int array[], size_t array_len) {
    int answer = 0;
    
    // 배열 모든 요소 하나씩 순회
    for (size_t i = 0; i < array_len; i++) {
        int num = array[i];
        // 현재 숫자가 0보다 큰 동안 각 자릿수 확인
        while (num > 0) {
            if (num % 10 == 7) {
                answer++;
            }
            // 숫자를 10으로 나누어 다음 자릿수로 넘어가기
            num /= 10;
        }
    }
    return answer;
}