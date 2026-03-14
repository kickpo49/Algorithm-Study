#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>     // strlen 함수를 사용하기 위해 포함

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* str1, const char* str2) {
    // 입력된 문자열의 길이를 구함
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    
    // 결과 문자열을 저장할 메모리 공간 할당
    // str1(len) + str2(len) + 널 종료 문자('\0')(1) 만큼의 공간이 필요
    char* answer = (char*)malloc((len1 + len2 + 1) * sizeof(char));
    
    // 할당 실패 시 처리 (메모리가 부족할 경우)
    if (answer == NULL) {
        return NULL;
    }
    // 반복문 사용하여 문자열을 번갈아가며 배치
    // 제한사항: str1의 길이 = str2의 길이
    for (int i = 0; i < len1; i++) {
        // str1의 i번째 문자를 결과의 i * 2 위치에 넣는다 > answer 인덱스 0, 2, 4, ...
        answer[i * 2] = str1[i];
        // str2의 i번째 문자를 결과의 i * 2 + 1 위치에 넣는다 > answer 인덱스 1, 3, 5, ...
        answer[i * 2 + 1] = str2[i];
    }
    // C언어의 문자열의 끝을 알리는 '널 종료 문자'를 마지막에 넣는다
    answer[len1 + len2] = '\0';
    
    return answer;
}