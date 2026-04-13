#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_len은 배열 arr의 길이입니다.
int* solution(int arr[], size_t arr_len) {
    int first_idx = -1;
    int last_idx = -1;

    // 1. 배열을 순회하며 2가 처음 나타나는 인덱스와 마지막으로 나타나는 인덱스를 찾습니다.
    for (int i = 0; i < arr_len; i++) {
        if (arr[i] == 2) {
            if (first_idx == -1) {
                first_idx = i; // 첫 등장 위치 저장
            }
            last_idx = i; // 마지막 등장 위치를 계속 갱신
        }
    }

    // 2. 2가 배열에 하나도 없는 경우 처리
    if (first_idx == -1) {
        int* answer = (int*)malloc(sizeof(int));
        answer[0] = -1;
        return answer;
    }

    // 3. 부분 배열의 길이를 계산합니다.
    // 예: first가 1, last가 4라면 길이는 4 - 1 + 1 = 4 (인덱스 1, 2, 3, 4)
    int result_len = last_idx - first_idx + 1;
    
    // 4. 계산된 길이만큼 메모리를 동적 할당합니다.
    int* answer = (int*)malloc(sizeof(int) * result_len);

    // 5. 원본 배열에서 해당 구간의 값을 복사합니다.
    for (int i = 0; i < result_len; i++) {
        answer[i] = arr[first_idx + i];
    }

    return answer;
}