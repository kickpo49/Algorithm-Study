#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_string, int s, int e) {
    // 원본 문자열의 길이 구하기
    int len = strlen(my_string);
    
    // 결과 문자열을 담을 메모리 동적 할당을 담을 메모리 동적 할당
    char* answer = (char*)malloc(sizeof(char) * (len + 1));
    
    // 원본 문자열을 할당된 메모리에 복사
    strcpy(answer, my_string);
    
    // 인덱스 s부터 e까지의 구간을 뒤집기
    int left = s;
    int right = e;
    while (left < right) {
        // 임시 변수를 사용하여 두 문자의 위치를 바꾼다
        char temp = answer[left];
        answer[left] = answer[right];
        answer[right] = temp;
        // 인덱스 중앙 방향으로 이동 (s 증가, e 감소)
        left++;
        right--;
    }
    return answer;
}