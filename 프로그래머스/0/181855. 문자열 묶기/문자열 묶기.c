#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h> // strlen 함수 사용을 위해 포함

// strArr_len은 배열 strArr의 길이입니다.
int solution(const char* strArr[], size_t strArr_len) {
    // 길이를 인덱스로 사용하기 위해 31 크기의 배열을 0으로 초기화하여 선언합니다.
    int lengthCount[31] = {0, };
    int answer = 0;

    // 1. 모든 문자열을 순회하며 길이를 체크합니다.
    for (size_t i = 0; i < strArr_len; i++) {
        // 현재 문자열의 길이를 구합니다.
        int len = strlen(strArr[i]);
        
        // 해당 길이를 가진 문자열의 개수를 1 증가시킵니다.
        lengthCount[len]++;
    }

    // 2. 카운팅된 배열에서 가장 큰 값을 찾습니다.
    for (int i = 1; i <= 30; i++) {
        if (lengthCount[i] > answer) {
            answer = lengthCount[i];
        }
    }

    return answer;
}