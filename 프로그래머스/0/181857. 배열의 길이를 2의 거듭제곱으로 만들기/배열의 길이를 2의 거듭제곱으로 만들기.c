#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// arr_len은 배열 arr의 길이입니다.
int* solution(int arr[], size_t arr_len) {
    // 목표 길이를 현재 배열 길이로 초기화
    size_t target_len = 1;
    
    // target_len이 arr_len보다 크거나 같아질 때까지 2를 곱함
    while (target_len < arr_len) {
        target_len *= 2;
    }
    // 목표 길이만큼 동적 메모리 할당
    int* answer = (int*)malloc(sizeof(int) * target_len);
    
    // 메모리 할당 실패 시 처리
    if (answer == NULL) return NULL;
    
    // 기존 배열의 데이터를 새로운 배열로 복사
    for (size_t i = 0; i < arr_len; i++) {
        answer[i] = arr[i];
    }
    
    // 나머지 뒷부분을 0으로 채우기
    for (size_t i = arr_len; i < target_len; i++) {
        answer[i] = 0;
    }
    
    return answer;
    
}