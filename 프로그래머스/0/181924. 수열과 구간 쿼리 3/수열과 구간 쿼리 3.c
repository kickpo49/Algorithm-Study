#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h> // memcpy 사용을 위해 포함

// arr_len은 배열 arr의 길이입니다.
// queries_rows는 2차원 배열 queries의 행 길이, queries_cols는 2차원 배열 queries의 열 길이입니다.
int* solution(int arr[], size_t arr_len, int** queries, size_t queries_rows, size_t queries_cols) {
    // 결과 담을 배열을 arr_len 크기만큼 동적 할당
    int* answer = (int*)malloc(sizeof(int) * arr_len);
    
    // 원본 배열 arr의 내용을 answer로 복사
    memcpy(answer, arr, sizeof(int) * arr_len);
    
    // queries에 정의된 대로 순서대로 swap 수행
    for (size_t k = 0; k < queries_rows; k++) {
        int i = queries[k][0];
        int j = queries[k][1];
        // 두 인덱스의 값 교환
        int temp = answer[i];
        answer[i] = answer[j];
        answer[j] = temp;
    }
    return answer;
}