#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_len은 배열 arr의 길이입니다.
// flag_len은 배열 flag의 길이입니다.
// size_t는 어떤 객체나 메모리 블록의 크기를 나타내기 위해 정의된 자료형
// 부호 없는 정수형: 항상 0 이상의 값을 가진다 (unsigned 계열)
// 시스템 맞춤형: 32비트 운영체제에서는 32비트 크기, 64비트 운영체제에서는 64비트 크기로 자동 조절
int* solution(int arr[], size_t arr_len, bool flag[], size_t flag_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    // 결과를 저장할 배열 X를 위한 포인터와 현재 원소 개수를 저장할 변수
    // 처음에는 빈 배열이므로 size를 0으로 시작
    int* X = NULL;
    int current_size = 0;
    
    for (size_t i = 0; i < flag_len; i++) {
        if (flag[i] == true) {
            // flag[i]가 true인 경우 arr[i]를 2번 추가
            int add_count = arr[i] * 2;
            int next_size = current_size + add_count;
            
            // realloc을 통해 배열 X의 크기를 확장
            // (기존 크기 + 추가될 크기) * sizeof(int) 만큼 메모리를 재할당
            X = (int*)realloc(X, sizeof(int) * next_size);
            
            // 새로운 원소들을 배열 뒤에 추가
            for (int j = 0; j < add_count; j++) {
                X[current_size + j] = arr[i];
            }
            // 현재 원소 개수 업데이트
            current_size = next_size;
        }
        else {
            // flag[i]가 false인 경우 마지막 arr[i]개의 원소 제거
            int remove_count = arr[i];
            
            // 현재 개수에서 제거할 개수를 뺀다
            current_size -= remove_count;
            
            if (current_size < 0) current_size = 0;
            
            // 실제 메모리를 줄여준다
            if (current_size > 0) {
                X = (int*)realloc(X, sizeof(int) * current_size);
            }
            else {
                // 원소가 하나도 없는 경우 할당 해제 후 NULL 처리
                free(X);
                X = NULL;
            }
        }
    }
    return X;
}
