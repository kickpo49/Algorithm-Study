#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// slicer_len은 배열 slicer의 길이입니다.
// num_list_len은 배열 num_list의 길이입니다.
int* solution(int n, int slicer[], size_t slicer_len, int num_list[], size_t num_list_len) {
    int a = slicer[0];
    int b = slicer[1];
    int c = slicer[2];
    
    int start, end, step = 1;   // 기본 간격은 1
    
    switch (n) {
        case 1:
            start = 0;
            end = b;
            break;
        case 2:
            start = a;
            end = num_list_len - 1;
            break;
        case 3:
            start = a;
            end = b;
            break;
        case 4:
            start = a;
            end = b;
            step = c;
    }
    // 결과 배열의 크기 계산
    int count = (end - start) / step + 1;
    // 동적 메모리 할당
    int* answer = (int*)malloc(sizeof(int) * count);
    // num_list 값 복사
    int idx = 0;
    for (int i = start; i <= end; i += step) {
        answer[idx++] = num_list[i];
    }
    
    return answer;
}