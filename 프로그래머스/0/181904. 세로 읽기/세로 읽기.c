// #include <stdio.h> : 화면에 글자를 찍는 도구 (Standard Input Output)
#include <stdio.h>

#include <stdbool.h>
// #include <stdlib.h> : 컴퓨터의 메모리를 빌려 쓰는 도구 (Standard Library)
#include <stdlib.h>
// #include <string.h> : 문자열의 길이를 재는 도구 (String)
#include <string.h>

char* solution(const char* my_string, int m, int c) {
    int len = strlen(my_string);
    // 결과 문자열의 길이는 전체 길이 / m
    int result_len = len / m;
    
    // 결과 문자열 메모리 할당 (글자 수 + Null 종료 문자)
    char* answer = (char*)malloc(sizeof(char) * (result_len + 1));
    
    int index = 0;
    // m씩 건너뛰며 반복 (각 행의 시작점)
    for (int i = 0; i < len; i += m) {
        // i는 행의 시작, 거기서 (c-1)만큼 더하면 c번째 열의 글자
        answer[index++] = my_string[i + (c - 1)];
    }
    // 문자열의 끝을 알리는 Null 문자 삽입
    answer[index] = '\0';
    
    return answer;
}