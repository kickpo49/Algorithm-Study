#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


char* solution(const char* myString, const char* pat) {
    int str_len = strlen(myString);
    int pat_len = strlen(pat);
    int last_idx = 0;
    
    // 뒤에서부터 pat이 시작되는 위치를 찾기
    for (int i = str_len - pat_len; i >= 0; i--) {
        if (strncmp(&myString[i], pat, pat_len) == 0) {
            last_idx = i + pat_len;     // pat의 끝나는 위치를 저장
            break;
        }
    }
    // 찾은 길이만큼 메모리를 할당
    char* answer = (char*)malloc(sizeof(char) * (last_idx + 1));
    // 해당 부분까지 복사 후 마지막에 NULL 문자 삽입
    strncpy(answer, myString, last_idx);
    answer[last_idx] = '\0';
    
    return answer;
}