#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* before, const char* after) {
    // (조건) before와 after는 모두 소문자로 이루어져 있다 > 알파벳 26개 저장 배열 필요
    int count[26] = {0};
    
    // 두 문자열의 길이 구하기
    int len_before = strlen(before);
    int len_after = strlen(after);
    
    // 길이가 다르면 무조건 0 반환
    if (len_before != len_after) return 0;
    
    // before 문자열 순회 > 각 알파벳의 빈도수 증가
    for (int i = 0; i < len_before; i++) {
        count[before[i] - 'a']--;
    }
    
    // after 문자열 순회 > 각 알파벳의 빈도수 감소
    for (int i = 0; i < len_after; i++) {
        count[after[i] - 'a']++;
    }
    
    // 카운팅 배열의 모든 값이 0인지 확인
    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            return 0;
        }
    }
    // 모든 검사 통과 시 1 반환
    return 1;
}