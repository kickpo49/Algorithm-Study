#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* myString, const char* pat) {
    int answer = 0;
    int myString_len = strlen(myString);
    int pat_len = strlen(pat);
    
    // pat 길이가 myString보다 길면 절대 등장할 수 없으므로 0으로 반환
    if (pat_len > myString_len) {
        return 0;
    }
    // myString 처음부터 끝까지 순회하며 pat이 있는지 확인
    // 반복 범위: 전체 길이에서 pat의 길이를 뺀 지점까지만 확인하면 됨
    for (int i = 0; i <= myString_len - pat_len; i++) {
        // strncmp 함수(String Number Compare) 사용 - 현재 위치(myString + i)에서
        // pat_len만큼의 문자열이 pat과 일치하는지 비교
        // strncmp는 두 문자열이 같으면 0을 반환
        // int strncmp(const char *s1, const char *s2, size_t n);
        // s1: 비교할 첫 번째 문자열의 포인터
        // s2: 비교할 두 번째 문자열의 포인터
        // n: 비교할 최대 문자의 개수 (바이트 단위)
        if (strncmp(&myString[i], pat, pat_len) == 0) {
            answer++;   // 일치하면 count 증가
        }
    }
    return answer;
}