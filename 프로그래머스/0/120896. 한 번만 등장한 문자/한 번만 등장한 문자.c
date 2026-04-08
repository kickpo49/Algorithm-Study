// 문제 해결 전략
// 1. 빈도수 체크: 알파벳 소문자('a'-'z')의 개수는 26개, 각 문자가 몇 번 등장하는지 기록
// 2. 한 번만 등장하는 문자 선별: 빈도수 배열을 확인하며 값이 1인 인덱스(알파벳)만 추출
// 3. 사전순 정렬: 빈도수 배열의 인덱스 0('a')부터 25('z')까지 순차적으로 탐색
// 4. 동적 할당: 결과 문자열의 길이는 최대 26(알파벳 개수) + 1(NULL 문자)

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* s) {
    // 알파벳 등장 횟수 저장할 배열
    // 0으로 초기화
    int count[26] = {0};
    
    // 문자열 s를 순회하며 빈도수 계산
    for (int i = 0; s[i] != '\0'; i++) {
        // 'a'를 빼주면 인덱스 0 ~ 25 사이의 값이 됨
        count[s[i] - 'a']++;
    }
    // 결과 문자열 담을 공간 할당
    // 소문자 총 26개, 최대 길이는 마지막 NULL 포함해서 27
    char* answer = (char*)malloc(sizeof(char) * 27);
    int index = 0;
    
    // 'a'부터 'z'까지 순서대로 확인
    for (int i = 0; i < 26; i++) {
        // 1번만 나온 경우에만 answer에 추가
        if (count[i] == 1) {
            answer[index++] = (char)(i + 'a');
        }
    }
    // 문자열 끝을 알리는 NULL 문자 삽입
    answer[index] = '\0';
    
    return answer;
}